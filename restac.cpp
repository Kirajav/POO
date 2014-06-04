#include<iostream>
#include<math.h>
#include "Clases/Complejo.h"

using namespace std;

int main(){
    Complejo C1,C2,C3;
    C1.pideleAlUsuarioTusDatos();
    C1.muestraTusDatos();
    C2.pideleAlUsuarioTusDatos();
    C2.muestraTusDatos();
    C3.modificaTuReal(C1.dameTuParteReal()-C2.dameTuParteReal());
    C3.modificaTuImag(C1.dameTuParteImag()-C2.dameTuParteImag());
    cout<<"La resta de los dos numeros es: "<<endl;
    C3.muestraTusDatos();
    return 0;
}
