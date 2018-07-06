/*
11.- En todo triangulo se cumple que cada lado es proporcional al seno del ángulo opuesto. 
Esta ley se llama la ley de los senos Matemáticamente.
a/sen(alfa)=b/sen(beta)=c/sen(gamma)
Si se conocen los ángulos alfa, beta y gamma y el lado c. ¿Cuánto valen los otros dos lados? 
*/

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
#define pi 3.14159265

int main()
{
	//declaracion
	float alfa,beta,gamma,a,b,c;
	//entrada
	cout<<"Ingresar los angulos internos del triangulo :"<<endl;
	cin>>alfa>>beta;
	cout<<"Ingresar la medida del lado c :"<<endl;
	cin>>c;
	//proceso
	gamma=180-alfa-beta;
	if(alfa<180 && beta<180 && gamma<180)
	{
		a=sin(alfa*pi/180)*c/sin(gamma*pi/180);
		b=sin(beta*pi/180)*c/sin(gamma*pi/180);
		//salida
		cout<<"La medida del lado a es : "<<a<<" unid"<<endl;
		cout<<"La medida del lado b es : "<<b<<" unid"<<endl;
	}
	else cout<<"Error, la suma de angulos es diferente a 180"<<endl;
	getche();
	return 0;
}
