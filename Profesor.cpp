#include<iostream>

#include"clases\Profesor.h"
#include<stdlib.h>

using namespace std;

int main(){
Persona P;
Profesor Pr;
cout<<"Persona original"<<endl;
cout<<endl;
P.muestraTusDatos();
cout<<endl<<endl;
cout<<"Profesor original"<<endl;
cout<<endl;
Pr.muestraTusDatos();
system("pause");
system("cls");
//cout<<"Persona"<<endl;
//cout<<endl;
//P.pideleAlUsuarioTusDatos();
//cout<<endl;
cout<<"Profesor"<<endl;
cout<<endl;
Pr.pideleAlUsuarioTusDatos();
system("cls");

cout<<"Persona modificada"<<endl;
cout<<endl;
P.muestraTusDatos();
cout<<endl;
cout<<"Profesor modificado"<<endl;
cout<<endl;
Pr.muestraTusDatos();
}
