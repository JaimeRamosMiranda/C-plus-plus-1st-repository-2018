/*
5.-Escriba una función para calcular el número combinatorio de n objetos tomados de r en r 
*/

#include <iostream>
  #include <stdlib.h> //esta directiva permite el uso de operaciones matemicas
  #include <math.h>
  using namespace std;
  
  int fact(int n);
  int combinatoria(int m, int r);
  int main()
     {int m,r,f;
      cout<<"Ingrese numero de objetos > = 0"<<endl;
      cin>>m;
      cout<<"De cuanto en cuanto > = 0"<<endl;
      cin>>r;      
      f=combinatoria(m,r);
      cout<<"Numero combinatoria  "<<f<<endl;
     
      system("pause");
      return 0;
      }
      
int fact(int n)
{
    int f=1,i;
    for (i=1; i<=n; i++)
      f=f*i;
     return f;
}
int combinatoria(int m, int r)
{int c;
 c=fact(m)/(fact(m-r)*fact(r));
 return c;
}
