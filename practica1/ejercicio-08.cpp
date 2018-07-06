/*entrada
tramo1 en kilometros 	t1 real
tramo2 en pies 			t2 real
tramo3 en millas		t3 real

salida
lomgitud en metros
longitud en yardas
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	//declaracion
	float t1,t2,t3,ltm,lty;
	//entrada
	cout<<"Ingrse la longitud en kilometros : "<<endl;
	cin>>t1;
	cout<<"Ingrse la longitud en pies : "<<endl;
	cin>>t2;
	cout<<"Ingrse la longitud en millas : "<<endl;
	cin>>t3;
	//proceso
	ltm=t1/1000+t2/3.28+t3*1609;
	lty=ltm*3.28/3;
	//salida
	cout<<"mostrado longitudes"<<endl<<endl;
	cout<<"longitud total recorrida en metros :"<<endl;
	cout<<" "<<ltm<<" metros"<<endl;
	cout<<"longitud total recorrida en metros :"<<endl;
	cout<<" "<<lty<<" yardas"<<endl;
	getche();
	return 0;
}

/*
Tipos de datos
los tipos de datos mas usados en c++ se presentan aqui:
tipo
algoritmo		c++			rangos						tamaño en bytes
entero			int			-32768 a 32767				2
entero largo	long		-2147483064 a 214748064		4
real			float		-3.4*10^38					4
				double		-3.4^10						8
				longdouble								10
caracter		char		-128 a 127					1		
*/

