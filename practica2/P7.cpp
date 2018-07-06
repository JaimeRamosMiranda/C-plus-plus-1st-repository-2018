/*
7.- Escriba  um programa que obtenga  
el cociente y el resíduo de una division 
calculando La cantidad de veces que um numero esta contenido en otro, 
mediante restas sucesivas.
*/

#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{int D,d,c;
 int op;
 for(;;)
 {system("cls");
 cout<<"Ingrse Dividendo ";
 cin>>D;
 cout<<"Ingrse Divisor ";
 cin>>d;
 c=0;
 while(D>=d)
 {c=c+1;
  D=D-d;
}
cout<<"Cociente : "<<c<<endl;
cout<<"Residuo: "<<D<<endl;
getche();
cout<<"para terminar ingrese 0 ";
cin>>op;
if (op==0) break;
}
system("cls");
cout<<"********** fin proceso ************";
system("pause");
return 0;
}
