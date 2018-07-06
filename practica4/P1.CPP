/*
1.- Introducir una Lista de N elementos numéricos positivos en un vector, luego desarrolle 
	1.	Ingreso
	2.	Listado
	3.	Media Aritmética
	4.	Media Armónico
	5.	Varianza	
	6.	Desviación Estándar
	7.	Media Geométrica
	8.	Salir

*/

#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#define dim 10
using namespace std;

int i,j,op;
int menu()
{
cout<<"Menu principal"<<endl;
cout<<"[1]: Ingreso de datos"<<endl;
cout<<"[2]: Reporte de datos"<<endl;
cout<<"[3]: Media aritmetica"<<endl ;
cout<<"[4]: Media armonica"<<endl ;
cout<<"[5]: Varianza "<<endl ;
cout<<"[6]: Desviacion estandar"<<endl;
cout<<"[7]: Salir"<<endl;

do
 {
  cout<<"Digite opcion[ ]"<<"\b\b";
  cin>>op;
}while(op<1 || op > 7);
return op;
}
void ingreso(int m[],int n)
{
cout<<"Ingreso del vector A:"<<endl;
for (i=0;i<n;i++)
{cout<<"Elemento"<<i+1<<":";
cin>>m[i];
}
}
void listado(int m[],int n)
{
cout<<"Listado del vector A:"<<endl;
for (i=0;i<n;i++)
cout<<m[i]<<"\t";
getche(); 

}
float media(int m[],int n)
{
 float me,s;
 s=0;
for (i=0; i<n;i++)
{s=s+m[i];}
me=s/n;
return me;
}
float mediaarmonica(int m[],int n)
{
 float ma,s;
 s=0;
for (i=0; i<n;i++)
{s=s+1./m[i];}
ma=n/s;
return ma;
}
float varianza(int m[],int n)
{
 float va,s,me;
 s=0;
 me=media(m,n);
for (i=0; i<n;i++)
    s=s+(m[i]-me)*(m[i]-me);
va=s/n;
return va;
}
//desviacion estandar
float desvstd(int m[], int n)
{
	float ds,s,me;
	s=0;
	me=media(m,n);
	for(i=0;i<=n;i++)
	s=s+(m[i]-me)*(m[i]-me);
	ds=sqrt(s/n);
	return ds;
}

int main ()
{int a[dim]; 
float me,mo,di,de,mg,n,ma,va,ds;
cout<<"Ingese el orden del arreglo : "<<endl;
cin>>n;
do{system ("cls");
    op=menu();
    switch(op)
      {system ("cls");
       case 1:
       ingreso(a,n);break;
        case 2:
        listado(a,n);break;
        case 3:
         me=media(a,n);
         cout<<"Media aritmetica: "<<me<<endl;
         getch();break;
        case 4: 
        ma=mediaarmonica(a,n);
        cout<<"Media armonica: "<<ma<<endl;
        getche();break;
        case 5:
        va=varianza(a,n);
        cout<<"Varianza : "<<va<<endl;
        case 6: ds=desvstd(a,n);
        		cout<<"Desviacion estandar : "<<ds<<endl;
        getche();break;
       }
} while(op!=7);
system ("cls");
cout<<"******* GRACIAS POR USAR ESTE PROGRAMA *******"<<endl;
getche();
}
