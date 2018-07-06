/*
7.- Desglosar cierta cantidad de segundos a su equivalente en días, horas, minutos y segundos.
*/

#include <iostream>
#include <conio.h>
using namespace std;
//definiendo constantes
#define nsd 86400
#define nsh 3600
#define nsm 60

int main()
{
	//declaracion
	long cs;
	int d,h,m,s,r;
	cout<<"Ingrese el N° de segundos a desglosar : "<<endl;
	//entrada
	cin>>cs;
	//proceso
	d=cs/nsd;
	r=cs%nsd;
	h=r/nsh;
	r=r%nsh;
	m=r/nsm;
	r=r%nsm;
	s=r;
	//salida
	cout<<cs<<" segundos, equivalen a :"<<endl;
	cout<<d<<" dia(s)"<<endl;
	cout<<h<<" hora(s)"<<endl;
	cout<<m<<" minuto(s)"<<endl;
	cout<<s<<" segundo(s)"<<endl;
	getche ();
	return 0;	
}


