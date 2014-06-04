#include<iostream>
#include"clases\Empleado.h"
#include<stdlib.h>

using namespace std;

int main(){
Persona P;
Empleado E;
cout<<"Persona original"<<endl;
cout<<endl;
P.muestraTusDatos();
cout<<endl<<endl;
cout<<"Empleado original"<<endl;
cout<<endl;
E.muestraTusDatos();
system("pause");
system("cls");
//cout<<"Persona"<<endl;
//cout<<endl;
//P.pideleAlUsuarioTusDatos();
//cout<<endl;
cout<<"Empleado"<<endl;
cout<<endl;
E.pideleAlUsuarioTusDatos();
system("cls");

cout<<"Persona modificada"<<endl;
cout<<endl;
P.muestraTusDatos();
cout<<endl;
cout<<"Empleado modificado"<<endl;
cout<<endl;
E.muestraTusDatos();
}
