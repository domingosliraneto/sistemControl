#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QMessageBox>
#include <QFile>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQueryModel>
#include <QSqlQuery>
#include <QDebug>
#include <QFileInfo>
#include <Communication/client.h>
#include "SistemasdeControle/headers/graphicLibs/plot.h"
#include "SistemasdeControle/headers/controlLibs/pid.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    LinAlg::Matrix<double> importData(const char* local);
    void exportData(const char* local);

private slots:
    void on_Conectar_clicked();
    void on_Desconectar_clicked();
    void controlePID();
    void aquisicaoDados();
    void onConected();
    void on_controle_clicked();


    void on_identificacao_clicked();

    void on_horizontalScrollBar_actionTriggered(int action);

    void on_pushButton_clicked();

private:
    double rescale(double Xmax, double Xmin, double Ymax, double Ymin, double Y){
        return ((Y - Ymin)/(Ymax - Ymin)) * (Xmax - Xmin) + Xmin;
    }

    ControlHandler::PID<double> PID;
    PlotHandler::plot<double> *P[4];
    Client *wifi;
    Ui::MainWindow *ui;
    int PWMAtual;
    double controlSignal, dadoNivel, TempoInicio;
    bool isControling, isIdentifying;
};

#endif // MAINWINDOW_H
