#include <iostream>
#include <math.h>

using namespace std;
float W [3] = {0.9,0.1,0.21};
float X[4] ={1,1,1,1};
float X1[4] ={0,0,1,1};
float X2[4] ={0,1,0,1};
float Y[6] = {0,0,0,1};

void PortaAND(){

    // srand((unsigned)time(NULL));
    float n = 0.5 ;
    float Sout =0.0;
    int contador=0;
    //int teste=1;
    float E=0.00005;
    float EP = 0;
    float EA = 0;
    float Eqm = 0;
    float P= 4.0;
    float Efinal =0;

   do {

    //6.1 *********************************************
        for (int i =0 ; i<4 ;++i) {
            Eqm = 0;
            Sout = W[0]*X[i]+W[1]*X1[i]+W[2]*X2[i];

            Eqm = Eqm + ((Y[i]-Sout)*(Y[i]-Sout));
          }
        Eqm=Eqm/P;

        EA=Eqm;
        cout<<"erro anterior "<<EA<<endl;


     //6.2 ********************************************

          for (int i =0 ; i<4 ;++i) {

              Sout = W[0]*X[i]+W[1]*X1[i]+W[2]*X2[i];

                W[0]= W[0] + n* (Y[i]-Sout) *X[i];
                W[1]= W[1] + n* (Y[i]-Sout) *X1[i];
                W[2]= W[2] + n* (Y[i]-Sout) *X2[i];
            }
     // 6.3******************************************
        contador=contador + 1;

    // 6.4********************************************
        // 6.4.1********************************************
        for (int i =0 ; i<4 ;++i) {
            Eqm =0;
            Sout = W[0]*X[i]+W[1]*X1[i]+W[2]*X2[i];

            Eqm = Eqm + ((Y[i]-Sout)*(Y[i]-Sout));
          }
        Eqm=Eqm/P;
        cout<<"erro atual "<<Eqm<<endl;
    // 6.4********************************************
    EP = Eqm;
    Efinal = EP-EA;
    if(Efinal<0){
        Efinal = Efinal *(-1);
    }
    else {
        Efinal=Efinal;
    }
    cout<<"erro final "<<Efinal<<endl;
    cout<<"erro  "<<E<<endl;
    cout << "------------------------------"<< endl;
    }while(Efinal>=E || contador == 500);

    for (int i =0; i<3; ++i){
        cout << "W" << i << ": " << W[i] << endl;
    }
    cout << "Contador: " << contador << endl << endl;

}




int main()
{

    //int a;
   // int b=1;
    PortaAND();


    return 0;
}
