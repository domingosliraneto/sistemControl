#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    isControling = 0;
    isIdentifying = 0;
    PWMAtual = 1;
    dadoNivel = 0;
    controlSignal =0;
    wifi = 0;
    P[0] = new PlotHandler::plot<double>(ui->sinalControle);
    P[1] = new PlotHandler::plot<double>(ui->SinalSaida);
    P[2] = new PlotHandler::plot<double>(ui->sinalControle_2);
    P[3] = new PlotHandler::plot<double>(ui->SinalSaida_2);
    PID.setParams(1,1,0);
    PID.setSampleTime(0.1);
    PID.setLimits(200,1);
    TempoInicio = QTime::currentTime().msecsSinceStartOfDay();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Conectar_clicked()
{
    this->wifi = new Client(ui->HostInput->currentText(), ui->PortaInput->text().toInt());
    connect(wifi,SIGNAL(connectionSuccessful()),this,SLOT(onConected()));
    wifi->writeData("_b_"); // Zera o PWM
}

void MainWindow::on_Desconectar_clicked()
{
    this->wifi->DisconnectFromHost();
    QMessageBox msgBox;
    msgBox.setText("Desconectado");
    msgBox.setWindowTitle("Alerta");
    msgBox.exec();
}

void MainWindow::controlePID()
{
    unsigned char *data = this->wifi->dataReceived();
    LinAlg::Matrix<double> dados(1,1);
    dados(1,1) = data[1];
    dados(1,1) = rescale(ui->NivelMax->text().toDouble(), ui->NivelMin->text().toDouble(), 127, 0, dados(1,1));
    dadoNivel = dados(1,1);
    controlSignal = PID.OutputControl(ui->ref->text().toDouble(),dadoNivel);

    if(controlSignal > PWMAtual)
        for(int i = PWMAtual; i < int(controlSignal); ++i)
        {
            wifi->writeData("_1_");
            PWMAtual = i;
        }
    else
        for(int i = PWMAtual; i > int(controlSignal); --i)
        {
            wifi->writeData("_0_");
            PWMAtual = i;
        }
    PWMAtual = controlSignal;
    P[0]->realTimeDataUpdate((QTime::currentTime().msecsSinceStartOfDay()-TempoInicio)/1000, controlSignal);
    P[1]->realTimeDataUpdate((QTime::currentTime().msecsSinceStartOfDay()-TempoInicio)/1000, dadoNivel);
}



void MainWindow::onConected()
{
    QMessageBox msgBox;
    msgBox.setText("Conexão realizada com sucesso!");
    msgBox.setWindowTitle("Alerta");
    msgBox.exec();
}


void MainWindow::on_controle_clicked()
{
    if(wifi)
        if(!isControling)
        {
            connect(this->wifi, SIGNAL(hasReadData()), this, SLOT(controlePID()));
            QMessageBox msgBox;
            msgBox.setText("Começando O Controle");
            msgBox.setWindowTitle("Alerta");
            msgBox.exec();
            ui->controle->setText("Parar Controle");
            isControling = 1;
            PID.setParams(ui->Kp->text().toDouble(),ui->Ki->text().toDouble(),ui->Kd->text().toDouble());
            wifi->writeData("_b_");
            PWMAtual= 1;
            TempoInicio = QTime::currentTime().msecsSinceStartOfDay();
//            P[0] = new PlotHandler::plot<double>(ui->sinalControle);
//            P[1] = new PlotHandler::plot<double>(ui->SinalSaida);
        }
        else
        {
            disconnect(this->wifi, SIGNAL(hasReadData()), this, SLOT(controlePID()));
            QMessageBox msgBox;
            msgBox.setText("O Controle foi Parado");
            msgBox.setWindowTitle("Alerta");
            msgBox.exec();
            ui->controle->setText("Iniciar Controle");
            isControling = 0;
        }
    else
    {
        QMessageBox msgBox;
        msgBox.setText("Não há conexão! Conecte a um dispositivo utilizando a aba Conexão!");
        msgBox.setWindowTitle("ERRO");
        msgBox.exec();
    }


}


void MainWindow::aquisicaoDados()
{
    unsigned char *data = this->wifi->dataReceived();
    LinAlg::Matrix<double> dados(1,1);

//    if(data[1] > pow(2,14))
//        dados(1,1) = -(data[1] - pow(2,15))+ pow(2,7);
//    else
//        dados(1,1) = data[1];
//    if(data[0] > pow(2,14))
//        dados(1,1) = 256*(data[0] - pow(2,15)) - dados(1,1);
//    else
        dados(1,1) += data[1];

    dados(1,1) = rescale(ui->NivelMax->text().toDouble(), ui->NivelMin->text().toDouble(), 127, 0, dados(1,1));
    dadoNivel = dados(1,1);

    controlSignal  = ui->horizontalScrollBar->value();
    if(controlSignal > PWMAtual)
        for(int i = PWMAtual; i < int(controlSignal); ++i)
        {
            wifi->writeData("_1_");
            PWMAtual = i;
        }
    else
        for(int i = PWMAtual; i > int(controlSignal); --i)
        {
            wifi->writeData("_0_");
            PWMAtual = i;
        }
    PWMAtual = controlSignal;
    ui->horizontalScrollBar->setValue(PWMAtual);
    P[2]->realTimeDataUpdate((QTime::currentTime().msecsSinceStartOfDay()-TempoInicio)/1000, controlSignal);
    P[3]->realTimeDataUpdate((QTime::currentTime().msecsSinceStartOfDay()-TempoInicio)/1000, dadoNivel);
}

void MainWindow::on_identificacao_clicked()
{
    if(wifi)
        if(!isIdentifying)
        {
            connect(this->wifi, SIGNAL(hasReadData()), this, SLOT(aquisicaoDados()));
            QMessageBox msgBox;
            msgBox.setText("Começando A Aquisição de Informações");
            msgBox.setWindowTitle("Alerta");
            msgBox.exec();
            ui->identificacao->setText("Parar A Aquisição de Informações");
            wifi->writeData("_b_");
            PWMAtual= 1;
            isIdentifying = 1;
            TempoInicio = QTime::currentTime().msecsSinceStartOfDay();
//            P[2] = new PlotHandler::plot<double>(ui->sinalControle_2);
//            P[3] = new PlotHandler::plot<double>(ui->SinalSaida_2);
        }
        else
        {
            disconnect(this->wifi, SIGNAL(hasReadData()), this, SLOT(aquisicaoDados()));
            QMessageBox msgBox;
            msgBox.setText("A Aquisição de Informações foi Parada");
            msgBox.setWindowTitle("Alerta");
            msgBox.exec();
            ui->identificacao->setText("Iniciar A Aquisição de Informações");
            isIdentifying = 0;
        }

    else
    {
        QMessageBox msgBox;
        msgBox.setText("Não há conexão! Conecte a um dispositivo utilizando a aba Conexão!");
        msgBox.setWindowTitle("ERRO");
        msgBox.exec();
    }
}

void MainWindow::on_horizontalScrollBar_actionTriggered(int action)
{
    ui->valorPWM->setText(QString::number(ui->horizontalScrollBar->value()));
}

void MainWindow::on_pushButton_clicked()
{
    wifi->writeData(ui->lineEdit->text());
}
