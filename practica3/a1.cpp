#include <iostream>
#include <stdlib.h> 
#include <math.h> 
using namespace std;  
void area();
int main()
{area();
 system("pause");
 return 0;
}
// desarrollo de la funcion area
void area()
     { float largo,ancho,ar;
       cout<<"Ingrese el largo : "<<endl;
       cin>>largo;
       cout<<"Ingrese el ancho : "<<endl;
       cin>>ancho;
       ar=largo * ancho;
       cout<<"Area del rectangulo : "<<ar<<" Unidades cuadradas "<<endl;
       }
