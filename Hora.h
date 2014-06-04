#include<iostream>

using namespace std;

class Hora{

private:
    int hr,mn,sg;

public:
    Hora(int=00, int=00, int=00);

    ~Hora();

    void pideleAlUsuarioTusDatos();
    void muestraTusDatos();
    int dameTuHora();
    int dameTuMin();
    int dameTuSeg();
    void modificaTuHora(int x);
    void modificaTuMinuto(int y);
    void modificaTuSeg(int z);
};

Hora::Hora(int x, int y, int z){
    hr=x;
    mn=y;
    sg=z;
    }

Hora::~Hora(){}

void Hora::pideleAlUsuarioTusDatos(){
        cout<<"Dame la hora: ";
        cin>>hr;
        cout<<"Dame los minutos: ";
        cin>>mn;
        cout<<"Dame los segundos: ";
        cin>>sg;
    }

void Hora::muestraTusDatos(){
        cout<<hr<<":"<<mn<<":"<<sg;
    }

int Hora::dameTuHora(){
        return hr;
    }
int Hora::dameTuMin(){
        return mn;
    }
int Hora::dameTuSeg(){
        return sg;
    }
void Hora::modificaTuHora(int x){
        hr=x;
    }

void Hora::modificaTuMinuto(int y){
        mn=y;

    }
void Hora::modificaTuSeg(int z){
        sg=z;

    }
