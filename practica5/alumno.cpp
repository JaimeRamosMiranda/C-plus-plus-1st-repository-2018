
#include <iostream>
#include <iomanip> //setw()
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#define max 10
using namespace std;
struct alumno
{int cod;
 char nom[20];
 float ep,ef,pp,pl,prom;
  };
int main()
{alumno alu;
// lectura de datos
     cout<<"codigo;  ";
     cin>>alu.cod;
      cout<<"Nombre;  ";
      fflush(stdin);
      gets(alu.nom);
       do
       {
	     cout<<"Examen Parcial ";
	     cin>>alu.ep;
	   }while(alu.ep<0 ||alu.ep>20);
     do
       {
	     cout<<"Examen Final  ";
	     cin>>alu.ef;
	   }while(alu.ef<0 ||alu.ef>20);
	do
       {
	     cout<<"Promedio de Practicas  ";
	     cin>>alu.pp;
	   }while(alu.pp<0 ||alu.pp>20);
	do
       {
	     cout<<"Promedio de laboratorio ";
	     cin>>alu.pl;
	   }while(alu.pl<0 ||alu.pl>20); 
	   alu.prom=(2*alu.ep+4*alu.ef+alu.pp+alu.pl)/8;     

 // salida
 system("cls");
 cout<<"Datos Ingresados"<<endl<<endl<<endl;
 cout<<setw(10)<<"CODIGO "<<setw(20)<<"  NOMBRES"<<setw(10)<<"E.PARCIAL"<<setw(10)<<"E.FINAL"<<setw(10)<<"P.PRACTICA"<<setw(10)<<"P.LABORAT"<<setw(10)<<"PROMEDIO"<<endl;
  cout<<setw(10)<<alu.cod<<setw(20)<<alu.nom<<setw(10)<<alu.ep<<setw(10)<<alu.ef<<setw(10)<<alu.pp<<setw(10)<<alu.pl<<setw(10)<<alu.prom<<endl;
 
 system("pause");
 return 0;
 }






