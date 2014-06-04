#include<iostream>
#include "Fecha.h"
#include "Hora.h"

using namespace std;

class Evento{

    private:
        Fecha F;
        Hora H;
    public:
        Evento(int=0,int=0,int=0,int=0,int=0,int=0);
        Evento(Fecha,Hora);
       ~Evento();
    void pideleAlUsuarioTusDatos();
    void muestraTusDatos();
    int dameTuA();
    int dameTuD();
    int dameTuMes();
    int dameTuHora();
    int dameTuMin();
    int dameTuS();
    void modificaTuA(int);
    void modificaTuMes(int);
    void modificaTuD(int);
    void modificaTuHora(int);
    void modificaTuMin(int);
    void modificaTuS(int);

    Fecha dameTuF();
    Hora dameTuH();
    void modificaTuF(Fecha);
    void modificaTuH(Hora);
};

Evento(int d=0,int m=0,int a=0,int h=0,int mi=0,int s=0){
        F.modificaTuD(d);
        F.modificaTuM(m);
        F.modificaTuA(a);
        H.modificaTuH(h);
        H.modificaTuMin(mi);
        H.modificaTuS(s);
}
        Evento(Fecha k,Hora l){
            F=k;
            H=l;
        }
    void Evento::~Evento{

        }
 void Evento::pideleAlUsuarioTusDatos(){
     cout<<"Introduce mi fecha"<<endl;
     F.pideleAlUsuarioTusDatos();
     cout<<"Introduce mi hora"<<endl;
     H.pideleAlUsuarioTusDatos();
 }
    void Evento::muestraTusDatos(){
        cout<<"Mi fecha"<<endl;
        F.muestraTusDatos();
        cout<<"Mi hora"<<endl;
        H.muestraTusDatos();
    }
    int Evento::dameTuA(){
        return F.dameTuA();
    }
    int Evento::dameTuD(){
        return F.dameTuD();
    }
    int Evento::dameTuMes(){
        return F.dameTuM();
    }
    int Evento::dameTuHora(){
        return H.dameTuH();
    }
    int Evento::dameTuMin(){
        return H.dameTuM();
    }
    int Evento::dameTuS(){
        return H.dameTuS();
    }
    void Evento::modificaTuA( int a){
        F.modificaTuA(a);
    }
    void Evento::modificaTuMes(int m){
        F.modificaTuM(m);
    }
    void Evento::modificaTuD( int d){
        F.modificaTuD(d);
    }
    void Evento::modificaTuHora(int h){
        H.modificaTuH(h);
    }
    void Evento::modificaTuMin(int m){
        H.modificaTuM(m);
    }
    void Evento::modificaTuS(int s){
        H.modificaTuS(s);
    }

    Fecha Evento::dameTuF(){
        F.dameTuF();
        return F;
        }
    Hora Evento::dameTuH(){
        H.dameTuH();
        return H;
        }
    void Evento::modificaTuF(Fecha x){
        F=x;
        }
    void Evento::modificaTuH(Hora y){
        H=y;
        }
