/*Codifica un programa que lea dos fechas y dos horas de dos eventos que ocurrieronen un sitio, y diga cu‡l sucedi— primero. El formato del hora es hh:mm:ss
y el de la fecha es dd/mm/aaaa*/

#include<iostream>
#include<math.h>
#include "Clases/Fecha.h"
#include "Clases/Hora.h"

using namespace std;

int main(){

    Fecha F1,F2;
    Hora H1, H2;
    cout<<"\nIngresa la fecha #1: \n\n";
    F1.pideleAlUsuarioTusDatos();
    H1.pideleAlUsuarioTusDatos();
    cout<<"Has ingresado: "; F1.muestraTusDatos(); H1.muestraTusDatos();
    cout<<endl;
    cout<<"\nIngresa la fecha #2: \n\n";
    F2.pideleAlUsuarioTusDatos();
    H2.pideleAlUsuarioTusDatos();
    cout<<"Has ingresado: "; F2.muestraTusDatos(); H2.muestraTusDatos();
    cout<<endl<<endl;


        if(F1.dameTuAno()>F2.dameTuAno()){
            cout<<"La fecha ";
            F1.muestraTusDatos(); H1.muestraTusDatos();
            cout<<" es mayor que ";
            F2.muestraTusDatos(); H2.muestraTusDatos();
            cout<<endl;
                }
        else if (F1.dameTuAno()<F2.dameTuAno()){
            cout<<"La fecha ";
            F1.muestraTusDatos(); H1.muestraTusDatos();
            cout<<" es menor que ";
            F2.muestraTusDatos(); H2.muestraTusDatos();
            cout<<endl;
                }


        else if(F1.dameTuMes()>F2.dameTuMes()){
            cout<<"La fecha ";
            F1.muestraTusDatos(); H1.muestraTusDatos();
            cout<<" es mayor que ";
            F2.muestraTusDatos(); H2.muestraTusDatos();
            cout<<endl;
                }
        else if(F1.dameTuMes()<F2.dameTuMes()){
            cout<<"La fecha ";
            F1.muestraTusDatos(); H1.muestraTusDatos();
            cout<<" es menor que ";
            F2.muestraTusDatos(); H2.muestraTusDatos();
            cout<<endl;
                }


       else if(F1.dameTuDia()>F2.dameTuDia()){
            cout<<"La fecha ";
            F1.muestraTusDatos(); H1.muestraTusDatos();
            cout<<" es mayor que ";
            F2.muestraTusDatos(); H2.muestraTusDatos();
            cout<<endl;
                }
        else if(F1.dameTuDia()<F2.dameTuDia()) {
            cout<<"La fecha ";
            F1.muestraTusDatos(); H1.muestraTusDatos();
            cout<<" es menor que ";
            F2.muestraTusDatos(); H2.muestraTusDatos();
            cout<<endl;
                }


       else if(H1.dameTuHora()>H2.dameTuHora()){
            cout<<"La fecha ";
            F1.muestraTusDatos(); H1.muestraTusDatos();
            cout<<" es mayor que ";
            F2.muestraTusDatos(); H2.muestraTusDatos();
            cout<<endl;
                }
        else if(H1.dameTuHora()<H2.dameTuHora()){
            cout<<"La fecha: ";
            F1.muestraTusDatos(); H1.muestraTusDatos();
            cout<<" es menor que: ";
            F2.muestraTusDatos(); H2.muestraTusDatos();
            cout<<endl;
                }


       else if(H1.dameTuMin()>H2.dameTuMin()){
            cout<<"La fecha ";
            F1.muestraTusDatos(); H1.muestraTusDatos();
            cout<<" es mayor que ";
            F2.muestraTusDatos(); H2.muestraTusDatos();
            cout<<endl;
                }
        else if(H1.dameTuMin()<H2.dameTuMin()){
            cout<<"La fecha ";
            F1.muestraTusDatos(); H1.muestraTusDatos();
            cout<<" es menor que ";
            F2.muestraTusDatos(); H2.muestraTusDatos();
            cout<<endl;
                }


       else if(H1.dameTuSeg()>H2.dameTuSeg()){
            cout<<"La fecha ";
            F1.muestraTusDatos(); H1.muestraTusDatos();
            cout<<" es mayor que ";
            F2.muestraTusDatos(); H2.muestraTusDatos();
            cout<<endl;
                }
        else if(H1.dameTuSeg()<H2.dameTuSeg()){
            cout<<"La fecha ";
            F1.muestraTusDatos(); H1.muestraTusDatos();
            cout<<" es menor que ";
            F2.muestraTusDatos(); H2.muestraTusDatos();
            cout<<endl;
                }

    else {
        cout<<"La fecha ";
        F1.muestraTusDatos(); H1.muestraTusDatos();
        cout<<" es igual que ";
        F2.muestraTusDatos(); H2.muestraTusDatos();
        cout<<endl;
        }
    return 0;
}
