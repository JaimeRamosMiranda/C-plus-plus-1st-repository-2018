/*
4.- Escribir un  pseudoc�digo y el correspondiente programa en C++ que, 
al recibir como dato un entero positivo, escriba todos los n�meros perfectos que hay entre  1 y el n�mero dado, 
y que adem�s imprima la cantidad de n�meros perfectos que hay en el intervalo. 
Un n�mero se considera perfecto si la suma de todos sus divisores es igual al propio n�mero.   
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
  for(j=1;j<=(i/2);j++)//j es el divisor, i es el n�mero entero positivo
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
