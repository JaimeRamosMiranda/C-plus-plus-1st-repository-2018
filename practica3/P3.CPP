/*
3.- Escriba una función para evaluar si un número es primo o no.
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int primo(int n);
int main ()
{int n,p;  //cuando las funciones retornan, se genera variables es main que recojan esos valores
  cout<<"Ingrese un numero entero "<<endl;
  cin>>n;
  p=primo(n);
  if (p==1)
      cout<<n<< "  es primo "<<endl;
   else
      cout<<n<<" No es primo"<<endl;
  system("pause");
  return 0;
}       


int primo(int n)
 {int pri,i;
   pri=1;
   for(i=2;i<n;i++)
   if ((n%i==0)&& (n>2))
          pri=0;
   return pri; //en cada funcion que retorne es necesario colocar return al final
}

