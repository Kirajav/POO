//
// main.cpp
// Programa de Eder
//
// Created by JJavier on 05/12/13.
// Copyright (c) 2013 JJavier. All rights reserved.
//
#include <iostream>
// using namespace std;
using namespace std;
// Clases
class Hora
{
    int Horas;
    int Minutos;
    int Segundos;
public:
    // Metodos
    Hora(int hora, int minutos, int segundos);
    void Leer (void);
    void Imprimir (void);
};
Hora::Hora(int hora, int minutos, int segundos)
{
    Horas = hora;
    Minutos = minutos;
    Segundos = segundos;
}
void Hora::Leer(void)
{
    cout<<"\n Ingresa los segundos : ";
    cin>>Segundos;
    cout<<"\n Ingresa los minutos : ";
    cin>>Minutos;
    cout<<"\n Ingresa el numero de hora : ";
    cin>>Horas;
}
void Hora::Imprimir(void)
{
    cout<<"\n La hora ingresada es : "<<Horas<<"\n";
    cout<<"\n Los minutos ingresados son : "<<Minutos<<"\n";
    cout<<"\n Los segundos ingresados son : "<<Segundos<<"\n";
}
// Clase Fecha
class Fecha
{
    int Dia;
    string Mes;
    int Anhio;
public:
    // Metodos
    Fecha(int dia, string mes, int anhio);
    void Leer (void);
    void Imprimir (void);
};
Fecha::Fecha(int dia, string mes, int anhio)
{
    Dia = dia;
    Mes = mes;
    Anhio = anhio;
}
void Fecha::Leer(void)
{
    cout<<"\n Ingresa el dia : ";
    cin>>Dia;
    cout<<"\n Ingresa el mes : ";
    //TE FALTO PONER CIN.GET(), SI NO SE PONE, EL PROGRAMA SE SALTA DE LEER EL DIA AL AÑO SIN PERMITIRLE AL USUARIO LEER EL MES
    cin.get();
    getline(cin,Mes);
    cout<<"\n Ingresa el anhio : ";
    cin>>Anhio;
}
void Fecha::Imprimir(void)
{
    cout<<"\n El dia ingresado es : "<<Dia<<"\n";
    cout<<"\n El mes ingresado es : "<<Mes<<"\n";
    cout<<"\n El anhio ingresado es : "<<Anhio<<"\n";
}
class Agenda : public Hora, public Fecha
//HERENCIA DE FECHA QUE POR DEFAULT ERA PRIVATE SI NO SE ESPECIFICA, POR ENDE DEBE SER "PUBLIC FECHA"
{
public:
    //INICIALIZACIÓN DE VARIABLES EN LINEA; SI NO SE PONE, EN EL MAIN, AL DECLARAR UN OBJETO AGENDA, DEBIA PONER LOS VALORES AHUEVO TAL COMO EL CONSTRUCTOR DICATABA. AHORA YA PUEDO PONER SOLO "AGENDA AGE" EN EL MAIN
    Agenda(int=0, int=0, int=0, int=0, string ="", int =0);
};
Agenda::Agenda(int hora, int minutos, int segundos, int dia, string mes, int anhio): Hora(hora, minutos, segundos), Fecha(dia, mes, anhio)
{}
int main()
{
    Agenda age;
    cout<<"Hola!";
    age.Fecha::Leer();
    age.Hora::Leer();
    age.Fecha::Imprimir();
    age.Hora::Imprimir();
    return 0;
}
