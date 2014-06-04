#include<iostream>
#include<math.h>
#include "Clases/Punto.h"

using namespace std;

int main(){
    Rectangulo <float> P1,P2,P3,P4;
    cout<<"\nPunto 1"<<endl;
    cin>>P1;
    cout<<"\nPunto 2"<<endl;
    cin>>P2;

    P3=P1+P2;
    P4=P1-P2;

    cout<<"\nLa suma de los puntos es: "<<endl;
    cout<<endl<<P3;

    cout<<"La resta de los puntos es: "<<endl;
    cout<<endl<<P4;

    return 0;
}
