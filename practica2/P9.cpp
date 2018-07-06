/*
9.- Escribir un algoritmo para calcular la sumatoria de: 2! + 4! +6! + 8! + ……..
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{int i,j,n,s,f;

s=0;
do
{
  cout<<" Ingrese numero de terminos  > 0:  ";
  cin >>n;
}while(n<1); 
for(i=1;i<=2*n;i=i+2)
 { f=1;
  
      cout<<i<<"!";
       if(i<2*n)
          cout<<" + "<<"\t";
  for (j=1;j<=i;j++)
       f=f*j;
    s=s+f;
 }          
 
cout<<" = "<<s<<endl;     
getche();

}   
  
