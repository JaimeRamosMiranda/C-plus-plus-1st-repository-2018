         //     area y longitud de la circunferencia
              
#include <iostream>
#include <stdlib.h> 
#include <math.h>
#define pi 3.1416 
using namespace std;  
float circulo(float r);
int main()
     { float radio,area;
       cout<<"Ingrese el radio del circulo : "<<endl;
       cin>>radio;
       area=circulo(radio);
       cout<<"Area del circulo : "<<area<<" Unidades cuadradas "<<endl;
      // cout<<"Longitud de la circunf :"<<lon<<"Unidades"<<endl;
	   system("pause");
        return 0;
       }
float circulo(float r)
{
  return (pi*r*r);
    
}

