/*
7.- Escribir una función que permita hallar el valor de X^n, siendo X un número real  y n un entero.
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

float pot(float x, int n);
int main()
{float x,r;
  int n;
  cout<<"ingrese la base : "<<endl;
  cin>>x;
  cout<<"ingrese exponente :"<<endl;
  cin>>n;
  r=pot(x,n);
  cout<<x<<" elevado a "<<n<<" = "<<r<<endl;
  system("pause");
  return 0;
}

float pot(float x, int n)
{
 int i,p;
 p=1;
 for(i=1;i<=abs(n);i++)
   p=p*x;
 if(n<0)
  return (1/p);
  else
  return p;
}  

