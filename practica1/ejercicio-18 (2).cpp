//ejercicio 19, practica 1
/*18.- El IMSS requiere clasificar a las personas que se jubilaran en el año de 1997. 
Existen tres tipos de jubilaciones: por edad, por antigüedad joven y por antigüedad adulta. 
Las personas adscritas a la jubilación por edad deben tener 60 años o mas y una antigüedad en su empleo de menos de 25 años. 
Las personas adscritas a la jubilación por antigüedad joven deben tener menos de 60 años y una antigüedad en su empleo de 25 años o más.
Las personas adscritas a la jubilación por antigüedad adulta deben tener 60 años o mas y una antigüedad en su empleo de 25 años o más.
Determinar en que tipo de jubilación, quedara adscrita una persona.
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
	cout<<"Ingresar su edad en años cumplidos :"<<endl;
	cin>>ed;
	cout<<"Ingresar el tiempo de servicios en años :"<<endl;
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

