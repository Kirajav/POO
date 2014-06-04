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
    C3.modificaTuReal(C1.dameTuParteReal()*C2.dameTuParteReal()-C1.dameTuParteImag()*C2.dameTuParteImag());
    C3.modificaTuImag(C1.dameTuParteReal()*C2.dameTuParteImag()+C1.dameTuParteImag()*C2.dameTuParteReal());
    cout<<"La multiplicacion de los numeros es: "<<endl;
    C3.muestraTusDatos();
    return 0;
}
