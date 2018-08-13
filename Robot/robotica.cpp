#include "robotica.h"

LinAlg::Matrix<double> robotica::eulerAngles(LinAlg::Matrix<double> angles){
    double thetaX = angles(1,1)*PI/180;
    double thetaY = angles(1,2)*PI/180;
    double thetaZ = angles(1,3)*PI/180;

    LinAlg::Matrix<double> R(4,4);
    R(1,1) = ((cos(thetaZ))*(cos(thetaY))); R(1,2) = (((cos(thetaZ))*(sin(thetaY))*(sin(thetaX)))-((sin(thetaZ))*(cos(thetaX)))); R(1,3) = (((cos(thetaZ))*(sin(thetaY))*(cos(thetaX)))+((sin(thetaZ))*(sin(thetaX))));R(1,4) = 0;
    R(2,1) = ((sin(thetaZ))*(cos(thetaY))); R(2,2) = (((sin(thetaZ))*(sin(thetaY))*(sin(thetaX)))+((cos(thetaZ))*(cos(thetaX)))); R(2,3) = (((sin(thetaZ))*(sin(thetaY))*(cos(thetaX)))-((cos(thetaZ))*(sin(thetaX))));R(2,4) = 0;
    R(3,1) = -sin(thetaY); R(3,2) = ((cos(thetaY))*(sin(thetaX))); R(3,3) = ((cos(thetaY))*(cos(thetaX)));R(3,4) = 0;
    R(4,1) = 0; R(4,2) = 0; R(4,3) = 0; R(4,4) = 1;

    std::cout<<"Matriz rotacao de Euler: " <<std::endl << R <<std::endl;
    return R;
}

LinAlg::Matrix<double> robotica::rotX(double alfa){

    double angulo = alfa * PI / 180.0;

    LinAlg::Matrix<double> R(4,4);
    R(1,1) = 1; R(1,2) = 0; R(1,3) = 0; R(1,4) = 0;
    R(2,1) = 0; R(2,2) = cos(angulo); R(2,3) = -sin(angulo); R(2,4) = 0;
    R(3,1) = 0; R(3,2) = sin(angulo); R(3,3) = cos(angulo); R(3,4) = 0;
    R(4,1) = 0; R(4,2) = 0; R(4,3) = 0; R(4,4) = 1;

    std::cout<<"Matriz rotacao em X : " <<std::endl << R <<std::endl;
    return R;
}

LinAlg::Matrix<double> robotica::rotY(double theta){

    double angulo = theta * PI / 180.0;

    LinAlg::Matrix<double> R(4,4);
    R(1,1) = cos(angulo); R(1,2) = 0; R(1,3) = sin(angulo); R(1,4) = 0;
    R(2,1) = 0; R(2,2) = 1; R(2,3) = 0; R(2,4) = 0;
    R(3,1) = -sin(angulo); R(3,2) = 0; R(3,3) = cos(angulo); R(3,4) = 0;
    R(4,1) = 0; R(4,2) = 0; R(4,3) = 0; R(4,4) = 1;

    std::cout<<"Matriz rotacao em Y : " <<std::endl << R <<std::endl;
    return R;
}

LinAlg::Matrix<double> robotica::rotZ(double fi){

    double angulo = fi * PI / 180.0;

    LinAlg::Matrix<double> R(4,4);
    R(1,1) = cos(angulo); R(1,2) = -sin(angulo); R(1,3) = 0; R(1,4) = 0;
    R(2,1) = sin(angulo); R(2,2) = cos(angulo); R(2,3) = 0; R(2,4) = 0;
    R(3,1) = 0; R(3,2) = 0; R(3,3) = 1; R(3,4) = 0;
    R(4,1) = 0; R(4,2) = 0; R(4,3) = 0; R(4,4) = 1;

    std::cout<<"Matriz rotacao em Z : " <<std::endl << R <<std::endl;
    return R;
}

LinAlg::Matrix<double> robotica::CriarMatrizTransf(LinAlg::Matrix<double> Rba,LinAlg::Matrix<double> Pba){

    int m = Rba.getNumberOfRows();
    int n = Rba.getNumberOfColumns();

    if(m==n){ // Matriz é quadrada
        LinAlg::Matrix<double> R(m,n);
        R = (Rba|Pba)||LinAlg::Zeros<double>(1,n)|1;
        std::cout<<"Matriz de transformacao: "<< std::endl << R << std::endl;
        return R;
    }

}

LinAlg::Matrix<double> robotica::CriarMatrizTransfInv(LinAlg::Matrix<double> Rba, LinAlg::Matrix<double> Pba){


    int m = Rba.getNumberOfRows();
    int n = Rba.getNumberOfColumns();

    if(m==n){ // Matriz é quadrada
        LinAlg::Matrix<double> R(m,n);
        R = (~Rba | (-(~Rba)*Pba))||(LinAlg::Zeros<double>(1,n)|1);
        std::cout<<"Matriz de transformacao Inversa: "<< std::endl << R << std::endl;
        return R;
    }

}

LinAlg::Matrix<double> robotica::Transformacao(LinAlg::Matrix<double> Vet){

    // Vet = [a, alpha, d, theta]

    LinAlg::Matrix<double> T(4,4);

    double alfa = Vet(1,1);
    double a = Vet(1,2);
    double d = Vet(1,3);
    double theta = Vet(1,4);

    T(1,1)=cos(theta);              T(1,2)=-sin(theta);             T(1,3)= 0;              T(1,4)=a;
    T(2,1)=cos(alfa)*sin(theta);    T(2,2)=cos(alfa)*cos(theta);    T(2,3)= -sin(alfa);     T(2,4)=-d*sin(alfa);
    T(3,1)=sin(alfa)*sin(theta);    T(3,2)=sin(alfa)*cos(theta);    T(3,3)=cos(alfa);       T(3,4)=d*cos(alfa);
    T(4,4)=0;                       T(4,2)=0;                       T(4,3)= 0;              T(4,4)=1;

    //std::cout<<"Transformacao T: "<< std::endl << T << std::endl;
    return T;

}


LinAlg::Matrix<double> robotica::TransfHomogenea(LinAlg::Matrix<double> ParamsDH){

    LinAlg::Matrix<double> TF(4,4); //Matriz de Transformação Homogena (Final)
    TF = LinAlg::Eye<double>(4);

    LinAlg::Matrix<LinAlg::Matrix<double>> T(1,ParamsDH.getNumberOfRows());

    for (unsigned int i=1;i<=ParamsDH.getNumberOfRows();i++){
        T(1,i) = this->Transformacao(ParamsDH.getRow(i));
        std::cout << "Matriz de Transformacao N: 0" << i << std::endl;
        std::cout << T(1,i) << std::endl;
        TF = TF*T(1,i);
    }
    std::cout << "Matriz de Transformacao Homogenea da Base para o Efetuador:" << std::endl;
    std::cout << TF << std::endl;
    return TF;

}

void robotica::PlotWorkSpace(LinAlg::Matrix<double> T){



}

