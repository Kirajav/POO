#include<iostream>
#include<stdlib.h>

using namespace std;

class Matriz{
friend istream& operator>>(istream&,Matriz&);
friend ostream& operator<<(ostream&,Matriz&);
friend Matriz operator+(Matriz&,Matriz&);
friend Matriz operator-(Matriz&,Matriz&);
friend Matriz operator*(Matriz&,Matriz&);
protected:
    float **M;
    int m,n;
    void generaMatriz();
    void eliminaMatriz();
    void verificaOrden();
public:
    Matriz(int=0,int=0);
    ~Matriz();
    void pideleAlUsuarioTusDatos();
    void muestraTusDatos();
    void leeMatriz();
    void muestraMatriz();
    void inicializaMatriz();
    int dameTusFilas();
    int dameTusColumnas();
    void modificaTusFilas(int);
    void modificaTusColumnas(int);
    void modificaTuOrden(int,int);
    float dameTuElemento(int,int);
    void modificaTuElemento(int,int,float);
    void operator=(Matriz);
};

void Matriz::Matriz::generaMatriz(){
    if(m!=0){
        M = new float*[m];
        for(int i=0;i<m;i++)
            M[i] = new float[n];
        inicializaMatriz();
    }
    else
        M=NULL;
}

void Matriz::eliminaMatriz(){
    if(M!=NULL){
        for(int i;i<m;i++)
            delete M[i];
        delete M;
        m=0;
        n=0;
        M=NULL;
    }
}

void Matriz::verificaOrden(){
    if(m<0 || n<0 || (m!=0 && n==0) || (n!=0 && m==0)){
        eliminaMatriz();
        cout << "Error de orden." << endl;
        exit(-1);
    }
}

Matriz::Matriz(int f,int c):m(f),n(c){
    verificaOrden();
    generaMatriz();
}

Matriz::~Matriz(){
    eliminaMatriz();
}

void Matriz::pideleAlUsuarioTusDatos(){
    eliminaMatriz();
    cout << "Dame mis filas ";
    cin >> m;
    cout << "Dame mis columnas ";
    cin >> n;
    verificaOrden();
    generaMatriz();
    leeMatriz();
}

void Matriz::muestraTusDatos(){
    cout << "Mis filas son " << m << endl
         << "Mis columnas son " << n <<endl;
    muestraMatriz();
}

void Matriz::leeMatriz(){
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++){
            cout << "Introduce [" << i << "][" << j << "] ";
            cin >> M[i][j];
        }
}

void Matriz::muestraMatriz(){
    if(M!=NULL){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
                cout << M[i][j] << " ";
            cout << endl;
        }
    }
    else
        cout << "M = NULL" << endl;
}

void Matriz::inicializaMatriz(){
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
                M[i][j] = 0;
}


int Matriz::dameTusFilas(){
    return m;
}

int Matriz::dameTusColumnas(){
    return n;
}

void Matriz::modificaTusFilas(int f){
    int c;
    c=n;
    eliminaMatriz();
    if(c==0&&f!=0)
        c=1;
    m=f;
    n=c;
    verificaOrden();
    generaMatriz();
}

void Matriz::modificaTusColumnas(int c){
    int f;
    f=m;
    eliminaMatriz();
    if(f==0&&c!=0)
        f=1;
    m=f;
    n=c;
    verificaOrden();
    generaMatriz();
}

void Matriz::modificaTuOrden(int f, int c){
    eliminaMatriz();
    m=f;
    n=c;
    verificaOrden();
    generaMatriz();
}

float Matriz::dameTuElemento(int i,int j){
    if(m>0 && (i>=0 && i<m) && (j>=0 && j<n))
        return M[i][j];
    else{
        eliminaMatriz();
        cout << "Error. Elemento inextistente." << endl;
        exit(-2);
    }
}

void Matriz::modificaTuElemento(int i, int j, float a){
    if(m>0 && (i>=0 && i<m) && (j>=0 && j<n))
        M[i][j] = a;
    else{
        eliminaMatriz();
        cout << "Error. Elemento inextistente." << endl;
        exit(-3);
    }
}

void Matriz::operator=(Matriz X){
    eliminaMatriz();
    if(X.dameTusFilas()!=0){
        m=X.dameTusFilas();
        n=X.dameTusColumnas();
        generaMatriz();
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                M[i][j] = X.M[i][j];
    }
}

Matriz operator+(Matriz& X,Matriz& Y){
    Matriz Z;
    if(X.m==Y.m && X.n==Y.n){
        Z.m=X.m;
        Z.n=X.n;
        Z.generaMatriz();
        for(int i=0;i<X.m;i++)
            for(int j=0;j<X.n;j++)
                Z.M[i][j] = X.M[i][j] + Y.M[i][j];
    }
    else
        cout << "Error. No pueden sumarse las matrices." << endl;
    return Z;
}

Matriz operator-(Matriz& X,Matriz& Y){
    Matriz Z;
    if(X.m==Y.m && X.n==Y.n){
        Z.m=X.m;
        Z.n=X.n;
        Z.generaMatriz();
        for(int i=0;i<X.m;i++)
            for(int j=0;j<X.n;j++)
                Z.M[i][j] = X.M[i][j] - Y.M[i][j];
    }
    else
        cout << "Error. No pueden restarse las matrices." << endl;
    return Z;
}

Matriz operator*(Matriz& X,Matriz& Y){
    Matriz Z;
    if(X.n==Y.m){
        Z.m=X.m;
        Z.n=Y.n;
        Z.generaMatriz();

        for(int i=0;i<X.m;i++)
            for(int j=0;j<Y.n;j++)
                for(int k=0;k<X.n;k++)
                Z.M[i][j] += X.M[i][k] * Y.M[k][j];
    }
    else
        cout << "Error. No pueden multiplicarse las matrices." << endl;
    return Z;
}


istream& operator>>(istream& teclado, Matriz& X){
    X.pideleAlUsuarioTusDatos();
    return teclado;
}

ostream& operator<<(ostream& monitor, Matriz& X){
    X.muestraTusDatos();
    return monitor;
}
