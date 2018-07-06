/*
15. - El algoritmo de la multiplicación rusa es una forma "distinta" 
de calcular la multiplicación de dos números enteros a x b de la siguiente manera: 
si b es impar acumula a; después a se multiplica por 2 y b se divide entre 2 
y se repite iterativamente el proceso.
	Ejemplo para calcular 65 x 9
		a	b	suna
		-----------------------
		65	9	65
		130	4	65
		260	2	65
		520	1	585
*/

#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{int a,b,s,aa,bb;
  cout<<"INGRESE MULTIPLICANDO : "<<endl;
  cin>>a;
  aa=a;
  cout<<"INGRESE MULTIPLICADOR : "<<endl;
  cin>>b;
  bb=b;
  s=0;
  while(b>0)
  {if(b%2!=0)
      s=s+a;
    a=a*2;
    b=b/2;
  }
  cout<<aa<<" * "<<bb<<" = "<<s<<endl;
  getche();
  return 0;
}    
  
