#include <iostream>
#include<string>
#include"Persona.h"

using namespace std;

class Alumno:public Persona{

    protected:
        float promedio;
        int semestre;
        string carrera;


    public:
    Alumno(int=0, float=0.0,string="",int=0, float=0.0,string="");
    ~Alumno();
    void pideleAlUsuarioTusDatos();
    void muestraTusDatos();
    int dameTuSemestre();
    float dameTuProm();
    string dameTuCarrera();
    void modificaTuSemestre(int);
    void modificaTuPromedio(float);
    void modificaTuCarrera(string);
};
Alumno::Alumno(int ed, float es,string g,int se, float pr,string c):Persona(ed,es,g),semestre(se),promedio(pr),carrera(c){
}

Alumno::~Alumno(){
}

int Alumno::dameTuSemestre(){
return semestre;

}
float Alumno::dameTuProm(){

return promedio;}

string Alumno::dameTuCarrera(){
return carrera;
}


void Alumno::modificaTuSemestre(int se){
semestre=se;
}

void Alumno::modificaTuPromedio(float pr){
promedio=pr;
}

void Alumno::modificaTuCarrera(string c){
carrera=c;

}


void Alumno::muestraTusDatos(){
Persona::muestraTusDatos();

cout<<"Mi semestre es: "<<semestre<<endl;
cout<<"Mi promedio es: "<<promedio<<endl;
cout<<"Mi carrera es: "<<carrera<<endl;

}

void Alumno::pideleAlUsuarioTusDatos(){

Persona::pideleAlUsuarioTusDatos();
cout<<"Dame mi semestre: ";
cin>>semestre;
cout<<"Dame mi promedio: ";
cin>>promedio;
cout<<"Dame mi carrera: ";
cin.get();
getline(cin,carrera);

}
