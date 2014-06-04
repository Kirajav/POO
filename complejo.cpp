#include<iostream>
#include<math.h>
#include "Clases/Complejo.h"

using namespace std;

int main(){
    Complejo C1,C2,C3,C4,C5,C6;
    cout<<"\nComplejo 1"<<endl;
    C1.pideleAlUsuarioTusDatos();
    C1.muestraTusDatos();
    cout<<"\nComplejo 2"<<endl;
    C2.pideleAlUsuarioTusDatos();
    C2.muestraTusDatos();

    C3=C1+C2;
    C4=C1-C2;
    C5=C1*C2;
    C6=C1/C2;

    cout<<"\nLa suma de los dos numeros es: "<<endl;
    C3.muestraTusDatos();

    cout<<"La resta de los dos numeros es: "<<endl;
    C4.muestraTusDatos();

    cout<<"La multiplicacion de los dos numeros es: "<<endl;
    C5.muestraTusDatos();

    cout<<"La division de los dos numeros es: "<<endl;
    C6.muestraTusDatos();

    return 0;
}
