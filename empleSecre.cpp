#include<iostream>
#include"clases\Secretaria.h"
#include<stdlib.h>

using namespace std;

int main(){
Persona P;
Secretaria A;
cout<<"Persona original"<<endl;
cout<<endl;
P.muestraTusDatos();
cout<<endl<<endl;
cout<<"Secretaria original"<<endl;
cout<<endl;
A.muestraTusDatos();
system("pause");
system("cls");
cout<<"Persona"<<endl;
cout<<endl;
P.pideleAlUsuarioTusDatos();
cout<<endl;
cout<<"Secretaria"<<endl;
cout<<endl;
A.pideleAlUsuarioTusDatos();
system("cls");

cout<<"Persona modificada"<<endl;
cout<<endl;
P.muestraTusDatos();
cout<<endl;
cout<<"Secretaria modificado"<<endl;
cout<<endl;
A.muestraTusDatos();
}
