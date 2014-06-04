#include <iostream>
#include<string>
#include"Persona.h"

using namespace std;

class Empleado:public Persona{

    protected:
        int numEmp;
        float sueldo;
        string puesto;


    public:
    Empleado(int=0, float=0.0,string="",int=0, float=0.0,string="");
    ~Empleado();
    void pideleAlUsuarioTusDatos();
    void muestraTusDatos();
    int dameTuNumEmp();
    float dameTuSueldo();
    string dameTuPuesto();
    void modificaTuNumEmp(int);
    void modificaTuSueldo(float);
    void modificaTuPuesto(string);
};
Empleado::Empleado(int ed, float es,string g,int ne, float s,string p):Persona(ed,es,g),numEmp(ne),sueldo(s),puesto(p){
}


Empleado::~Empleado(){
}

int Empleado::dameTuNumEmp(){
return numEmp;

}
float Empleado::dameTuSueldo(){

return sueldo;}

string Empleado::dameTuPuesto(){
return puesto;
}


void Empleado::modificaTuNumEmp(int ne){
numEmp=ne;
}

void Empleado::modificaTuSueldo(float s){
sueldo=s;
}

void Empleado::modificaTuPuesto(string p){
puesto=p;

}


void Empleado::muestraTusDatos(){
Persona::muestraTusDatos();

cout<<"Mi num empleado es: "<<numEmp<<endl;
cout<<"Mi sueldo es: "<<sueldo<<endl;
cout<<"Mi puesto es: "<<puesto<<endl;

}

void Empleado::pideleAlUsuarioTusDatos(){

Persona::pideleAlUsuarioTusDatos();
cout<<"Dame mi No. empleado: ";
cin>>numEmp;
cout<<"Dame mi sueldo: ";
cin>>sueldo;
cout<<"Dame mi puesto: ";
cin.get();
getline(cin,puesto);

}
