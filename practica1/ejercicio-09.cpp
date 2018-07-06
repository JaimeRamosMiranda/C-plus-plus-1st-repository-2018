/*
9.- Una instituci�n ben�fica europea ha recibido tres donaciones en soles, d�lares y marcos. 
La donaci�n ser� repartida en tres rubros: 60% para la implementaci�n de un centro de salud, 30% para un comedor de ni�os 
y el resto para gastos administrativos. Dise�e un algoritmo que determine el monto en euros que le corresponde a cada rubro. 
Considere que: 1 d�lar = 3.52 soles, 1 d�lar = 2.08 marcos, 1 d�lar = 1.07 euros. 
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
	cout<<"Ingrese la donaci�n en soles"<<endl;
	cin>>ds;
	cout<<"Ingrese la donaci�n en dolares"<<endl;
	cin>>dd;
	cout<<"Ingrese la donaci�n en marcos"<<endl;
	cin>>dm;
	//proceso
	td=(ds/3.52)+dd+(dm/2.08);
	te=td*1.07;
	salud=te*p60;
	comed=te*p30;
	adm=te*p10;
	//salida
	cout<<"El monto que le corresponde al centro de salud : "<<salud<<" euros"<<endl;
	cout<<"El monto que le corresponde al comedor de ni�os : "<<comed<<" euros"<<endl;
	cout<<"El monto que le corresponde para gastos administrativos : "<<adm<<" euros"<<endl;
	getche();
	return 0;
}
