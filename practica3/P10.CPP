/*
10.- Escribir un programa que lee por teclado dos números enteros y visualiza su máximo común divisor y su mínimo común múltiplo. 
Para calcular el máximo común divisor de dos números enteros se emplea una función que retorna dicho valor.
*/

#include <stdio.h>
#include <conio.h>
#include<iostream>
using namespace std;
/* Para calcular el maximo comu divisor de dos numeros A y B se utiliza el algoritmo de Euclides.
Este algoritmo esta basado en la siguiente propiedad:
     MCD(A,B)=MCD(B,R)
Donde R es el resto de la division entera de A por B. De esta propiedad se deduce que si el resto R es cero, el MCD es B, caso contrario
se efectua una nueva division hacieno A=B y B=R, y asi en forma iterativa hasta que R=0.*/
       
int mcd(int A,int B)
{int temp;
 while(A%B!=0)
 {temp=A;
  A=B;
  B=temp%B;
}
 
 return B;
}

int main()

 {int n1,n2,m,n;
  cout<<"Ingrese dos numeros enteros : ";
  cin>>n1>>n2;
  m=mcd(n1,n2);
  cout<<"MCD ("<<n1<<","<<n2<<")="<<m<<endl;
  n=n1*n2/mcd(n1,n2);
  cout<<"MCM ("<<n1<<","<<n2<<")="<<n<<endl;
  
  getche();
  return 0;
}
/*Para calcular el minimo comun multiplo se usa el teorema:
       A*B=mcd(A,B)xmcm(A,B)
       luego mcm(A,B)=A*B/mcd(a,b)  */   
