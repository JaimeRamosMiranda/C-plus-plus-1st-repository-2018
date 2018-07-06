/*
En una  farmacia, después de realizar un inventario. En un array InvAct se guardan  
las unidades de medicinas (250 productos dSIerentes) que existen actualmente. 
En otro array StockMin se tiene la cantidad mínima de unidades de medicamentos (stockMin)
 que debe poseer la farmacia para atender a la demanda de sus clientes. Hacer un algoritmo
  que me permita determinar y mostrar que medicamentos requieren pedir y cuanto para 
  tener por lo menos el stock minimo 
*/

#include <iostream>
#include <conio.h>
#define dim 100
using namespace std;
void ingreson();
void ingresovec(char nom[][dim], int vec1[ ],int vec2[ ], int d);
void chequeo(char nom[][dim],int vec1[ ],int vec2[ ], int d);
int n;
int main()
{
int InvAct[dim], StockMin[dim];
char producto[dim][dim];

ingreson();
ingresovec(producto, InvAct, StockMin, n);
chequeo( producto, InvAct, StockMin, n);
	
getche();
return 0;	
}

void ingreson()
{
	cout<<"Ingrese el numero de las diferentes unidades de medicina: "<<endl;
	cin>>n;
}
void ingresovec(char nom[][dim],int vec1[ ],int vec2[ ], int d)
{

	for(int i=0; i<d;i++)
	{
		fflush(stdin);
		cout<<"Ingrese el nombre del producto numero " << i+1<<": "<<endl;
		cin.getline(nom[i],dim,'\n');
		
		do{
		 cout<<"Ingrese el numero actual de unidades del producto numero "<<i+1<<":"<<endl;
		 cin>>vec1[i];
		}while(vec1[i]<0);
	  
	   do{
		 cout<<"Ingrese el numero minimo requerido de unidades del producto numero "<<i+1<<":"<<endl;
		 cin>>vec2[i];
		}while(vec2[i]<0);
		
	}
}
void chequeo(char nom[][dim],int vec1[ ],int vec2[ ], int d)
{
	for(int i=0; i<d;i++)
	{
		if( vec1[i]<vec2[i])
		{
			cout<<"Producto numero "<<i+1<<": Se necesitan "<<vec2[i]-vec1[i]<<" unidad(es) de la medicina "<<nom[i]<<" para llegar al minimo requerido de stock"<<endl;
		}
	}
	
}



