#include <QCoreApplication>


#include <iostream>;
using namespace std;

float X [3] = {1,0,0};
float W[3] = {0,0,0};
float Y[4] = {};

void PortaAND(){

    // srand((unsigned)time(NULL));
    float e = 0.005;
    float n = 0.5 ;
    float Sout =0.0;
    int contador=0;
    int teste=1;
    float EqmA =0;
    float Eqma =0;
    Ptreino = 4 ;

    bool ok1 =false, ok2 =false, ok3 =false, ok4 =false;

    while(ok1 == 0 || ok2 == 0 || ok3 == 0 || ok4 == 0)
    {
        ok1 =false; ok2 =false;ok3 =false; ok4 =false;
       // ----------------------------------------------
        if (teste ==1){
            X[0]=1; X[1]=0; X[2]=0;
            Sout = W[0]*X[0]+W[1]*X[1]+W[2]*X[2];
            if(Sout > 0){
                Sout =1;
            }
            else{
                Sout = 0;
            }

            if(Sout == Y[0]){
               // cout << Sout << endl;
                ok1 =true;
            }
            else{
                W[0]= W[0] + n* (Y[0]-Sout) *X[0];
                W[1]= W[1] + n* (Y[0]-Sout) *X[1];
                W[2]= W[2] + n* (Y[0]-Sout) *X[2];
            }

           if(Sout == Y[3]){
             // cout << Sout << endl;
               ok4 =true;
           }
           else{
               W[0] = W[0] + n * (Y[3] - Sout) * X[0];
               W[1] = W[1] + n * (Y[3] - Sout) * X[1];
               W[2] = W[2] + n * (Y[3] - Sout) * X[2];
           }
            teste=1;
            //cout << "p3"<< endl;
        }
        contador++;

    }
    for (int i =0; i<3; ++i){
        cout << "W" << i << ": " << W[i] << endl;
    }
    cout << "Contador: " << contador << endl << endl;
}


int main()
{
    int a;
    int b=1;
    while (b == 1) {

       for (int i =1 ; i<3 ; ++i){
           for (int j=1 ; j<3; ++j)
           cout << "inserir valor de X1";
           cin >> X[i];
       }

       for (int i =0 ; i<3 ; ++i){
           cout << "inserir valor de Y" << i;
           cin >> Y[i];
       }

       for (int i =0 ; i<3 ; ++i){
           cout << "inserir valor de W" << i;
           cin >> W[i];
       }

    return 0;
}


