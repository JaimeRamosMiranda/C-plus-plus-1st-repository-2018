//inclusion de librerias
#include <iostream>
#include <conio.h>
#include <ctype.h> //toupper()
#include <string.h> //gets()
#define por1 0.1
#define por2 0.05
#define por3 0.15
using namespace std;
int main()
{/*****Inicio de bloque****************
 kkkkkkkkkkkkkkkkk
 kkkkkkkkkkkkk
 kkkkkkkkkk
 lllllllll
 */
 // declaracion de variables e/s
 float monto,mp,d,r;
 char nom[30],tc,tp;
 //DATOS
 cout<<"INGRESE EL Nombre "<<endl;
 gets(nom);
 cout<<"INGRESE Tipo Cliente "<<endl;
 cin>>tc;
 tc=toupper(tc);
 cout<<"INGRESE Tipo de Pago "<<endl;
 cin>>tp;
 tp=toupper(tp);
 cout<<" Ingrese Monto "<<endl;
 cin>>monto;
 //proceso
 if(tc=='E'&&tc=='P'&&tp=='C'&&tp=='P'&&monto>0)
 {
  switch(tp)
   {case 'C': 
          switch(tc)
             {case 'E': d=monto * por1;break;
              case 'P': d=monto * por2;break; 
			 }
			 cout<<"Sr. "<<nom<<"  su descuento es "<<d<<endl;
			 mp=monto-d;break;
	case 'P': 
          switch(tc)
             {case 'E': r=monto * por2;break;
              case 'P': r=monto * por3;break; 
			 }
			 cout<<"Sr. "<<nom<<"  su recargo es "<<r<<endl;
			 mp=monto+r;break;		 
   }
   
 //salida
 cout<<"Sr. "<<nom<<"  su pago es "<<mp<<endl;
    }
 else
   cout<<"Uno de los datos estan errados "<<endl;   
 getche(); // congela la salida
 return 0;
} //fin de bloque

