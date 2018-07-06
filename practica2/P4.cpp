/*
4.- Escribir un  pseudocódigo y el correspondiente programa en C++ que, 
al recibir como dato un entero positivo, escriba todos los números perfectos que hay entre  1 y el número dado, 
y que además imprima la cantidad de números perfectos que hay en el intervalo. 
Un número se considera perfecto si la suma de todos sus divisores es igual al propio número.   
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{int i,j,num,c,suma;
 
 cout<<"Ingrese un numero entero : "<<endl;
 cin>>num;
 c=0;
 for(i=1;i<=num;i++)
 {suma=0;
  for(j=1;j<=(i/2);j++)//j es el divisor, i es el número entero positivo
      if((i%j)==0)
         suma=suma+j;
            
     if(suma==i)
       {cout<<i<<"\t";
        c=c+1;
        }
}           
cout<<endl;    
cout<<"Entre 1 y "<<num<<" hay "<<c<<" numeros perfectos "<<endl;
getche();
return 0;
}
