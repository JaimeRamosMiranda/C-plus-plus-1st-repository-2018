/*ejercicio 26
26.- Una librería tiene dos tipos de clientes. Estudiantes (E) y público en general (P).
Además ofrece dos tipos de pago. Contado (C) y Plazos (P). 
Se pide escribir un programa que pida el ingreso de: 
El nombre del cliente, el tipo de cliente, la forma de pago y el monto de pago. 
Dependiendo del tipo de pago va a existir un descuento o un recargo 
tal como se muestra en el siguiente cuadro:
	Tipo	Contado ©		Plazos (P)
			Descuento		Recargo
	Estudiante	     10%		   5%
	Publico g.	     5%		 	   15%	

//constantes
p1 0.1
p2 0.15
p3 0.05
//declaracion
tipo de cliente tc 	char 'E' o 'P'
forma de pago	fp 	char 'C' o 'P'
monto de pago 	monto 	real
//salida
monto de pago 	mp 	real
descuento		d	real
recargo			r	real
toupper convierte a mayusculas
*/

#include <iostream>
#include <conio.h>
using namespace std;

#define p10 0.1
#define p15	0.15
#define p5	0.05

int main()
{
	float monto,d,r,mp;
	char nom[30],tc,fp;
	//datos
	cout<<"Ingrese nombre del cliente :"<<endl;
	cin>>nom;
	cout<<"Ingrese el monto de la cuota :"<<endl;
	cin>>monto;
	cout<<"Ingrese forma de pago [C] contado, [P] plazos:"<<endl;
	cin>>fp;
	fp=toupper(fp);
	cout<<"Ingrese tipo de cliente [E] estudiante, [P] publico:"<<endl;
	cin>>tc;
	tc=toupper(tc);
	//proceso
	if((fp=='C' || fp=='P') && (tc=='E' || tc=='P') && monto>0)
		switch(fp)
		{
			case 'C': switch(tc)
						{case 'E': d=p10*monto;break;
						 case 'P': d=p5*monto;break;
						}
					mp=monto-d;
					cout<<"Sr. "<<nom<<" su descuento es :"<<d<<endl;
					cout<<"Monto a pagar es :"<<mp<<endl;
					break;
			case 'P': switch(tc)
						{case 'E': r=p5*monto;break;
						 case 'P': r=p15*monto;break;
						}
					mp=monto+r;
					cout<<"Sr. "<<nom<<" su recargo es :"<<r<<endl;
					cout<<"Monto a pagar es :"<<mp<<endl;
					break;
		}
	else
		cout<<"Error al ingresar los datos"<<endl;
cout<<"========FIN PROCESO========"<<endl;
}
