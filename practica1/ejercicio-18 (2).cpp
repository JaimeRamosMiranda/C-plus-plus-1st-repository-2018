//ejercicio 19, practica 1
/*18.- El IMSS requiere clasificar a las personas que se jubilaran en el a�o de 1997. 
Existen tres tipos de jubilaciones: por edad, por antig�edad joven y por antig�edad adulta. 
Las personas adscritas a la jubilaci�n por edad deben tener 60 a�os o mas y una antig�edad en su empleo de menos de 25 a�os. 
Las personas adscritas a la jubilaci�n por antig�edad joven deben tener menos de 60 a�os y una antig�edad en su empleo de 25 a�os o m�s.
Las personas adscritas a la jubilaci�n por antig�edad adulta deben tener 60 a�os o mas y una antig�edad en su empleo de 25 a�os o m�s.
Determinar en que tipo de jubilaci�n, quedara adscrita una persona.
*/

#include <iostream>
#include <conio.h>
using namespace std;
#define j1 "Jubilacion por edad"
#define j2 "Jubilacion por antiguedad joven"
#define j3 "Jubilacion por antiguedad adulto"

int main()
{
	//declaracion
	int ed,ant;
	//entrada
	cout<<"Ingresar su edad en a�os cumplidos :"<<endl;
	cin>>ed;
	cout<<"Ingresar el tiempo de servicios en a�os :"<<endl;
	cin>>ant;
	//proceso y salida
	if(ed>=0 && ant>=0)
		{if(ed>=60)
			if(ant<25)
				cout<<"Estado : "<<j1<<endl;
			else cout<<"Estado : "<<j3<<endl;
		else{if(ant>=25)
				cout<<"Estado : "<<j2<<endl;
			else cout<<"Estado : "<<"No corresponde jubilacion";
			}
	}
	else cout<<"Edad o tiempo de servicio incorrecto(s)";
	getche();
	return 0;
}

