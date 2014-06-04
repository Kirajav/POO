#include<iostream>
#include<math.h>
#include "Clases/Punto.h"

using namespace std;

int main(){
    Punto P1,P2,P3,P4;
    cout<<"\nPunto 1"<<endl;
    P1.pideleAlUsuarioTusDatos();
    P1.muestraTusDatos();
    cout<<"\nPunto 2"<<endl;
    P2.pideleAlUsuarioTusDatos();
    P2.muestraTusDatos();

    P3=P1+P2;
    P4=P1-P2;

    cout<<"\nLa suma de los puntos es: "<<endl;
    P3.muestraTusDatos();

    cout<<"La resta de los puntos es: "<<endl;
    P4.muestraTusDatos();

    return 0;
}
