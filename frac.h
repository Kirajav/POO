#include<iostream>

using namespace std;

class Fraccion{

private:
    int num,den;

    void verificaTuDen(){
    if(den==0){
        cout<<"Error, denominador cero!"<<endl;
        exit(-1);
        }
    };

public:
    Fraccion(int=0,int=1){
    };

    ~Fraccion(){
    };

    void pideleAlUsuarioTusDatos(){
        cout<<"Dame mi numerador: ";
        cin>>num;
        cout<<"Dame mi denominador: ";
        cin>>den;
        verificaTuDen();
    };

    void muestraTusDatos(){
        cout<<num<<"/"<<den<<endl;
    };

    float dameTuNum(){
        return num;
    };

    float dameTuDen(){
        return den;
    };

    void modificaTuNum(float a){
        num=a;
    };

    void modificaTuDen(float b){
        den=b;
        verificaTuDen();
    };

Fraccion(float a, float b){
               num=a;
               den=b;
    }

   Fraccion::~Fraccion(){
    }

    void Fraccion::pideleAlUsuarioTusDatos(){
        cout<<"Dame mi numerador: ";
        cin>>num;
        cout<<"Dame mi denominador: ";
        cin>>den;
        verificaTuDen();
    }

    void Fraccion::muestraTusDatos(){
        cout<<num<<"/"<<den<<endl;
    }

    float Fraccion::dameTuNum(){
        return num;
    }

    float Fraccion::dameTuDen(){
        return den;
    }

    void Fraccion::modificaTuNum(float a){
        num=a;
    }

    void Fraccion::modificaTuDen(float b){
        den=b;
        verificaTuDen();
    }
}
