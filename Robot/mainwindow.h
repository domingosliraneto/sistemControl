#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "robotica.h"
#include "sistemasdecontrole/headers/optimizationLibs/pso.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    robotica robot;

private slots:
    void on_pushButton_X_clicked();

    void on_pushButton_Y_clicked();

    void on_pushButton_Z_clicked();

    void on_pushButton_Posicao_clicked();

    void on_pushButton_Euler_clicked();

    void on_comboBox_Graus_currentIndexChanged(int index);

    void on_comboBox_Efetuador_currentIndexChanged(int index);

    void on_pushButton_Inversa_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
