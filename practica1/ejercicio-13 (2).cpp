/*
13.- Si compramos al por mayor 100 o más artículos nos descuentan el 40%,
si compramos entre 25 y 100 nos descuentan un 20%, 
y si compramos entre 10 y 25 un 10%. 
No hay descuento si adquirimos menos de 10 artículos. 
Escribir un pseudocódigo para mostrar el monto de la compra, el descuento y el monto a pagar por nuestra compra.
*/
#include <iostream>
#include <conio.h>
using namespace std;
#define p40 0.40
#define p20 0.20
#define p10 0.10

int main()
{
	//DECLARACION
	int na;
	float precio, mc,d,mt;
	//DATOS
	cout<<"Ingrese el numero de articulos "<<endl;
	cin>>na;
	cout<<"Ingrese el precio "<<endl;
	cin>>precio;
	
	//proceso
	if(na>0 && precio>0)
		{mc=na*precio;
		if(mc>=100)
		d=mc*p40;
		else
			if(na>=25 && na<100)
				d=mc*p20;
			else
				if(na>=10 && na<25)
					d=mc*p10;
				else
					d=0;
		mt=mc-d;
	cout<<"Monto de la compra : "<<mc<<" Soles "<<endl;
	cout<<"Monto del descuento : "<<d<<" Soles "<<endl;
	cout<<"Monto a pagar : "<<mt<<" Soles "<<endl;
		}
	else cout<<"DATO ERRADO"<<endl;
	getche();
	return 0;
}
