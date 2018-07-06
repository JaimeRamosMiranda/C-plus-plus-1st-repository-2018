/*
8.- Escribir una función que permita convertir un número decimal a binario.
*/

#include<conio.h>
#include<iostream>
using namespace std;

long binario(int n);
int main()
{
int num;
long b;
do
{
 cout<<"ingrese numero entero: ";
  cin>>num;
}while(num<1);
b=binario(num);
cout<<"Binario: "<<b;
getche();
return 0;
}

long binario(int n)
{long bin=0,pot10=1;
  int r;
do{
	r = n%2;
	bin = bin+ r*pot10;
	pot10 = pot10*10;
	n =n/2;
}while(n>0);
return bin;
}
