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
    const int myNetArray[3] = {3, 2, 1};
        vector<int> myNet(myNetArray, myNetArray + sizeof(myNetArray) / sizeof(int));

        const int patternSize = 2;

        const double myTestOne[patternSize] = {1, 1};
        double oneOut = 1;
        const double myTestTwo[patternSize] = {1, 1};
        double twoOut = 1;
        const double myTestThree[patternSize] = {1, 1};
        double threeOut = 1;
        const double myTestFour[patternSize] = {1, 1};
        double fourOut = 1;

        Pattern firstPattern(patternSize, (double *)&myTestOne, &oneOut);
        Pattern secondPattern(patternSize, (double *)&myTestTwo, &twoOut);
        Pattern thirdPattern(patternSize, (double *)&myTestThree, &threeOut);
        Pattern fourthPattern(patternSize, (double *)&myTestFour, &fourOut);

        Backpropagation * myNeuralNetwork = new Backpropagation(myNet, patternSize);

        double errors[4];
        double currentError = numeric_limits<double>::max();
        unsigned long long int iteration = 0;

        timeval timer;

        gettimeofday(&timer, 0);

        double start = (timer.tv_sec * 1000000) + timer.tv_usec;

        while(currentError > 0.0001)
        {
            errors[0] = myNeuralNetwork->train(firstPattern);
            errors[1] = myNeuralNetwork->train(secondPattern);
            errors[2] = myNeuralNetwork->train(thirdPattern);
            errors[3] = myNeuralNetwork->train(fourthPattern);

            double largest = errors[0];

            for(int i = 0; i < 4; i++)
            {
                if(errors[i] > largest)
                {
                    largest = errors[i];
                }
            }

            if(largest < currentError)
            {
                currentError = largest;
            }

            iteration += 4;
        }

        gettimeofday(&timer, 0);

        double end = (timer.tv_sec * 1000000) + timer.tv_usec;

        std::ostringstream os; os <<"Erro: " << currentError <<std::endl;
        std::string str = os.str();
        ui->textEdit->append(str.c_str());

        std::ostringstream os1; os1 << "Épocas: " << iteration << std::endl;
        std::string str1 = os1.str();
        ui->textEdit->append(str1.c_str());

        std::ostringstream os2; os2 << "Épocas por segundos: " << iteration / ((end - start) / 1000000) << std::endl;
        std::string str2 = os2.str();
        ui->textEdit->append(str2.c_str());

        ui->textEdit->append("Teste:");
        ui->textEdit->append("Input | Output:");
        myNeuralNetwork->feedForward((double *)&myTestOne);
        std::ostringstream os3; os3 <<"\n" << myTestOne[0]<<' '<<' '<<myTestOne[1]<<' '<<' '<<' '<<'|'<<' '<<' '<<myNeuralNetwork->getOutput()[0]*2.1;
        std::string str3 = os3.str();
        ui->textEdit->append(str3.c_str());

        myNeuralNetwork->feedForward((double *)&myTestTwo);
        std::ostringstream os4; os4 << myTestTwo[0]<<' '<<' '<< myTestTwo[1]<<' '<<' ' <<' '<<'|'<<' '<<' '<<myNeuralNetwork->getOutput()[0]*2.1;
        std::string str4 = os4.str();
        ui->textEdit->append(str4.c_str());

        myNeuralNetwork->feedForward((double *)&myTestThree);
        std::ostringstream os5; os5 << myTestThree[0]<<' '<<' '<< myTestThree[1]<<' '<<' '<<' '<<'|'<<' '<<' '<< myNeuralNetwork->getOutput()[0]*2.1;
        std::string str5 = os5.str();
        ui->textEdit->append(str5.c_str());

        myNeuralNetwork->feedForward((double *)&myTestFour);
        std::ostringstream os6; os6 << myTestFour[0]<<' '<<' '<< myTestFour[1]<<' '<<' '<<' '<<'|'<<' '<<' '<< myNeuralNetwork->getOutput()[0]*2.1;
        std::string str6 = os6.str();
        ui->textEdit->append(str6.c_str());

        delete myNeuralNetwork;
}
