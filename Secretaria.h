#include <iostream>
#include<string>
#include"Empleado.h"
class Secretaria:public Empleado {
    protected:
        int numIdiomas;
        float golpesMinuto;
        string tipoTaquigrafia;
    public:
    Secretaria(int=0, float=0.0,string="",
            int=0, float=0.0,string="",
            int=0, float=0.0,string="");
    ~Secretaria();
    void pideleAlUsuarioTusDatos();
    void muestraTusDatos();
    int dameTuNumIdiomas();
    float dameTusGolpesMinuto();
    string dameTuTipoTaquigrafia();
    void modificaTuNumIdioma(int);
    void modificaTusGolpesMinuto(float);
    void modificaTuTipoTaquigrafia(string);};

Secretaria::Secretaria(int ed, float es,string g,
                   int ne, float s, string p,
                   int ng, float h, string a):
        Empleado(ed,es,g,ne,s,p),numIdiomas(ng),golpesMinuto(h),tipoTaquigrafia(a){}
Secretaria::~Secretaria(){}
void Secretaria::pideleAlUsuarioTusDatos(){
    Empleado::pideleAlUsuarioTusDatos();
    cout<<"Dame mi Numero de Grupos: ";
    cin>>numIdiomas;
    cout<<"Dame mi numero de golpesMinuto: ";
    cin>>golpesMinuto;
    cout<<"Dame mi tipoTaquigrafia: "<<endl;
    cin.get();
    getline(cin, tipoTaquigrafia); }
void Secretaria::muestraTusDatos(){
    Empleado::muestraTusDatos();
    cout<<"Mi numero de Grupos es: "<<numIdiomas<<endl;
    cout<<"Mi numero de golpesMinuto es: "<<golpesMinuto<<endl;
    cout<<"Mi tipoTaquigrafia es : "<<tipoTaquigrafia<<endl; }
int Secretaria::dameTuNumIdiomas(){
    return numIdiomas; }
float Secretaria::dameTusGolpesMinuto(){
    return golpesMinuto; }
string Secretaria::dameTuTipoTaquigrafia(){
    return tipoTaquigrafia; }
void Secretaria::modificaTuNumIdioma(int ng){
    numIdiomas=ng; }
void Secretaria::modificaTusGolpesMinuto(float h){
    golpesMinuto=h; }
void Secretaria::modificaTuTipoTaquigrafia(string a){
    tipoTaquigrafia=a; }
