#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
   /* LinAlg::Matrix<double> Y = "1,2,3,4,5" ; // so tem uma linha pos virgula so separa os elementos
     LinAlg::Matrix<double> A = "1,2;3,4" ;  // ; faz qquebra de linha nesse caso te duas linhas
     era test*/

//    std::string pol =
//            ui->lineEdit->text().toStdString(); // pega polinomio e trasforma em string

//    std::string num =
//            pol.substr(0,pol.find('/')); // pega string da primeira posiçao ate a barra (numerador)

//    std::string den =
//            pol.substr(pol.find('/')+1); // pega string depois da barra (denuminador)

//    ModelHandler::TransferFunction<double>
//            TF(num,den);
//            std::string str ; str<< TF;
//    ui->textEdit->setText(str.c_str());


//    LinAlg::Matrix<double> U =
//            ui->lineEdit_2->text().toStdString();
//    LinAlg::Matrix<double> Y = TF.sim(U);

//    plotU =  new PlotHandler::plot<double>(U,ui->widget);
//    plotY =  new PlotHandler::plot<double>(Y,ui->widget_2); // coloca Y no grafico


//    //std::string str; str << A; // convert A para string
//    ui->textEdit->setText(str.c_str()); // coloca no text edit

    //PolynomHandler pol2 = ui->lineEdit->text();
    std::string pol = ui->lineEdit->text().toStdString();
    std::string num = pol.substr(0,pol.find('/'));
    std::string den = pol.substr(pol.find('/')+1);

    PolynomHandler::Polynom<double> Polinomio(num,den);
// ///////// criar funçao que receba o polinomio e retorn string

    std::string a=ZPK(Polinomio);
}


std::string MainWindow::ZPK(PolynomHandler::Polynom<double> Polinomio){

    LinAlg::Matrix<double> NUM = Polinomio.getNum();
    LinAlg::Matrix<double> DEN = Polinomio.getDen();

    std::string strnum;
    std::string strden;

    NUM = NUM/DEN(1,1);
    DEN= DEN/DEN(1,1);

    double gain= NUM(1,1);

    NUM=NUM/NUM(1,1);
    NUM=PolynomHandler::rootsNewtonBairstow(NUM);
    DEN=PolynomHandler::rootsNewtonBairstow(DEN);
    if(gain != 1){
        std::stringstream ss; ss << gain; strnum += ss.str();
    }
    for (unsigned i = 1; i<= NUM.getNumberOfRows();++i)
    {
       if( NUM(i,2) == 0){
           strnum += "(";
           strnum += PolynomHandler::printSmallPolynom(PolynomHandler::Root2Poly(NUM.getRow(i)));
           strnum += ")";
       }
       else{
           strnum += "(";
           strnum += PolynomHandler::printSmallPolynom(PolynomHandler::Root2Poly(NUM.getRow(i)||NUM.getRow(i+1)));
           strnum += ")";
           ++i;
       }
    }

    for (unsigned i = 1; i<= DEN.getNumberOfRows();++i)
    {
       if( DEN(i,2) == 0){
           strden += "(";
           strden += PolynomHandler::printSmallPolynom(PolynomHandler::Root2Poly(DEN.getRow(i)));
           strden += ")";
       }
       else{
           strden += "(";
           strden += PolynomHandler::printSmallPolynom(PolynomHandler::Root2Poly(DEN.getRow(i)||DEN.getRow(i+1)));
           strden += ")";
           ++i;
       }
    }
    unsigned max = strnum.length();
    if (max<strden.length())
        max=strden.length();

    for(unsigned i = 0; i < unsigned(fabs((max - strnum.length())/2)); ++i)
        strnum = ' ' + strnum;
    for(unsigned i = 0; i < unsigned(fabs((max - strden.length())/2)); ++i)
        strden = ' ' + strden;

    strnum += "\n";
    for (unsigned i = 1; i<= max;++i)
    {
        strnum += "-";
    }
    strnum += "\n";

    std::cout << strnum+strden <<  std::endl;

    return strnum+strden;
}
