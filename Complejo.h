#include<iostream>

using namespace std;

class Complejo{

private:
    float real,imag;

public:
    Complejo(float = 0.0, float=0.0);
    ~Complejo();
    void pideleAlUsuarioTusDatos();
    void muestraTusDatos();
    float dameTuReal();
    float dameTuImag();
    void modificaTuReal(float a);
    void modificaTuImag(float b);
    Complejo operator+(Complejo);
    Complejo operator-(Complejo);
    Complejo operator*(Complejo);
    Complejo operator/(Complejo);
};

Complejo::Complejo(float a, float b){
    real=a;
    imag=b;
    }

Complejo::~Complejo(){}

void Complejo::pideleAlUsuarioTusDatos(){
        cout<<"Dame mi parte real: ";
        cin>>real;
        cout<<"Dame mi parte imaginaria: ";
        cin>>imag;
    }
void Complejo::muestraTusDatos(){
        cout<<real;
        if(imag>=0)
            cout<<"+";
        cout<<imag<<"i"<<endl;
    }
float Complejo::dameTuReal(){
        return real;
    }
float Complejo::dameTuImag(){
        return imag;
    }
void Complejo::modificaTuReal(float a){
        real=a;
    }
void Complejo::modificaTuImag(float b){
        imag=b;
    }
Complejo Complejo::operator+(Complejo B){
    Complejo Z;
    Z.modificaTuReal(real+B.dameTuReal());
    Z.modificaTuImag(imag+B.dameTuImag());
    return Z;
}
Complejo Complejo::operator-(Complejo B){
    Complejo Z;
    Z.modificaTuReal(real-B.dameTuReal());
    Z.modificaTuImag(imag-B.dameTuImag());
    return Z;
}
Complejo Complejo::operator*(Complejo B){
    Complejo Z;
    Z.modificaTuReal(real*B.dameTuReal()-imag*B.dameTuImag());
    Z.modificaTuImag(imag*B.dameTuReal()+real*B.dameTuImag());
    return Z;
}
Complejo Complejo::operator/(Complejo B){
    Complejo Z;
    Z.modificaTuReal((real*B.dameTuReal()+imag*B.dameTuImag())/(pow(B.dameTuReal(),2)+pow(B.dameTuImag(),2)));
    Z.modificaTuImag((imag*B.dameTuReal()-real*B.dameTuImag())/(pow(B.dameTuReal(),2)+pow(B.dameTuImag(),2)));
    return Z;
}
