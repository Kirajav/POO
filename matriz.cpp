#include<iostream>

#include"Clases/Matriz.h"
#include<stdlib.h>

using namespace std;

int main(){
Matriz A,B,C,D,E;
cin>>A;
cout<<endl<<endl;
cin>>B;
system("cls");
C = A + B;
D = A - B;
E = A * B;
cout<<A<<endl<<endl<<endl;
cout<<B<<endl<<endl<<endl;
cout<<C<<endl<<endl<<endl;
cout<<D<<endl<<endl<<endl;
cout<<E;
return 0;
}


