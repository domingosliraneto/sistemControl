#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QtSerialPort/QSerialPort>
#include "SistemasdeControle/headers/graphicLibs/plot.h"
#include "SistemasdeControle/headers/primitiveLibs/polynom.h"
#include "SistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h"
#include "SistemasdeControle/headers/controlLibs/pid.h"
#include "SistemasdeControle/headers/modelLibs/transferfunction.h"
#include <iostream>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void readData();
    void delay(int second);
    void setSliderValue(int);

private slots:
    void on_ConnectPushButton_clicked();

    void on_DisconnectPushButton_clicked();

    void on_ClearPushButton_clicked();

    void on_SendPushButton_clicked();

    void on_progressBar_destroyed();


    void on_pushButton_clicked();

    void on_pushButton_2_toggled(bool checked);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_horizontalSlider_sliderMoved(int position);

    void updateSliderOnChanged(int position);

    void setMalhaFechada();

    void setPIDParametros();

    void sendPID(std::string kp, std::string ki, std::string kd);

    double modulo(double numero);

private:
    bool malha = true;
    int contador = 0;
    Ui::MainWindow *ui;
    QSerialPort *serial;
    std::string tempSerialData;
    double Yatual, Yanterior;
    LinAlg::Matrix<double> Y, U;
    PlotHandler::plot<double> *pSinal, *pTemp, *pPwm, *pErro;


};

#endif // MAINWINDOW_H
