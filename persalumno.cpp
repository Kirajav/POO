#include<iostream>
#include"Clases\Alumno.h"
#include<stdlib.h>

using namespace std;

int main(){
Persona P;
Alumno A;
cout<<"Persona original"<<endl;
cout<<endl;
P.muestraTusDatos();
cout<<endl<<endl;
cout<<"Alumno original"<<endl;
cout<<endl;
A.muestraTusDatos();
system("pause");
system("cls");
//cout<<"Persona"<<endl;
//cout<<endl;
//P.pideleAlUsuarioTusDatos();
//cout<<endl;
cout<<"Alumno"<<endl;
cout<<endl;
A.pideleAlUsuarioTusDatos();
system("cls");

cout<<"Persona modificada"<<endl;
cout<<endl;
P.muestraTusDatos();
cout<<endl;
cout<<"Alumno modificado"<<endl;
cout<<endl;
A.muestraTusDatos();
}
