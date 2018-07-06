         //     area y longitud de la circunferencia
              
#include <iostream>
#include <stdlib.h> 
#include <math.h>
#define pi 3.1416 
using namespace std;  
long factorial(int  r);
int main()
     { int n,fac,i;
       do
       {cout<<"Ingrese un numero >=0 "<<endl;
        cin>>n;
	   }while(n<0);
	   cout<<"Numeros    factorial"<<endl;
       for(i=0;i<=n;i++)
       {fac=factorial(i);
	    cout<<"  "<<i<<"    "<<fac<<endl;
        }
        system("pause");
        return 0;
    }
long factorial(int  r)
{int f,i;
  f=1;
  for(i=1;i<=r;i++)
    f=f*i;
  return f;
    
}

