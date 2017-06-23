#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "SistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h"
#include "SistemasdeControle/headers/graphicLibs/plot.h"
#include "SistemasdeControle/headers/modelLibs/transferfunction.h"
#include "SistemasdeControle/headers/primitiveLibs/LinAlg/linalg.h"
#include "SistemasdeControle/headers/primitiveLibs/polynom.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    PlotHandler::plot<double> *plotY, *plotU;
    std::string ZPK(PolynomHandler::Polynom<double> Polinomio);
};

#endif // MAINWINDOW_H
