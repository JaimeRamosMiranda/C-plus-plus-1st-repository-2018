/*
20.- Calcular la nota media por alumnos de una clase de m alumnos. 
Cada alumno podrá tener un numero n de notas distinto.
*/

#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{int m,i,j,n;
  float nota,pro,suma;
  system ("cls");
  cout<<"Ingrese numro de alumnos ";
  cin>>m;
  for(i=1;i<=m;i++)
  {//system ("cls");
    suma=0;
   cout<<"Ingrese numero de notas del alumno "<<i<<endl;
    cin>>n;
   for(j=1;j<=n;j++)
    {cout<<"\nIngrese la nota "<<j<<endl;
     cin>>nota;
     cout<<"\t\t\t\t\t"<<nota<<"  ";
     suma=suma+nota;
     }
     pro=suma/n;
     cout<<"\n\t\t\t  Promedio. "<<pro<<endl;
     getche();
  }
getche();
return 0;
}     
                       
