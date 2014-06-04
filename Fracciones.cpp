#include<iostream>
#include<math.h>
#include "Clases/Fraccion.h"

using namespace std;

int main(){
    Fraccion F1,F2,F3,F4,F5,F6;
    cout<<"\nFraccion 1"<<endl;
    F1.pideleAlUsuarioTusDatos();
    F1.muestraTusDatos();
    cout<<"\nFraccion 2"<<endl;
    F2.pideleAlUsuarioTusDatos();
    F2.muestraTusDatos();

    F3=F1+F2;
    F4=F1-F2;
    F5=F1*F2;
    F6=F1/F2;

    cout<<"\nLa suma de las fracciones es: "<<endl;
    F3.muestraTusDatos();

    cout<<"La resta de las fracciones es: "<<endl;
    F4.muestraTusDatos();

    cout<<"La multiplicacion de las fracciones es: "<<endl;
    F5.muestraTusDatos();

    cout<<"La division de las fracciones es: "<<endl;
    F6.muestraTusDatos();

    return 0;
}
