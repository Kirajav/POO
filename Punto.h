#include<iostream>

using namespace std;
template<typename T>

class Punto{

template<class W>friend istream& operator >>(istream&, Punto<W> &)
template<class W>friend ostream& operator <<(ostream&, Punto<W>)

private:
    T x,y;
public:
    Punto(T=0, T=0);
    ~Punto();
    void pideleAlUsuarioTusDatos();
    void muestraTusDatos();
    T dameTuX();
    T dameTuY();
    void modificaTuX(T);
    void modificaTuY(T);
    Punto<T> operator+(Punto<T>);
    Punto<T> operator-(Punto<T>);
};

template<typename T>
Punto<T>::Punto(T a, T b):x(a),y(b){}

template<typename T> Punto<T>::~Punto(){}

template<typename T>
void Punto<T>::pideleAlUsuarioTusDatos(){
        cout<<"Dame mi X: ";
        cin>>x;
        cout<<"Dame mi Y: ";
        cin>>y;
    }
template<typename T>
void Punto<T>::muestraTusDatos(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
template<typename T>
T Punto<T>::dameTuX(){
        return x;
    }
template<typename T>
T Punto<T>::dameTuY(){
        return y;
    }
template<typename T>
void Punto<T>::modificaTuX(T a){
        x=a;
    }
template<typename T>
void Punto<T>::modificaTuY(T b){
        y=b;
    }
template<typename T>
Punto<T> Punto<T>::operator+(Punto<T> B){
    Punto<T> Z;
    Z.modificaTuX(x+B.dameTuX());
    Z.modificaTuY(y+B.dameTuY());
    return Z;
}
template<typename T>
Punto<T> Punto<T>::operator-(Punto<T> B&){
    Punto<T> Z;
    Z.modificaTuX(x-B.dameTuX());
    Z.modificaTuY(y-B.dameTuY());
    return Z;
}

template<typename W>
istream& operator >>(istream& teclado, Punto<W> Z){
    Z.pideleAlUsuarioTusDatos();
    return teclado;
    }

template<typename W>
ostream& operator <<(ostream& monitor, Punto<W> M){
    Z.muestraTusDatos();
    return monitor;
    }
