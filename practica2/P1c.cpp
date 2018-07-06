/*
1.- Determinar la cantidad de dígitos que tiene un número entero y 
además mostrar la suma de los dígitos pares e impares. 
Considerar al cero (0) como digito par.
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{int num,dig,sp,si,cdig;
 cout<<"Ingrese un numero entero :"<<endl;
 cin>>num;
 sp=si=cdig=0;
 while(num>0)
 {dig=num%10;
  if(dig%2==0)
    sp=sp+dig;
    else
    si=si+dig;
    cdig=cdig+1;
    num=num/10;
}  
cout<<"NUMERO DE DIGITOS : "<<cdig<<endl;
cout<<"SUMA PARES        : "<<sp<<endl;
cout<<"SUMA IMPARES      : "<<si<<endl;
getche();
return 0;
}
