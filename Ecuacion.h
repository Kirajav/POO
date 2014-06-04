#include<iostream>

using namespace std;

class Ecuacion{

private:
    float a,b,c;

public:
    Ecuacion(float=1,float=0.0, float=0.0);

    ~Ecuacion();

    void pideleAlUsuarioTusDatos();
    void muestraTusDatos();
    float dameTuA();
    float dameTuB();
    float dameTuC();
    void modificaTuA(float x);
    void modificaTuB(float y);
    void modificaTuC(float z);
};

Ecuacion::Ecuacion(float x,float y, float z){
    a=x;
    b=y;
    c=z;
    }

Ecuacion::~Ecuacion(){}

void Ecuacion::pideleAlUsuarioTusDatos(){
        cout<<"Dame el valor de a: ";
        cin>>a;
        cout<<"Dame mi valor de b: ";
        cin>>b;
        cout<<"Dame mi valor de c: ";
        cin>>c;
    }

void Ecuacion::muestraTusDatos(){
        cout<<"La ecuacion es: "<<a<<"x\x5E 2 + "<<b<<"x + "<<c<<" = 0"<<endl;
    }

float Ecuacion::dameTuA(){
        return a;
    }

float Ecuacion::dameTuB(){
        return b;
    }

float Ecuacion::dameTuC(){
        return c;
    }

void Ecuacion::modificaTuA(float x){
        a=x;
    }

void Ecuacion::modificaTuB(float y){
        b=y;

    }
void Ecuacion::modificaTuC(float z){
        c=z;

    }
