#include <iostream>

using namespace std;

class Matriz{
    friend istream& operator>>(istream&,Matriz&);
    friend ostream& operator<<(ostream&,Matriz);
    friend Matriz operator+(Matriz&,Matriz&);
    friend Matriz operator-(Matriz&,Matriz&);
    friend Matriz operator*(Matriz&,Matriz&);



protected:
     int m,n;
     float **M;

     void eliminaMatriz();
     void verificaOrden();
     void generaMatriz();

public:

     Matriz(int=0,int=0);
     ~Matriz();

     void pideleAlUsuarioTusDatos();
     void muestraTusDatos();
     int dameTusFilas();
     int dameTusColumnas();
     void modificaTusColumnas(int);
     void modificaTusFilas(int);
     void modificaOrden(int, int);
     void leeMatriz();
     void muestraMatriz();

     void inicializaMatriz();
     float dameTuElemento(int, int);
     void modificaTuElemento(int, int, float);

};

void Matriz::generaMatriz(){

    if(m>0 && n>0){
        M = new float*[m];
        for(int i=0;i<m;i++)
            M[i]=new float[n];
        }
    else{
        M=NULL;
    }
}
void Matriz::eliminaMatriz(){

    if(M!=NULL){
        for(int i=0;i<m;i++)
            delete M[i];
        delete M;
        m=0;
        n=0;
        M=NULL;
    }
}
Matriz::Matriz(int f,int c):m(f),n(c){
    verificaOrden();
    generaMatriz();
    inicializaMatriz();
}
Matriz::~Matriz(){
    eliminaMatriz();
}

void Matriz::verificaOrden(){
    if((m<0||n<0)||(m>0&& n==0)||(m==0 && n>0)){
        eliminaMatriz();
        cout<<"Error"<<endl;
        exit(-1);
    }
}

void Matriz::inicializaMatriz(){
for(int i=0;i<m;i++)
   for(int j=0;j<n;j++)
        M[i][j]=0;
   }

void Matriz::pideleAlUsuarioTusDatos(){
    eliminaMatriz();
    cout<<"Dame mi Orden";
    cin>>m>>n;
    verificaOrden();
    generaMatriz();
    leeMatriz();
}


void Matriz::leeMatriz(){
for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        cout<<"Dame ["<<i<<"] ["<<j<<"]: ";
        cin>>M[i][j];
        }
}

void Matriz::muestraTusDatos(){
    cout<<"Mis filas son: "<<m<<endl;
    cout<<"Mis columnas son: "<<n<<endl;
    muestraMatriz();
}
void Matriz::muestraMatriz(){
for(int i=0;i<m;i++){
    cout<<"\n";
  for(int j=0;j<n;j++)
    cout<<M[i][j]<<"    ";
    cout<<endl;
  }
}

int Matriz::dameTusFilas(){
return m;
}

int Matriz::dameTusColumnas(){
return n;
}

void Matriz::modificaTusFilas(int f){
    int  c;
    c=n;
    eliminaMatriz();
    if(c==0 && f!=0)
    c=1;
    m=f;
    n=c;
    verificaOrden();
    generaMatriz();
}

void  Matriz::modificaTusColumnas(int c){
    int f;
    f=m;
    eliminaMatriz();
    if(f==0 && c!=0)
    m=f;
    n=c;
    verificaOrden();
    generaMatriz();
}

float  Matriz::dameTuElemento(int i, int j){
    if((m>0 && n>0) && (i>=0&&i<m) && (j>=0 &&j<n))
        return M[i][j];
    else{
        eliminaMatriz();
        cout<<"Error de orden"<<endl;
        exit(-2);
    }
}
void Matriz::modificaTuElemento(int i, int j,float a){
    if((m>0 && n>0) &&(i>=0 && i<m)&&(j>=0&&j<n))
        M[i][j]=a;
    else{

        eliminaMatriz();
        cout<<"Error de orden"<<endl;
        exit(-3);
    }
}
istream& operator>>(istream& teclado, Matriz& Z){
    Z.pideleAlUsuarioTusDatos();
    return teclado;
    }

ostream& operator<<(ostream& monitor, Matriz& Z){
    Z.muestraTusDatos();
    return monitor;
    }

Matriz operator+(Matriz &X,Matriz &Y){
    Matriz Z;
    if(X.m==Y.m && X.n==Y.n){
        Z.m=X.m;
        Z.n=Y.n;
        Z.generaMatriz();
        for(int i=0;i<Z.m;i++)
            for(int j=0;j<Z.n;j++)
                Z.M[i][j]=X.M[i][j]+Y.M[i][j];

}
    else cout<<"Error  !!!";
    return  Z;
}

Matriz operator-(Matriz &X,Matriz &Y){
Matriz Z;
if(X.m==Y.m && X.n==Y.n){
Z.m=X.m;
Z.n=Y.n;
Z.generaMatriz();
for(int i=0;i<Z.m;i++)
    for(int j=0;j<Z.n;j++)
     Z.M[i][j]=X.M[i][j]-Y.M[i][j];

}
else cout<<"Error  !!!";
return  Z;
}


Matriz operator*(Matriz &X, Matriz &Y){
Matriz Z;
if(X.m==Y.m){
Z.m=X.m;
Z.n=Y.n;
Z.generaMatriz();
for(int i=0;i<Z.m;i++)
  for(int j=0;j<Z.n;j++)
      for(int k=0;k<X.n;k++)

    Z.M[i][j]=X.M[i][k]*Y.M[k][j];
}

   else


       cout<<"Error";
       return  Z;


}
void Matriz::operator=(Matriz &Z){
eliminaMatriz();
if(Z.dameTusFilas()!=0){
m=Z.dameTusFilas();
n=Z.dameTusColumnas();
generaMatriz();

for(int i=0; i<m;i++)
   for(int j=0;j<n;j++)
   M[i][j]=Z.dameTuElemento(i,j);
   }
}


