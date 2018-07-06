         //     area y longitud de la circunferencia
              
#include <iostream>
#include <stdlib.h> 
#include <math.h>
#define pi 3.1416 
using namespace std;  
void circulo(float r,float &ac,float &lc);
int main()
     { float radio;
       cout<<"Ingrese el radio del circulo : "<<endl;
       cin>>radio;
       circulo(radio,area,lon);
       cout<<"Area del circulo : "<<area<<" Unidades cuadradas "<<endl;
       cout<<"Longitud de la circunf :"<<lon<<"Unidades"<<endl;
	   system("pause");
        return 0;
       }
void circulo(float r,float &ac,float &lc)
{ac=pi*r*r;
 lc=2*pi*r;    
}

