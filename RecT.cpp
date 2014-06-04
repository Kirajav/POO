#include<iostream>
#include "clases/RectanguloT.h"

using namespace std;

int main(){
    Rectangulo<int> R1, R2;
    int AT, PT;

    cin >> R1 >> R2;

    AT = R1 + R2;
    PT = R1 - R2;

    cout << AT << endl << PT << endl << R1 << endl << R2 << endl;

    return 0;
}
