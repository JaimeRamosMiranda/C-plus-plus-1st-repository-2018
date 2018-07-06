/*
3.- Mediante funciones calcule el promedio ponderado de un conjunto de datos:
*/

#include <iostream>
#include <conio.h>
using namespace std;
#define dim 100

void leervector(float m[],int d);
float promponderado(float v[], float p[], int d);
int i;
int main()
{system("cls");
	float nota[dim],pesos[dim];
	int n;
	float prom;
	cout<<"Ingrese el tamaño del vector :"<<endl;
	cin>>n;
	cout<<"Ingrese notas :"<<endl;
	leervector(nota, n);
	cout<<"Ingrese pesos :"<<endl;
	leervector(pesos, n);
	prom=promponderado(nota,pesos,n);
	cout<<"Su promedio ponderado es : "<<prom<<endl;
	
	getche();
	return 0;
}

void leervector (float m[],int d)
{
	for(i=0;i<d;i++)
	{cout<<"Ingrese nota : "<<i+1<<endl;
	cin>>m[i];
	}
}

float promponderado(float v[], float p[],int d)
{float sv,sp,pp;
	sv=sp=0;
	for(i=0;i<d;i++)
	{sv=sv+v[i]*p[i];
	sp=sp+p[i];
pp=sv/sp;
}	
	return pp;
	
}





