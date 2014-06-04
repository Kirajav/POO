#include<iostream>
#include<J:\FigGeo1.h>

using namespace std;

class Cuadrado:public FigGeo{

protected:
     float lado;
     void calculaArea();
     void calculaPerimetro();

public:


Cuadrado(float=0.0);
void pideleAlUsuarioTusDatos();
void muestraTusDatos();
float dameTuLado();
void modificaTuLado(float);
void dameTuArea();

};

float Cuadrado::dameTuLado(){
return  lado;

}

Cuadrado::Cuadrado(float v):FigGeo(4),lado(v){

calculaArea();
calculaPerimetro();

}

void Cuadrado::calculaArea(){

area=lado*lado;

}

void Cuadrado::calculaPerimetro(){

perimetro=4*lado;

}

void Cuadrado::modificaTuLado(float v){
lado=v;
calculaArea();
calculaPerimetro();
}

void Cuadrado::pideleAlUsuarioTusDatos(){
cout<<"Dame mi lado";
cin>>lado;
calculaArea();
calculaPerimetro();
}
void Cuadrado::muestraTusDatos(){

FigGeo::muestraTusDatos();
cout<<"Mi lado es: "<<lado<<endl;
}
