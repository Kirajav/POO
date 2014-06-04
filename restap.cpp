#include<iostream>
#include "Clases/Punto.h"

using namespace std;

int main(){
    Punto<float> P1,P2,P3;
    P1.pideleAlUsuarioTusDatos();
    P2.pideleAlUsuarioTusDatos();
    P3.modificaTuX(P1.dameTuX()-P2.dameTuX());
    P3.modificaTuY(P1.dameTuY()-P2.dameTuY());
    cout<<"La resta de los puntos es: "<<endl;
    P3.muestraTusDatos();
    return 0;
}
