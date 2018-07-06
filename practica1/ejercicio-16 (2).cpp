/*
16.- A un trabajador le descuentan de su sueldo el 10% si su sueldo es menor o igual a 1000,
por encima de 1000 y hasta 2000 el 5% del adicional, y por encima de 2000 el 3% del adicional.
Calcular el descuento y sueldo neto que recibe el trabajador dado su sueldo.
*/

#include <iostream>
#include <conio.h>
using namespace std;
#define p10 0.10
#define p5  0.05
#define p3  0.03

int main()
{
	//declaracion
	float s,d,sn;
	//entrada
	cout<<"Ingrese el monto del sueldo"<<endl;
	cin>>s;
	//proceso
	if(s>=0)
		{
			if(s<=1000)
				d=s*p10;
			else
				if(s>1000&&s<=2000)
				d=100+(s-1000)*p5;
				
				else d=150+(s-2000)*p3;
				
			sn=s-d;
		cout<<"Mostrando resultados : "<<endl;
		cout<<"Descuento : "<<d<<" soles"<<endl;
		cout<<"Sueldo neto : "<<sn<<" soles"<<endl;			
		}
	else cout<<"El monto indicado no es correcto";
	//salida
}
