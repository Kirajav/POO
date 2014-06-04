#include<iostream>
#include<math.h>
#include "Clases/Fraccion.h"

using namespace std;

int main(){
    Fraccion F1,F2,F3;
    F1.pideleAlUsuarioTusDatos();
    F1.muestraTusDatos();
    F2.pideleAlUsuarioTusDatos();
    F2.muestraTusDatos();
    F3.modificaTuNum(F1.dameTuNum()*F2.dameTuDen());
    F3.modificaTuDen(F1.dameTuDen()*F2.dameTuNum());
    cout<<"La division de las fracciones es: "<<endl;
    F3.muestraTusDatos();
    return 0;
}
