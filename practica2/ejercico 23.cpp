/*
23.- La compañía de luz "Del Centro" desea imprimir los recibos de un grupo de empleados. 
Desea obtener también el total de cobros del periodo. 
Por cada cliente se ingresa su nombre, dirección, registro inicial y registro final. 
El cobro se efectúa en base a la  siguiente tabla: 	
140 KVH o Menos 			( S/. 3.20 	
Los siguientes 170 KVH		( S/. 0.15 por KVH 	
Exceso sobre 310 KVH		( S/. 0.097 por KVH 
Por cada cliente 
se debe imprimir un recibo indicando sus datos y montos. 
*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
#define TM 30
int main()
{
	char nombre[TM], direccion[TM];
	float regini, regfin, registro, cobro;
	
	cout<<"\t\tCompañía Luz del Sur"<<endl;
	cout<<"Ingrese su nombre"<<endl;
	cin>>nombre;
	cout<<"Ingrese su direccion"<<endl;
	cin>>direccion;
	do
	{cout<<"Ingrese su registro inicial en KVH"<<endl;
	cin>>regini;
	}while(regini<0);
	
	do
	{cout<<"Ingrese su registro final en KVH"<<endl;
	cin>>regfin;
	}while(regini<0 && regini<regfin);
	
	registro=regfin-regini;
	
	if(registro<=140)
		cobro=registro*3.2;
	else
		if(registro<=310)
			cobro=140*3.2+(registro-140)*0.15;
			else
			cobro=140*3.2+170*0.15+(registro-310)*0.097;
	cout<<"Cliente :"<<nombre<<endl;
	cout<<"Su consumo fue de :"<<registro<<"KVH"<<endl;
	cout<<"El monto del cobro correspondiente es: "<<cobro<<" soles"<<endl;
		
	getche();
	return 0;	
}

