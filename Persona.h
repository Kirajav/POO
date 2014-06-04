#include <iostream>
#include<string>

using namespace std;

class Persona{

    protected:
        float estatura;
        int edad;
        string genero;


    public:
    Persona(int=0, float=0.0,string="");
    ~Persona();
    void pideleAlUsuarioTusDatos();
    void muestraTusDatos();
    int dameTuEdad();
    float dameTuEstatura();
    string dameTuGenero();
    void modificaTuEdad(int);
    void modificaTuEstatura(float);
    void modificaTuGenero(string);
};
Persona::Persona(int ed, float es,string g):edad(ed),estatura(es),genero(g){
}


Persona::~Persona(){
}
void Persona::modificaTuEdad( int ed){
  edad=ed;


}
void Persona::modificaTuEstatura(float es){

estatura=es;

}
void Persona::modificaTuGenero(string g){
genero=g;

}

void Persona::pideleAlUsuarioTusDatos(){
 cout<<"Dame mi edad: ";
 cin>>edad;
 cout<<"Dame mi estatura: ";
 cin>>estatura;
 cout<<"Dame mi genero: ";
 cin.get();
 getline(cin,genero);
}
void Persona::muestraTusDatos(){

cout<<"Mi edad es: "<<edad<<endl;
cout<<"MI estatura es: "<<estatura<<endl;
cout<<"Mi genero es: "<<genero<<endl;

}
int Persona::dameTuEdad(){
return edad;
}

float Persona::dameTuEstatura(){

return estatura;
}

 string Persona::dameTuGenero(){
 return genero;
 }

