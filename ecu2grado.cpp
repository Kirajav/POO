#include<iostream>
#include<math.h>
#include"clases\ecuacion.h"


using namespace std;


    int main(){

            Ecuacion C1;
            float x1,x2,d;
            cout<<endl;
            cout<<endl;
            cout<<"\tax^2 + bx + cx=0  c"<<endl;
            cout<<endl;

            C1.pideleAlUsuarioTusDatos();

             d=((pow(C1.dameTuB(),2))-(4*C1.dameTuA()*C1.dameTuC()));

            if(C1.dameTuA()==0)
            {
            cout<<"erro coeficiente de a no valido !!"<<endl;
            }
             else if( d<=0)
            {
            cout<<"el valor del discriminante deve ser mayor o igual a 0"<<endl;

            }

            else{

            x1=(((-1)*C1.dameTuB())+sqrt(d))/ (2*C1.dameTuA());
            x2=(((-1)*C1.dameTuB())-sqrt(d))/ (2*C1.dameTuA());

             cout<<endl;
             cout<<"las rizes son:"<<endl;
            cout<<"X1= "<<x1<<endl;
            cout<<"X2="<<x2<<endl;

            }




            return 0;
        }
