//ejercicio 26, practica 1
/*26.- Una librería tiene dos tipos de clientes. Estudiantes (E) y público en general (P).
Además ofrece dos tipos de pago. Contado (C) y Plazos (P). 
Se pide escribir un programa que pida el ingreso de: 
El nombre del cliente, el tipo de cliente, la forma de pago y el monto de pago. 
Dependiendo del tipo de pago va a existir un descuento o un recargo tal como se muestra en el siguiente cuadro:
	Tipo	Contado ©		Plazos (P)
			Descuento		Recargo
	Estudiante	     10%		   5%
	Publico g.	     5%		 	   15%	
*/

#include <iostream>
#include <conio.h>
using namespace std;
#define d1 "descuento del 10%"
#define d2 "descuento del 5%"
#define r1 "recargo del 10%"
#define r2 "recargo del 15%"

int main()
{
	//declaracion
	int tp,fp;
	//entrada
	cout<<"Ingresar el tipo de cliente :"<<endl<<"[1]: Estudiante"<<endl<<"[2]: Publico en general"<<endl;
	cin>>tp;
	cout<<"Ingresar forma de pago : "<<endl<<"[1]: Al contado"<<endl<<"[2]: A plazos"<<endl;
	cin>>fp;
	//proceso
	if((tp!=1 && tp!=2)||(fp!=1 && fp!=2))
		cout<<"Tipo de dato ingresado incorrecto";
	else{
		if(tp==1)
			{if(fp==1)
				cout<<"Usted tiene un "<<d1<<endl;
			else{if(fp==2)
				cout<<"Usted tiene un "<<r1<<endl;
				else cout<<"Tipo de forma de pago incorrecto";
				}
			}
		else{if(tp==2)
				{if(fp==1)
					cout<<"Usted tiene un "<<d2<<endl;
				else{if(fp==2)
					cout<<"Usted tiene un "<<r2<<endl;
					else cout<<"Tipo de forma de pago incorrecto";
					}
				}
			}
		}
	//salida
	getche();
	return 0;
}
