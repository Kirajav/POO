#include <iostream>

using namespace std;

template<class T>
class Rectangulo{
    template<class S> friend ostream& operator<< (ostream&, Rectangulo<S>);
    template<class S> friend istream& operator>> (istream&, Rectangulo<S>&);
protected:
    T base,altura;
public:
    Rectangulo(T =0,T =0.0);
    void pideleAlUsuarioTusCoordenadas();
    void muestraTusDatos();
    void modificaTuBase(T);
    void modificaTuAltura(T);
    T dameTuBase();
    T dameTuAltura();
    T operator+(Rectangulo<T>);
    T operator-(Rectangulo<T>);
};

template<class T>
Rectangulo<T>::Rectangulo(T b, T a){
	base=b;
	altura=a;
}

template<class T>
void Rectangulo<T>::pideleAlUsuarioTusCoordenadas(){
	cout<<"Dame mi base ";
	cin>>base;
	cout<<"Dame mi altura ";
	cin>>altura;
}

template<class T>
void Rectangulo<T>::muestraTusDatos(){
	cout<<'('<<base<<','<<altura<<')'<<endl;
}

template<class T>
void Rectangulo<T>::modificaTuBase(T b){
	base=b;
}

template<class T>
void Rectangulo<T>::modificaTuAltura(T a){
	altura=a;
}

template<class T>
T Rectangulo<T>::dameTuBase(){
	return base;
}

template<class T>
T Rectangulo<T>::dameTuAltura(){
	return altura;
}

template<class T>
T Rectangulo<T>::operator +(Rectangulo<T> B){
    T a;
    a = base*altura + B.dameTuBase()* B.dameTuAltura();
    return a;
}

template<class T>
T Rectangulo<T>::operator -(Rectangulo<T> B){
    T a;
    a = (2*base + 2*altura) - (2*B.dameTuBase()+ 2*B.dameTuAltura());
    return a;
}

template<class S>
ostream& operator<< (ostream& monitor, Rectangulo<S> P){
	P.muestraTusDatos();
	return monitor;
}

template<class S>
istream& operator>> (istream& teclado, Rectangulo<S>& P){
	P.pideleAlUsuarioTusCoordenadas();
    return teclado;
}
