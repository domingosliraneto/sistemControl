#ifndef ROBOTICA_H
#define ROBOTICA_H

#include <math.h>
#include <SistemasdeControle/headers/primitiveLibs/LinAlg/linalg.h>
#include <SistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h>

#define PI 3.14159265

class robotica
{
public:

    LinAlg::Matrix<double> rotX(double alfa); //Função para calcular a rotação no eixo X de um determinado angulo.
    LinAlg::Matrix<double> rotY(double theta);//Função para calcular a rotação no eixo Y de um determinado angulo.
    LinAlg::Matrix<double> rotZ(double fi);   //Função para calcular a rotação no eixo Z de um determinado angulo.

    //Função para rotacionar um ponto usando os Ângulos de Euler.
    LinAlg::Matrix<double> eulerAngles(LinAlg::Matrix<double> angles);

    //Função para montar a Matriz de Transformação dados um Pb->a e Rb->a
    LinAlg::Matrix<double> CriarMatrizTransf(LinAlg::Matrix<double> Rba,LinAlg::Matrix<double> Pba);

    //Função para montar a Matriz de Transformação Inversa dados os mesmos Pb->a e Rb->a
    LinAlg::Matrix<double> CriarMatrizTransfInv(LinAlg::Matrix<double> Rba,LinAlg::Matrix<double> Pba);

    //Função para realizar a Transformação utilizando o método Denavit-Hartenberg
    LinAlg::Matrix<double> Transformacao(LinAlg::Matrix<double> Vet);

    //Parâmetros para Denavit-Hartenberg (Exemplo robô plano de duas articulações)
    LinAlg::Matrix<double> TransfHomogenea(LinAlg::Matrix<double> ParamsDH);

    void PlotWorkSpace(LinAlg::Matrix<double> T);

    robotica(){};
};

#endif // ROBOTICA_H
