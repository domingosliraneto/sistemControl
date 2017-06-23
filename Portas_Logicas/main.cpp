#include <iostream>;
using namespace std;


void PortaAND(){

    // srand((unsigned)time(NULL));
    float W[3] = {0,0,0};
    float Y[4] = {0,0,0,1};

    float X [3] = {0,0,0};
    float n = 0.5 ;
    float Sout =0.0;
    int contador=0;
    int teste=1;

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
             teste=2;
             //cout << "p" << endl;
        }
       // ------------------------------------
        if (teste ==2){
            X[0]=1; X[1]=0; X[2]=1;
            Sout = W[0]*X[0]+W[1]*X[1]+W[2]*X[2];

            if(Sout > 0){
                Sout =1;
            }
            else{
                Sout = 0;
            }

            if(Sout == Y[1]){
              // cout << Sout << endl;
                ok2 =true;
            }
            else{
                W[0]= W[0] + n* (Y[1]-Sout) *X[0];
                W[1]= W[1] + n* (Y[1]-Sout) *X[1];
                W[2]= W[2] + n* (Y[1]-Sout) *X[2];
            }
             teste=3;
             //cout << "p1"<< endl;
        }
       // --------------------------------------------
        if (teste ==3){
           X[0]=1; X[1]=1; X[2]=0;
           Sout = W[0]*X[0]+W[1]*X[1]+W[2]*X[2];

           if(Sout > 0){
               Sout =1;
           }
           else{
               Sout = 0;
           }

           if(Sout == Y[2]){
              // cout << Sout << endl;
               ok3 =true;
           }
           else{
               W[0]= W[0] + n* (Y[2]-Sout) *X[0];
               W[1]= W[1] + n* (Y[2]-Sout) *X[1];
               W[2]= W[2] + n* (Y[2]-Sout) *X[2];
           }
            teste=4;
            //cout << "p2"<< endl;
        }
       // --------------------------------------------
        if (teste == 4){
           X[0]=1; X[1]=1; X[2]=1;
           Sout = W[0]*X[0]+W[1]*X[1]+W[2]*X[2];

           if(Sout > 0){
               Sout =1;
           }
           else{
               Sout = 0;
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
      // cout << contador << endl;
//        cout << "ok1 "<< ok1 << endl;
//        cout << "ok2 " << ok2 << endl;
//        cout << "ok3 " << ok3 << endl;
//        cout << "ok4 " << ok4 << endl;
    }
    for (int i =0; i<3; ++i){
        cout << "W" << i << ": " << W[i] << endl;
    }
    cout << "Contador: " << contador << endl << endl;
}

void PortaOR(){

    // srand((unsigned)time(NULL));
    float W1[3] = {0,0,0};
    float Y1[4] = {0,1,1,1};
    float X1 [3] = {0,0,0};
    float n1 = 0.5 ;
    float Sout1 =0.0;
    int contador1=0;
    int teste1=1;

    bool ok1 =false, ok2 =false, ok3 =false, ok4 =false;

    while(ok1 == 0 || ok2 == 0 || ok3 == 0 || ok4 == 0)
    {
        ok1 =false; ok2 =false;ok3 =false; ok4 =false;
       // ----------------------------------------------
        if (teste1 ==1){
            X1[0]=1; X1[1]=0; X1[2]=0;
            Sout1 = W1[0]*X1[0]+W1[1]*X1[1]+W1[2]*X1[2];
            if(Sout1 > 0){
                Sout1 =1;
            }
            else{
                Sout1 = 0;
            }

            if(Sout1 == Y1[0]){
               // cout << Sout1 << endl;
                ok1 =true;
            }
            else{
                W1[0]= W1[0] + n1* (Y1[0]-Sout1) *X1[0];
                W1[1]= W1[1] + n1* (Y1[0]-Sout1) *X1[1];
                W1[2]= W1[2] + n1* (Y1[0]-Sout1) *X1[2];
            }
             teste1=2;
             //cout << "p" << endl;
        }
       // ------------------------------------
        if (teste1 ==2){
            X1[0]=1; X1[1]=0; X1[2]=1;
            Sout1 = W1[0]*X1[0]+W1[1]*X1[1]+W1[2]*X1[2];

            if(Sout1 > 0){
                Sout1 =1;
            }
            else{
                Sout1 = 0;
            }

            if(Sout1 == Y1[1]){
              // cout << Sout1 << endl;
                ok2 =true;
            }
            else{
                W1[0]= W1[0] + n1* (Y1[1]-Sout1) *X1[0];
                W1[1]= W1[1] + n1* (Y1[1]-Sout1) *X1[1];
                W1[2]= W1[2] + n1* (Y1[1]-Sout1) *X1[2];
            }
             teste1=3;
             //cout << "p1"<< endl;
        }
       // --------------------------------------------
        if (teste1 ==3){
           X1[0]=1; X1[1]=1; X1[2]=0;
           Sout1 = W1[0]*X1[0]+W1[1]*X1[1]+W1[2]*X1[2];

           if(Sout1 > 0){
               Sout1 =1;
           }
           else{
               Sout1 = 0;
           }

           if(Sout1 == Y1[2]){
              // cout << Sout1 << endl;
               ok3 =true;
           }
           else{
               W1[0]= W1[0] + n1* (Y1[2]-Sout1) *X1[0];
               W1[1]= W1[1] + n1* (Y1[2]-Sout1) *X1[1];
               W1[2]= W1[2] + n1* (Y1[2]-Sout1) *X1[2];
           }
            teste1=4;
            //cout << "p2"<< endl;
        }
       // --------------------------------------------
        if (teste1 == 4){
           X1[0]=1; X1[1]=1; X1[2]=1;
           Sout1 = W1[0]*X1[0]+W1[1]*X1[1]+W1[2]*X1[2];

           if(Sout1 > 0){
               Sout1 =1;
           }
           else{
               Sout1 = 0;
           }

           if(Sout1 == Y1[3]){
              //cout << Sout1 << endl;
               ok4 =true;
           }
           else{
               W1[0] = W1[0] + n1 * (Y1[3] - Sout1) * X1[0];
               W1[1] = W1[1] + n1 * (Y1[3] - Sout1) * X1[1];
               W1[2] = W1[2] + n1 * (Y1[3] - Sout1) * X1[2];
           }
            teste1=1;
            //cout << "p3"<< endl;
        }
        contador1++;
       //cout << contador1 << endl;
//        cout << "ok1 "<< ok1 << endl;
//        cout << "ok2 " << ok2 << endl;
//        cout << "ok3 " << ok3 << endl;
//        cout << "ok4 " << ok4 << endl;
    }
    for (int i =0; i<3; ++i){
        cout << "W" << i << ": " << W1[i] << endl;
    }
    cout  << "Contador: " << contador1 << endl << endl;
}

int main()
{
    int a;
    int b=1;
    while (b == 1) {

        cout <<endl << "escolha a opçcao: " << endl;
        cout << "1 porta and: " << endl;
        cout << "2 porta or: " << endl;
        cout << "0 para sair" << endl;
        cin >> a;
        cout << "Entrendo nas interaçoes " << endl << endl;

        switch(a)
        {
            case 0: b=0; break;
            case 1: PortaAND () ;break;
            case 2: PortaOR () ;break;
            default : cout << "opçao nao existente";break;
        }
    }
    return 0;
}
