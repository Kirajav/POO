#include<iostream>
#include<stdlib.h>

using namespace std;

class Vector{
friend istream& operator>>(istream&,Vector&);
friend ostream& operator<<(ostream&,Vector&);
friend Vector operator+(Vector&,Vector&);
friend Vector operator-(Vector&,Vector&);
protected:
    float *V;
    int tamano;
    void generaVector();
    void eliminaVector();
    void verificaTamano();
public:
    Vector(int=0);
    ~Vector();
    void pideleAlUsuarioTusDatos();
    void muestraTusDatos();
    void leeVector();
    void muestraVector();
    void inicializaVector();
    int dameTuTamano();
    void modificaTuTamano(int);
    float dameTuElemento(int);
    void modificaTuElemento(int,float);
    void operator=(Vector);
};

void Vector::Vector::generaVector(){
    if(tamano>0){
        V = new float[tamano];
        inicializaVector();
    }
    else
        V=NULL;
}

void Vector::eliminaVector(){
    if(V!=NULL){
        tamano=0;
        delete V;
        V=NULL;
    }
}

void Vector::verificaTamano(){
    if(tamano<0){
        eliminaVector();
        cout << "Error de tamano." << endl;
        exit(-1);
    }
}

Vector::Vector(int n):tamano(n){
    verificaTamano();
    generaVector();
}

Vector::~Vector(){
    eliminaVector();
}

void Vector::pideleAlUsuarioTusDatos(){
    eliminaVector();
    cout << "Dame mi tamano ";
    cin >> tamano;
    verificaTamano();
    generaVector();
    leeVector();
}

void Vector::muestraTusDatos(){
    cout << "Mi tamano es " << tamano << endl;
    muestraVector();
}

void Vector::leeVector(){
    for(int i=0;i<tamano;i++){
            cout << "Introduce [" << i << "] ";
            cin >> V[i];
        }
}

void Vector::muestraVector(){
    for(int i=0;i<tamano;i++)
            cout << V[i] << endl;
}

void Vector::inicializaVector(){
    for(int i=0;i<tamano;i++)
        V[i] = 0;
}

int Vector::dameTuTamano(){
    return tamano;
}

void Vector::modificaTuTamano(int n){
    eliminaVector();
    tamano=n;
    verificaTamano();
    generaVector();
}

float Vector::dameTuElemento(int i){
    if(tamano>0 && i>=0 && i<tamano)
        return V[i];
    else{
        eliminaVector();
        cout << "Error. Elemento inextistente." << endl;
        exit(-2);
    }
}

void Vector::modificaTuElemento(int i, float a){
    if(tamano>0 && i>=0 && i<tamano)
        V[i] = a;
    else{
        eliminaVector();
        cout << "Error. Elemento inextistente." << endl;
        exit(-3);
    }
}

void Vector::operator=(Vector X){
    eliminaVector();
    if(X.dameTuTamano()!=0){
        tamano=X.dameTuTamano();
        generaVector();
        for(int i=0;i<tamano;i++)
                V[i] = X.dameTuElemento(i);
    }
}

Vector operator+(Vector& X,Vector& Y){
    Vector Z;
    if(X.tamano==Y.tamano){
        Z.tamano=X.tamano;
        Z.generaVector();
        for(int i=0;i<X.tamano;i++)
                Z.V[i] = X.V[i] + Y.V[i];
    }
    else
        cout << "Error. No pueden sumarse los vectores." << endl;
    return Z;
}

Vector operator-(Vector& X,Vector& Y){
    Vector Z;
    if(X.tamano==Y.tamano){
        Z.tamano=X.tamano;
        Z.generaVector();
        for(int i=0;i<X.tamano;i++)
                Z.V[i] = X.V[i] - Y.V[i];
    }
    else
        cout << "Error. No pueden restarse los vectores." << endl;
    return Z;
}

istream& operator>>(istream& teclado, Vector& X){
    X.pideleAlUsuarioTusDatos();
    return teclado;
}

ostream& operator<<(ostream& monitor, Vector& X){
    X.muestraTusDatos();
    return monitor;
}
