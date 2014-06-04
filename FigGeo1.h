#include<iostream>


using namespace std;

class FigGeo{

    protected:

        float  area, perimetro;
        int numLados;

    public:
        FigGeo(int=3);
        void muestraTusDatos();
        int  dameTuNumLados();
        float dameTuArea();
        float dameTuPerimetro();
};

float FigGeo::dameTuArea(){
return area;
}

FigGeo::FigGeo(int a):numLados(a){}

int FigGeo::dameTuNumLados(){
return numLados;
}

float FigGeo::dameTuPerimetro(){
return perimetro;
}

void FigGeo::muestraTusDatos(){
cout<<"Mi area es: "<<area<<endl;
cout<<"Mi perimetro es: "<<perimetro<<endl;
cout<<"Mi numero de lados es: "<<numLados<<endl;
}

