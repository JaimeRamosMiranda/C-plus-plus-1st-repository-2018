//practica 1, ejercicio 17:
/*17.- Calcular la utilidad que un trabajador recibe en el reparto anual de utilidades
 si este se le asigna como un porcentaje de su salario mensual que depende de su antigüedad en la empresa de acuerdo con la sig. tabla:
Tiempo Utilidad
Menos de 1 año 5 % del salario
1 año o mas y menos de 2 años 7% del salario
2 años o mas y menos de 5 años 10% del salario
5 años o mas y menos de 10 años 15% del salario
10 años o mas 20% del salario
*/

#include <iostream>
#include <conio.h>
using namespace std;
#define p1 0.05
#define p2 0.07
#define p3 0.10
#define p4 0.15
#define p5 0.20

int main()
{
	//declaracion
	float sm,ut,st;
	int t;
	//entrada
	cout<<"Ingrese el monto del sueldo mensual :"<<endl;
	cin>>sm;
	cout<<"Ingrese el tiempo de servicios en meses :"<<endl;
	cin>>t;
	//proceso
	if(sm>=0 && t>=0)
		{if (t<12)
			ut=sm*p1;
		else{
			if (t<24)
				ut=sm*p2;
			else{
				if (t<60)
					ut=sm*p3;
				else{
					if(t<120)
						ut=sm*p4;
					else{
						ut=sm*p5;
						}
					}
				}
			}
		st=sm+ut;
		cout<<"Mostrando sueldo total segun el tiempo de servicios"<<endl;
		cout<<"Sueldo total : "<<st<<" soles"<<endl;
		cout<<"***FIN DEL PROGRAMA***";
		}
	else	cout<<"Monto o tiempo incorrecto(s)"<<endl;
	//salida
	
	getche();
	return 0;
}
