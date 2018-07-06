                  
                   // Reciben y no retornan
#include <iostream>
#include <stdlib.h> 
#include <math.h> 
using namespace std;  
void area(float l,float a,float &ar);
int main()
     { float largo,ancho,r;
       cout<<"Ingrese el largo : "<<endl;
       cin>>largo;
       cout<<"Ingrese el ancho : "<<endl;
       cin>>ancho;
       area(largo, ancho,r);
       cout<<"Area del rectangulo : "<<r<<" Unidades cuadradas "<<endl;
       system("pause");
        return 0;
       }
void area(float l,float a,float &ar)
{ar=l*a;
}

