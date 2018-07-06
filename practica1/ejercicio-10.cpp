/*
10.- Dado un tiempo expresado en HH:MM y otro tiempo en MM: SS, 
diseñe un programa que calcule la suma de los tiempos y lo exprese en HH:MM:SS.
*/

#include <iostream>
#include <conio.h>
using namespace std;

#define nsh 3600
#define nsm 60

int main()
{
	//declaracion
	int h1,m1,t1,m2,s2,t2,r,h,m,s;
	//entrada
	cout<<"Ingresar el tiempo 1 en el formato HH:MM :"<<endl;
	cin>>h1>>m1;
	cout<<"Ingresar el tiempo 2 en el formato MM:SS :"<<endl;
	cin>>m2>>s2;
	//proceso
	t1=h1*nsh+m1*nsm;
	t2=m2*nsm+s2;
	h=(t1+t2)/nsh;
	r=(t1+t2)%nsh;
	m=r/nsm;
	r=r%nsm;
	s=r;
	//salida
	cout<<"Expresando la suma del tiempo 1 y 2 en el formato HH:MM:SS, es: "<<endl;
	cout<<h<<":"<<m<<":"<<s<<endl;
	getche();
	return 0;
}
