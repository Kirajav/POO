/*Codifica un programa que lea los coeficientes de una ecuacion de segundo grado y calcule sus raices, si existen*/
#include<iostream>
#include<math.h>
#include "Clases/Ecuacion.h"

using namespace std;

int main(){
    float x1,x2, disc, real, imag;
    Ecuacion E;
    E.pideleAlUsuarioTusDatos();
    E.muestraTusDatos();
    disc=pow(E.dameTuB(),2)-(4*E.dameTuA()*E.dameTuC());

    if(E.dameTuA()==0){
        cout<<"Error, 'a' es cero!"<<endl;
        }

    else if(disc<0){
        cout<<"Error, no existen raices reales!"<<endl;

        }
        else{
        x1=(-1*E.dameTuB()+sqrt(disc))/(2*E.dameTuA());
        x2=(-1*E.dameTuB()-sqrt(disc))/(2*E.dameTuA());
        cout<<"Las raices son: x1= "<<x1<<", x2= "<<x2<<endl;
    }
    return 0;
}
