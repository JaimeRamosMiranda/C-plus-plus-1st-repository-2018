/*
9.- Una institución benéfica europea ha recibido tres donaciones en soles, dólares y marcos. 
La donación será repartida en tres rubros: 60% para la implementación de un centro de salud, 30% para un comedor de niños 
y el resto para gastos administrativos. Diseñe un algoritmo que determine el monto en euros que le corresponde a cada rubro. 
Considere que: 1 dólar = 3.52 soles, 1 dólar = 2.08 marcos, 1 dólar = 1.07 euros. 
*/

#include <iostream>
#include <conio.h>
using namespace std;
#define p60 0.6
#define p30 0.3
#define p10 0.1

int main()
{
	//declaracion de variables
	float ds,dd,dm,td,te,salud,comed,adm;
	//entrada
	cout<<"Ingrese la donación en soles"<<endl;
	cin>>ds;
	cout<<"Ingrese la donación en dolares"<<endl;
	cin>>dd;
	cout<<"Ingrese la donación en marcos"<<endl;
	cin>>dm;
	//proceso
	td=(ds/3.52)+dd+(dm/2.08);
	te=td*1.07;
	salud=te*p60;
	comed=te*p30;
	adm=te*p10;
	//salida
	cout<<"El monto que le corresponde al centro de salud : "<<salud<<" euros"<<endl;
	cout<<"El monto que le corresponde al comedor de niños : "<<comed<<" euros"<<endl;
	cout<<"El monto que le corresponde para gastos administrativos : "<<adm<<" euros"<<endl;
	getche();
	return 0;
}
