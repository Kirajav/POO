#include<iostream>
#include<math.h>
#include "Clases/Punto.h"

using namespace std;

int main(){
    Punto P1,P2,P3;
    float d;
    P1.pideleAlUsuarioTusDatos();
    P2.pideleAlUsuarioTusDatos();
    d=sqrt(pow(P2.dameTuX()-P1.dameTuX(),2)+pow(P2.dameTuY()-P1.dameTuY(),2));
    cout<<"La distancia entre los dos puntos es: "<<d<<endl;
    return 0;
}
