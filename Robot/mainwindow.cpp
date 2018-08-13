#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    if (ui->comboBox_Graus->currentIndex() == 0){
        ui->widget_Junta_1->hide();
        ui->widget_Junta_2->hide();
        ui->widget_Junta_3->hide();
        ui->widget_Junta_4->hide();
        ui->widget_Junta_5->hide();
        ui->widget_Junta_6->hide();
        ui->widget_Junta_7->hide();
        ui->widget_Junta_8->hide();
        ui->widget_Junta_9->hide();
    }

    if (ui->comboBox_Efetuador->currentText() == "Não"){
        ui->widget_Efetuador->hide();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_X_clicked()
{

    LinAlg::Matrix<double> resultado;

    resultado = robot.rotX(ui->lineEdit_X->text().toDouble());

    std::string str ; str << resultado;

    ui->textEdit_Console->setText(QString::fromStdString(str));
}

void MainWindow::on_pushButton_Y_clicked()
{
    LinAlg::Matrix<double> resultado;

    resultado = robot.rotY(ui->lineEdit_Y->text().toDouble());

    std::string str ; str << resultado;


    ui->textEdit_Console->setText(QString::fromStdString(str));
}

void MainWindow::on_pushButton_Z_clicked()
{
    LinAlg::Matrix<double> resultado;

    resultado = robot.rotZ(ui->lineEdit_Z->text().toDouble());

    std::string str ; str << resultado;

    ui->textEdit_Console->setText(QString::fromStdString(str));
}

void MainWindow::on_pushButton_Euler_clicked()
{
    LinAlg::Matrix<double> resultado;

    LinAlg::Matrix<double> angles(1,3);
    angles(1,1) = ui->lineEdit_X->text().toDouble();
    angles(1,2) = ui->lineEdit_Y->text().toDouble();
    angles(1,3) = ui->lineEdit_Z->text().toDouble();

    resultado = robot.eulerAngles(angles);

    std::string str ; str << resultado;

    ui->textEdit_Console->setText(QString::fromStdString(str));
}

void MainWindow::on_pushButton_Posicao_clicked()
{
    LinAlg::Matrix<double> resultado_parcial;

    LinAlg::Matrix<double> angles(1,3);
    angles(1,1) = ui->lineEdit_X->text().toDouble();
    angles(1,2) = ui->lineEdit_Y->text().toDouble();
    angles(1,3) = ui->lineEdit_Z->text().toDouble();

    resultado_parcial = robot.eulerAngles(angles);

    LinAlg::Matrix<double> posicao(4,1);
    posicao(1,1) = ui->lineEdit_Px->text().toDouble();
    posicao(2,1) = ui->lineEdit_Py->text().toDouble();
    posicao(3,1) = ui->lineEdit_Pz->text().toDouble();
    posicao(4,1) = 1;

    LinAlg::Matrix<double> resultado;

    resultado = resultado_parcial*posicao;

    std::string str ; str << resultado;

    ui->textEdit_Console->setText(QString::fromStdString(str));

}

void MainWindow::on_comboBox_Graus_currentIndexChanged(int index)
{

    if (ui->comboBox_Graus->currentIndex() == 1){
        ui->widget_Junta_1->show();
        ui->widget_Junta_2->hide();
        ui->widget_Junta_3->hide();
        ui->widget_Junta_4->hide();
        ui->widget_Junta_5->hide();
        ui->widget_Junta_6->hide();
        ui->widget_Junta_7->hide();
        ui->widget_Junta_8->hide();
        ui->widget_Junta_9->hide();
    }
    if (ui->comboBox_Graus->currentIndex() == 2){
        ui->widget_Junta_1->show();
        ui->widget_Junta_2->show();
        ui->widget_Junta_3->hide();
        ui->widget_Junta_4->hide();
        ui->widget_Junta_5->hide();
        ui->widget_Junta_6->hide();
        ui->widget_Junta_7->hide();
        ui->widget_Junta_8->hide();
        ui->widget_Junta_9->hide();
    }
    if (ui->comboBox_Graus->currentIndex() == 3){
        ui->widget_Junta_1->show();
        ui->widget_Junta_2->show();
        ui->widget_Junta_3->show();
        ui->widget_Junta_4->hide();
        ui->widget_Junta_5->hide();
        ui->widget_Junta_6->hide();
        ui->widget_Junta_7->hide();
        ui->widget_Junta_8->hide();
        ui->widget_Junta_9->hide();
    }
    if (ui->comboBox_Graus->currentIndex() == 4){
        ui->widget_Junta_1->show();
        ui->widget_Junta_2->show();
        ui->widget_Junta_3->show();
        ui->widget_Junta_4->show();
        ui->widget_Junta_5->hide();
        ui->widget_Junta_6->hide();
        ui->widget_Junta_7->hide();
        ui->widget_Junta_8->hide();
        ui->widget_Junta_9->hide();
    }
    if (ui->comboBox_Graus->currentIndex() == 5){
        ui->widget_Junta_1->show();
        ui->widget_Junta_2->show();
        ui->widget_Junta_3->show();
        ui->widget_Junta_4->show();
        ui->widget_Junta_5->show();
        ui->widget_Junta_6->hide();
        ui->widget_Junta_7->hide();
        ui->widget_Junta_8->hide();
        ui->widget_Junta_9->hide();
    }
    if (ui->comboBox_Graus->currentIndex() == 6){
        ui->widget_Junta_1->show();
        ui->widget_Junta_2->show();
        ui->widget_Junta_3->show();
        ui->widget_Junta_4->show();
        ui->widget_Junta_5->show();
        ui->widget_Junta_6->show();
        ui->widget_Junta_7->hide();
        ui->widget_Junta_8->hide();
        ui->widget_Junta_9->hide();
    }

    if (ui->comboBox_Graus->currentIndex() == 7){
        ui->widget_Junta_1->show();
        ui->widget_Junta_2->show();
        ui->widget_Junta_3->show();
        ui->widget_Junta_4->show();
        ui->widget_Junta_5->show();
        ui->widget_Junta_6->show();
        ui->widget_Junta_7->show();
        ui->widget_Junta_8->hide();
        ui->widget_Junta_9->hide();
    }
    if (ui->comboBox_Graus->currentIndex() == 8){
        ui->widget_Junta_1->show();
        ui->widget_Junta_2->show();
        ui->widget_Junta_3->show();
        ui->widget_Junta_4->show();
        ui->widget_Junta_5->show();
        ui->widget_Junta_6->show();
        ui->widget_Junta_7->show();
        ui->widget_Junta_8->show();
        ui->widget_Junta_9->hide();
    }
    if (ui->comboBox_Graus->currentIndex() == 9){
        ui->widget_Junta_1->show();
        ui->widget_Junta_2->show();
        ui->widget_Junta_3->show();
        ui->widget_Junta_4->show();
        ui->widget_Junta_5->show();
        ui->widget_Junta_6->show();
        ui->widget_Junta_7->show();
        ui->widget_Junta_8->show();
        ui->widget_Junta_9->show();
    }
}

void MainWindow::on_comboBox_Efetuador_currentIndexChanged(int index)
{
    if (ui->comboBox_Efetuador->currentText() == "Sim"){
        ui->widget_Efetuador->show();
    } else {
        ui->widget_Efetuador->hide();
    }
}

void MainWindow::on_pushButton_Inversa_clicked()
{
    LinAlg::Matrix<double> target = ui->lineEdit_XYZ->text().toStdString().c_str();

    std::cout << target << std::endl;

    PSO<double> p; // procurar pelo arquivo pso.h e pso.hpp. Principalmente nesse segundo, veja a linha 6

    p.SetPopSize(ui->lineEdit_PopSize->text().toInt());

    p.SetGenSize(ui->lineEdit_GenSize->text().toInt());

    p.SetPhi1(ui->lineEdit_Phi1->text().toDouble());

    p.SetPhi2(ui->lineEdit_Phi2->text().toDouble());

    LinAlg::Matrix<double> resultado = p.Optimize(target);
    for(unsigned i = 0; i < 1; ++i)
        resultado = p.Optimize(target, resultado);
    std::cout << resultado << std::endl;

    double O1 = resultado(1,1), O2 = resultado(1,2), O3 = resultado(1,3), O4 = resultado(1,4), O5 = resultado(1,5);

    double x = 10*cos(O5)*(cos(O1)*cos(O2)*sin(O3) + cos(O1)*cos(O3)*sin(O2)) + 24*cos(O1)*cos(O2) + 10*sin(O5)*(cos(O4)*(cos(O1)*cos(O2)*cos(O3) - cos(O1)*sin(O2)*sin(O3)) + sin(O1)*sin(O4)) + 14*cos(O1)*cos(O2)*sin(O3) + 14*cos(O1)*cos(O3)*sin(O2);
    double y = 10*cos(O5)*(cos(O2)*sin(O1)*sin(O3) + cos(O3)*sin(O1)*sin(O2)) + 24*cos(O2)*sin(O1) + 10*sin(O5)*(cos(O4)*(cos(O2)*cos(O3)*sin(O1) - sin(O1)*sin(O2)*sin(O3)) - cos(O1)*sin(O4)) + 14*cos(O2)*sin(O1)*sin(O3) + 14*cos(O3)*sin(O1)*sin(O2);
    double z = 24*sin(O2) - 14*cos(O2 + O3) + 5*sin(O2 + O3)*sin(O4 + O5) - 10*cos(O2 + O3)*cos(O5) - 5*sin(O2 + O3)*sin(O4 - O5) + 8;

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;


}
