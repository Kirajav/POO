
#include<iostream>
#include<math.h>
#include "Clases/fecha.h"
#include "Clases/hora.h"

using namespace std;

int main(){

    Fecha F1,F2;
    Hora  H1, H2;
    cout<<"\nIntrodue el Evento 1: \n\n";
    F1.pideleAlUsuarioTusDatos();
    H1.pideleAlUsuarioTusDatos();
    cout<<"la fecha ingresda es: "; F1.muestraTusDatos(); H1.muestraTusDatos();
    cout<<endl;
    cout<<endl;
    cout<<"\nIntroduce el Evento 2: \n\n";
    F2.pideleAlUsuarioTusDatos();
    H2.pideleAlUsuarioTusDatos();
    cout<<"la fecha ingesada es: "; F2.muestraTusDatos(); H2.muestraTusDatos();
    cout<<endl<<endl;


          if(F1.dameTuA()< F2.dameTuA()){
            cout<<"El E1 Ocurrio primero:";
             F1.muestraTusDatos(); H1.muestraTusDatos();
             cout<<endl;
             cout<<endl;
        }

        else if (F1.dameTuA()>F2.dameTuA()){
            cout<<"El E2 Ocurrio primero: ";
            F2.muestraTusDatos(); H2.muestraTusDatos();
            cout<<endl;
            cout<<endl;

                }


        else if(F1.dameTuM()<F2.dameTuM()){
            cout<<"El E1 Ocurrio primero: ";
            F1.muestraTusDatos(); H1.muestraTusDatos();
            cout<<endl;
            cout<<endl;


                }
        else if(F1.dameTuM()>F2.dameTuM()){
            cout<<"E2: ";
            F2.muestraTusDatos(); H2.muestraTusDatos();
            cout<<endl;cout<<endl;
            }

    else if(F1.dameTuD()<F2.dameTuD()){
            cout<<"El E1 Ocurrio primero:";
            F1.muestraTusDatos(); H1.muestraTusDatos();
           cout<<endl;cout<<endl;
                }
        else if(F1.dameTuD()>F2.dameTuD()) {
            cout<<"El E2 Ocurrio primero:  ";
            F2.muestraTusDatos(); H2.muestraTusDatos();
            cout<<endl;cout<<endl;
            }


       else if(H1.dameTuH()<H2.dameTuH()){
            cout<<"El E1 Ocurrio primero:";
            F1.muestraTusDatos(); H1.muestraTusDatos();
               cout<<endl;cout<<endl;
                }
        else if(H1.dameTuH()>H2.dameTuH()){
            cout<<"El E2 Ocurrio primero:  ";
            F2.muestraTusDatos(); H2.muestraTusDatos();
            cout<<endl;cout<<endl;
                }


       else if(H1.dameTuM()<H2.dameTuM()){
            cout<<"El E1 Ocurrio primero:";
            F1.muestraTusDatos(); H1.muestraTusDatos();
            cout<<endl;cout<<endl;
                }
        else if(H1.dameTuM()>H2.dameTuM()){
            cout<<"El E2 Ocurrio primero: ";
            F2.muestraTusDatos(); H2.muestraTusDatos();
            cout<<endl;
            cout<<endl;
                }


       else if(H1.dameTuS()<H2.dameTuS()){
            cout<<"El E1 Ocurrio primero:";
            F1.muestraTusDatos(); H1.muestraTusDatos();
            cout<<endl;
            cout<<endl;

                }
        else if(H1.dameTuS()>H2.dameTuS()){
            cout<<"El E2 Ocurrio primero: ";
            F2.muestraTusDatos(); H2.muestraTusDatos();
              cout<<endl;
              cout<<endl;
                }

    else {
        cout<<"Ocuerrieron simultaneamente ._."<<endl;
        cout<<endl;
        cout<<endl;
        }
    return 0;
}
