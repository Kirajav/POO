#include<iostream>

using namespace std;

class Fraccion{

private:
    int num,den;

    void verificaTuDen();

public:
    Fraccion(int=0,int=1);

    ~Fraccion();

    void pideleAlUsuarioTusDatos();
    void muestraTusDatos();
    float dameTuNum();
    float dameTuDen();
    void modificaTuNum(float a);
    void modificaTuDen(float b);
    Fraccion operator+(Fraccion);
    Fraccion operator-(Fraccion);
    Fraccion operator*(Fraccion);
    Fraccion operator/(Fraccion);
};
void Fraccion::verificaTuDen(){
    if(den==0){
        cout<<"Error, denominador cero!"<<endl;
        exit(-1);
        }
    }
Fraccion::Fraccion(int a,int b){
    num=a;
    den=b;
    }

Fraccion::~Fraccion(){}
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
Fraccion Fraccion::operator+(Fraccion B){
    Fraccion Z;
    if(den==B.dameTuDen()){
        Z.modificaTuNum(num+B.dameTuNum());
        Z.modificaTuDen(den);
        }
        else{
        Z.modificaTuNum(num*B.dameTuDen()+den*B.dameTuNum());
        Z.modificaTuDen(den*B.dameTuDen());
        }
    return Z;
}
Fraccion Fraccion::operator-(Fraccion B){
    Fraccion Z;
    if(den==B.dameTuDen()){
        Z.modificaTuNum(num-B.dameTuNum());
        Z.modificaTuDen(den);
        }
        else{
        Z.modificaTuNum(num*B.dameTuDen()-den*B.dameTuNum());
        Z.modificaTuDen(den*B.dameTuDen());
        }
    return Z;
}
Fraccion Fraccion::operator*(Fraccion B){
    Fraccion Z;
    Z.modificaTuNum(num*B.dameTuNum());
    Z.modificaTuDen(den*B.dameTuDen());
    return Z;
}
Fraccion Fraccion::operator/(Fraccion B){
    Fraccion Z;
    Z.modificaTuNum(num*B.dameTuDen());
    Z.modificaTuDen(den*B.dameTuNum());
    return Z;
}
