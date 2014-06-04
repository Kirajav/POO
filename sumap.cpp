#include<iostream>
#include "Clases/Punto.h"

using namespace std;

int main(){
    Punto<float> P1,P2,P3;
    cin>>P1>>P2;
    P3=P1+P2;
    cout<<P3;
    return 0;
}
