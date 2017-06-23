#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<windows.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    serial = new QSerialPort(this);
    connect(serial, &QSerialPort::readyRead, this, &MainWindow::readData);
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(updateSliderOnChanged(int)));

    pSinal = new PlotHandler::plot<double>(ui->widSINAL);
    pErro  = new PlotHandler::plot<double>(ui->widERRO);
    //pTemp = new PlotHandler::plot<double>(ui->widTEMP);
    pPwm   = new PlotHandler::plot<double>(ui->widPWM);
}

MainWindow::~MainWindow()
{
    delete ui;
    if (serial->isOpen())
        serial->close();
}
void MainWindow::updateSliderOnChanged(int position) {
    ui->label_18->setText(QString::number(position));
}

void MainWindow::on_ConnectPushButton_clicked()
{

    serial->setPortName(ui->PortLineEdit->text());
    serial->setBaudRate(serial->Baud4800);
    serial->setDataBits(serial->Data8);
    serial->setParity(serial->NoParity);
    serial->setStopBits(serial->OneStop);
    serial->setFlowControl(serial->NoFlowControl);

    if (serial->open(QIODevice::ReadWrite)){
        QMessageBox msg; msg.setText("Device Connected!");
        msg.exec();
    } else {
      QMessageBox::critical(this,tr("Error"), serial->errorString());
    }

}

void MainWindow::readData()
{

    QByteArray data = serial->readAll();
    std::string c = QString(data).toStdString();

    ui->textEdit->setText(ui->textEdit->toPlainText()+data);

    ui->textEdit->verticalScrollBar()->setSliderPosition(ui->textEdit->verticalScrollBar()->maximum());



   if(c.find('\r') == -1)
    {
        tempSerialData += c;
    }
    else
    {
        tempSerialData += c;

        std::cout << "M: " << malha << endl;

        if(malha){
            double error = QString(tempSerialData.substr(0, 6).c_str()).toDouble();
            if(error > 127.0)
                error -= 255.0;
            tempSerialData.erase(0, 6);
            QString errorstring = QString::number(error,'g',6);
            ui->ErroLineEdit->setText(errorstring);

            double sinal = QString(tempSerialData.substr(0, 5).c_str()).toDouble();
            tempSerialData.erase(0, 5);
            QString sinalstring = QString::number(sinal,'g',6);
            ui->SinalLineEdit->setText(sinalstring);

            double pwm = QString(tempSerialData.substr(0, 5).c_str()).toDouble();
            tempSerialData.erase(0, 5);
            QString pwmstring = QString::number(pwm,'g',6);
            ui->PWMLineEdit->setText(pwmstring);

            double nivel = QString(tempSerialData.substr(0, 5).c_str()).toDouble();
            tempSerialData.erase(0, 5);
            QString tempstring = QString::number(nivel,'g',6);
            ui->TempLineEdit->setText(tempstring);

            double time = QString(tempSerialData.substr(0, 7).c_str()).toDouble();
            QString timestring = QString::number(time,'g',6);
            ui->TempoLineEdit->setText(timestring);

            pErro->realTimeDataUpdate(time,error);
            pSinal->realTimeDataUpdate(time,nivel);
            pPwm->realTimeDataUpdate(time,pwm);

            tempSerialData.clear();
            int pos = c.find('\r');
            tempSerialData = c.substr(pos+1);

            int nivelt = ((int) nivel * 100)/30;
            ui->progressBar->setValue(nivelt);
        }else{

            double pwm = QString(tempSerialData.substr(0, 5).c_str()).toDouble();
            tempSerialData.erase(0, 5);
            QString pwmstring = QString::number(pwm,'g',5);
            ui->PWMLineEdit->setText(pwmstring);

            double nivel = QString(tempSerialData.substr(0, 5).c_str()).toDouble();
            tempSerialData.erase(0, 5);
            QString tempstring = QString::number(nivel,'g',6);
            ui->TempLineEdit->setText(tempstring);

            double time = QString(tempSerialData.substr(0, 7).c_str()).toDouble();
            QString timestring = QString::number(time,'g',6);
            ui->TempoLineEdit->setText(timestring);

            tempSerialData.clear();
            int pos = c.find('\r');
            tempSerialData = c.substr(pos+1);

            pSinal->realTimeDataUpdate(time,nivel);
            pPwm->realTimeDataUpdate(time,pwm);

            int nivelt = ((int) nivel * 100)/30;
            ui->progressBar->setValue(nivelt);

            Yatual = nivel;

            ui->label_20->setText(std::to_string(contador).c_str());

            if(modulo(Yanterior - Yatual) < 3){
                contador++;
            }else{
                contador = 0;
            }
            if(contador > 100){
                setMalhaFechada();
            }

            Y = Y| LinAlg::Matrix<double>(std::stod(tempstring.toStdString().c_str()));
            U = U| LinAlg::Matrix<double>(std::stod(pwmstring.toStdString().c_str()));

            Yanterior = Yatual;
        }
    }
}

double MainWindow::modulo(double numero){
    if(numero < 0){
        return numero*(-1);
    }else{
        return numero;
    }
}

void MainWindow::setMalhaFechada(){
    QTextCodec *codec = QTextCodec::codecForName("Windows-1251");
    malha = true;
    ui->pushButton_2->setText("Fechada");
    QByteArray encodedString = codec->fromUnicode("f");
    serial->write(encodedString);
    setPIDParametros();
}

void MainWindow::setPIDParametros()
{
    ModelHandler::TransferFunction<double> FOP = ModelHandler::FOPDTSundaresanKrishnaswamy(Y,U,1.0);
//            ModelHandler::TransferFunction<double> FOP = ModelHandler::FOPDTZieglerNichols(Y,U,1);
//            ModelHandler::TransferFunction<double> FOP = ModelHandler::FOPDTCurvaDeReacao(Y,U,1);
//            ModelHandler::TransferFunction<double> FOP = ModelHandler::FOPDTSmith(Y,U,1);
    ControlHandler::PID<double> PID = ControlHandler::tunningZieglerNichols(FOP,"PID");
    LinAlg::Matrix<double> PIDParametros = PID.getParams();
    std::string kp = std::to_string(PIDParametros(1,1));
    std::string ki = std::to_string(PIDParametros(1,2));
    std::string kd = std::to_string(PIDParametros(1,3));
    sendPID(kp,ki,kd);
}


void MainWindow::sendPID(std::string kp, std::string ki, std::string kd)
{
    int delayTime = 1;
    QTextCodec *codec = QTextCodec::codecForName("Windows-1251");
    //envio de kp
    for(unsigned i = 0; i < kp.length(); ++i){
        std::string send; send = kp[i];

        QByteArray encodedString = codec->fromUnicode(send.c_str());
        serial->write(encodedString);
        delay(delayTime);
    }
    QByteArray encodedString = codec->fromUnicode("p");
    serial->write(encodedString);
    delay(delayTime);

    //envio de ki
    for(unsigned i = 0; i < ki.length(); ++i){
        std::string send; send = ki[i];

        QByteArray encodedString1 = codec->fromUnicode(send.c_str());
        serial->write(encodedString1);
        delay(delayTime);
    }
    QByteArray encodedString1 = codec->fromUnicode("i");
    serial->write(encodedString1);
    delay(delayTime);

    //envio de kd
    for(unsigned i = 0; i < kd.length(); ++i){
        std::string send; send = kd[i];

        QByteArray encodedString2 = codec->fromUnicode(send.c_str());
        serial->write(encodedString2);
        delay(delayTime);
    }
    QByteArray encodedString2 = codec->fromUnicode("d");
    serial->write(encodedString2);
}


void MainWindow::on_DisconnectPushButton_clicked()
{
    if (serial->isOpen())
        serial->close();

    QMessageBox msg; msg.setText("Disconnected!");
    msg.exec();
}


void MainWindow::on_ClearPushButton_clicked()
{
    ui->textEdit->clear();
    ui->ErroLineEdit->clear();
    ui->SinalLineEdit->clear();
    ui->PWMLineEdit->clear();
    ui->TempLineEdit->clear();
    ui->TempoLineEdit->clear();
    ui->PortLineEdit->clear();
    pSinal = new PlotHandler::plot<double>(ui->widSINAL);
    pErro  = new PlotHandler::plot<double>(ui->widERRO);
    //pTemp = new PlotHandler::plot<double>(ui->widTEMP);
    pPwm   = new PlotHandler::plot<double>(ui->widPWM);
}

void MainWindow::delay(int second)
{
    QTime dieTime= QTime::currentTime().addSecs(second);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void MainWindow::on_SendPushButton_clicked()
{
    QTextCodec *codec = QTextCodec::codecForName("Windows-1251");
    std::string str = ui->SendLineEdit->text().toStdString();
    for(unsigned i = 0; i < str.length(); ++i){
        std::string send; send = str[i];

        QByteArray encodedString = codec->fromUnicode(send.c_str());
        serial->write(encodedString);
        delay(2);
    }
    QByteArray encodedString = codec->fromUnicode(" ");
    serial->write(encodedString);
}

void MainWindow::on_progressBar_destroyed()
{

}



void MainWindow::on_pushButton_clicked()
{    
    sendPID(ui->kp->text().toStdString(),ui->ki->text().toStdString(),ui->kd->text().toStdString());
}

void MainWindow::on_pushButton_2_toggled(bool checked){}

void MainWindow::on_pushButton_2_clicked()
{
    QTextCodec *codec = QTextCodec::codecForName("Windows-1251");
    if(malha){
        malha = false;
        ui->pushButton_2->setText("Aberta");
        QByteArray encodedString = codec->fromUnicode("a");
        serial->write(encodedString);
        delay(2);
        on_ClearPushButton_clicked();
    }else{
        malha = true;
        ui->pushButton_2->setText("Fechada");
        QByteArray encodedString = codec->fromUnicode("f");
        serial->write(encodedString);
        on_ClearPushButton_clicked();
    }

}


void MainWindow::on_pushButton_3_clicked()
{
    QTextCodec *codec = QTextCodec::codecForName("Windows-1251");

    //envio de pwm degrau
    std::string pwm = std::to_string(ui->horizontalSlider->value()).c_str();
    for(unsigned i = 0; i < pwm.length(); ++i){
        std::string send; send = pwm[i];

        QByteArray encodedString = codec->fromUnicode(send.c_str());
        serial->write(encodedString);
        delay(2);
    }
    QByteArray encodedString = codec->fromUnicode("m");
    serial->write(encodedString);
    delay(2);
    encodedString = codec->fromUnicode(" ");
    serial->write(encodedString);

}

void MainWindow::on_horizontalSlider_sliderMoved(int position)
{

}
