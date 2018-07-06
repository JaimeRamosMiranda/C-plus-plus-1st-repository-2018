#include <iostream>
#include <stdlib.h> 
#include <math.h> 
using namespace std;  
float area();
int main()
     { float r;
      r=area();
       cout<<"Area del rectangulo : "<<r<<" Unidades cuadradas "<<endl;
       system("pause");
        return 0;
       }
float area()
{float largo,ancho,ar;
       cout<<"Ingrese el largo : "<<endl;
       cin>>largo;
       cout<<"Ingrese el ancho : "<<endl;
       cin>>ancho;
       ar=largo*ancho; 
       return ar; 
}
