#include<string.h>
#include<iostream.h>
#include<iomanip.h>
#include<stdio.h>
#include<conio.h>
struct direccion
 {
   char calle[25];
   int numero;
   char nombre[30];
};
int main()
{
 direccion d, *p; /* se declara d */
p=&d; /* p contiene la direccion del primer byte de d */
cout<<" Ingrese Calle ";
gets(p->calle);
cout<<"Ingrese Numero ";
cin>>p->numero;
cout<<"Ingrese su Nombre : ";
fflush(stdin);
gets(p->nombre);
system("cls");
cout<<endl<<endl;
cout<<setw(20)<<"Calle"<<setw(10)<<"Numero"<<setw(20)<<"Nombres"<<endl;
cout<<setw(20)<<p->calle<<setw(10)<<p->numero<<setw(20)<<p->nombre<<endl;
//system("pause");
getche();

return 0;
}
