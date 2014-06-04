#include<iostream>

using namespace std;

class Fecha{

private:
    int mes,dia,a;

public:
    Fecha(int=01,int=01,int=01);

    ~Fecha();

    void pideleAlUsuarioTusDatos();
    void muestraTusDatos();
    int dameTuDia();
    int dameTuMes();
    int dameTuAno();
    void modificaTuDia(int x);
    void modificaTuMes(int y);
    void modificaTuAno(int z);

};

Fecha::Fecha(int u, int v, int w){
    dia=u;
    mes=v;
    a=w;
    }

Fecha::~Fecha(){}
void Fecha::pideleAlUsuarioTusDatos(){
        cout<<"Dame el dia: ";
        cin>>dia;
        cout<<"Dame el mes: ";
        cin>>mes;
        cout<<"Dame el a\244o: ";
        cin>>a;

    }

void Fecha::muestraTusDatos(){
    cout<<dia<<"/"<<mes<<"/"<<a<<" ";
    }

int Fecha::dameTuDia(){
        return dia;
    }
int Fecha::dameTuMes(){
        return mes;
    }
int Fecha::dameTuAno(){
        return a;
    }
void Fecha::modificaTuAno(int x){
        a=x;
    }

void Fecha::modificaTuMes(int y){
        mes=y;

    }
void Fecha::modificaTuDia(int z){
        dia=z;

    }
