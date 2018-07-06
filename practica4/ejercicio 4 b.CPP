/*
4.- Leer una secuencia de  N números enteros y 
almacene en un vector sus factoriales y mostrar el número y su respectivo factorial.
*/

#include<conio.h>
#include<iostream>
#include<iomanip>
#define max 10
using namespace std;

void leervector(int m[],int d);
void factorial(int m[],int fac[],int d);

int main()
{int a[max],fac[max],n,i;
 cout<<"Ingrese tamaño del vector a generar"<<endl;
 cin>>n;
 leervector(a,n);
 factorial(a,fac,n);
 for(i=0;i<n;i++)
 cout<<"factorial de :"<<a[i]<<" es "<<fac[i]<<endl;
 getche();
 return 0;     
}   

void leervector(int m[],int d)
{int i,m[],d;
for(i=0;i<d;i++)
{cout<<"m ["<<(i+1)<<"]="<<endl;
cin>>m[i];
}
}
void fac(int m[],int fa[],int d)
{int j,i,f,fa[],d;
for(i=0;i<d;i++)
	{f=1;
	for(j=1;j<=m[i];j++)
	f=f*j;
	fa[i]=f;
	}
}


