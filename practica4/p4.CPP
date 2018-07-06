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
void fac(int m[],int fa[],int d);

int main()
{int a[max],fac[max],n,m,d,i,f;
 cout<<"Ingrese tamaño del vector a generar"<<endl;
 cin>>n;
 leervector(m,d);
 fac(a,f,n);
 for(i=0;i<n;i++)
 cout<<"factorial de :"<<a[i]<<" es "<<f[i]<<endl;
 getche();
 return 0;     
}   

void leervector(int m[],int d)
{int i;
for(i=0;i<d;i++)
{cout<<"m ["<<(i+1)<<"]="<<endl;
cin>>m[i];
}
}
void fac(int m[],int fa[],int d)
{int j,i,f;
for(i=0;i<d;i++)
	{f=1;
	for(j=1;j<=m[i];j++)
	f=f*j;
	fa[i]=f;
	}
}


