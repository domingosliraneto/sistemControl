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

    //std::string a = FACEXP(Polinomio);
    std::string b = ZPK(Polinomio);
    ModelHandler::TransferFunction<double> TF(num,den);
    std::cout<< isStable(TF) << std::endl;
    std::cout<< routhHurwitz(TF) << std::endl;
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

std::string MainWindow::FACEXP(PolynomHandler::Polynom<double> Polinomio)
{
    LinAlg::Matrix<double> NUM = Polinomio.getNum();
    LinAlg::Matrix<double> DEN = Polinomio.getDen();

    std::string strnum;
    std::string strden;

    NUM = NUM/DEN(1,1);
    DEN= DEN/DEN(1,1);

    DEN = PolynomHandler::rootsNewtonBairstow(DEN);

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

    std::cout << strnum <<  std::endl;

    return strnum+strden;
}

bool MainWindow::isStable(const ModelHandler::TransferFunction<double> &TF)
{
    LinAlg::Matrix<double> den = TF(1,1).getDen();
    LinAlg::Matrix<double> roots = PolynomHandler::rootsNewtonBairstow(den);

    std::cout<< roots << std::endl;

    unsigned countRoots = 0;

    for(unsigned i = 1; i <= roots.getNumberOfRows(); ++i)
    {
        if (roots(i,1) > 0)
            return false;
        else if(roots(i,1) == 0 && roots(i,2) != 0)
            countRoots++;
        else if(roots(i,1) == 0 && roots(i,2) == 0)
            return false;
        if(countRoots > 2)
            return false;
    }
    return true;
}

bool MainWindow::routhHurwitz(const ModelHandler::TransferFunction<double> &TF)
{
    LinAlg::Matrix<double> den = TF(1,1).getDen();
    if(den(1,1) < 0)
        den = -den;
    for(unsigned i = 1; i <= den.getNumberOfColumns(); ++i)
        if(den(1,i) < 0)
            return false;
    LinAlg::Matrix<double> table(den.getNumberOfColumns(), ceil(float(den.getNumberOfColumns())/2.0));
    for(unsigned i = 1; i <= table.getNumberOfColumns(); ++i)
    {
        table(1,i) = den(1,2*i-1);
        if(2*i > den.getNumberOfColumns())
            break;
        table(2,i) = den(1,2*i);
    }
    LinAlg::Matrix<double> det(2,2);
    for(unsigned i = 3; i <= table.getNumberOfRows(); ++i)
    {
        det(1,1) = table(i-2,1); det(2,1) = table(i-1,1);
        for(unsigned j = 1; j <= table.getNumberOfColumns(); ++j)
        {
            det(1,2) = table(i-2,j+1); det(2,2) = table(i-1,j+1);
            table(i,j) = -LinAlg::Determinant(det)/det(2,1);
        }
        if(table(i,1) < 0)
            return false;
    }
    std::cout<< table << std::endl;
    return true;
}

