#include<iostream>

using namespace std;

class Fecha{

private:
    int mes,dia,a,hr,m,seg;

public:
    Fecha(int=01,int=01,int=01, int=00, int=00, int=00);

    ~Fecha();

    void pideleAlUsuarioTusDatos();
    void muestraTusDatos();
    int dameTuDia();
    int dameTuMes();
    int dameTuAno();
    int dameTuHora();
    int dameTuMin();
    int dameTuSeg();
};
Fecha::Fecha(int u, int v, int w, int x, int y, int z){
    dia=u;
    mes=v;
    a=w;
    hr=x;
    m=y;
    seg=z;
    }

Fecha::~Fecha(){}
void Fecha::pideleAlUsuarioTusDatos(){
        cout<<"Dame el dia: ";
        cin>>dia;
        cout<<"Dame el mes: ";
        cin>>mes;
        cout<<"Dame el a\244o: ";
        cin>>a;
        cout<<"Dame la hora: ";
        cin>>hr;
        cout<<"Dame los minutos: ";
        cin>>m;
        cout<<"Dame los segundos: ";
        cin>>seg;
    }

void Fecha::muestraTusDatos(){
        cout<<dia<<"/"<<mes<<"/"<<a<<" "<<hr<<":"<<m<<":"<<seg;
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
int Fecha::dameTuHora(){
        return hr;
    }
int Fecha::dameTuMin(){
        return m;
    }
int Fecha::dameTuSeg(){
        return seg;
    }
