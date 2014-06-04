#include<iostream>
#include<math.h>
#include "Clases/Punto.h"

using namespace std;

int main(){
    Punto P1,P2,P3;
    float m;
    P1.pideleAlUsuarioTusDatos();
    P1.muestraTusDatos();
    P2.pideleAlUsuarioTusDatos();
    P2.muestraTusDatos();
    m=(P2.dameTuY()-P1.dameTuY())/(P2.dameTuX()-P1.dameTuX());
    cout<<"La pendiente es: "<<m<<endl;
    return 0;
}
