         //     area y longitud de la circunferencia
              
#include <iostream>
#include <stdlib.h> 
#include <math.h>
#define pi 3.1416 
using namespace std;  
float circulo(float r);
int main()
     { float radio,lon;
       cout<<"Ingrese el radio del circulo : "<<endl;
       cin>>radio;
       lon=circulo(radio);
       cout<<"Longitud de la circunf : "<<lon<<" Unidades  "<<endl;
      
	   system("pause");
        return 0;
       }
float circulo(float r)
{
  return (2*pi*r);
    
}

