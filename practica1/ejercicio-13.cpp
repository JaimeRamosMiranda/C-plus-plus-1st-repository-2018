//inclusion de librerias
#include <iostream>
#include <conio.h>
#define por1 0.4
#define por2 0.2
#define por3 0.1
using namespace std;
int main()
{/*****Inicio de bloque****************
 kkkkkkkkkkkkkkkkk
 kkkkkkkkkkkkk
 kkkkkkkkkk
 lllllllll
 */
 // declaracion de variables e/s
 float mc,d,mp,pa;
 int na;
 //DATOS
 cout<<"INGRESE EL NUMERO DE ARTICULOS :"<<endl;
 cin>>na;
 cout<<"INGRESE EL PRECIO POR ARTICULO :"<<endl;
 cin>>pa;
 
 //proceso
 
 if(na>0&&pa>0)
 {mc=na*pa;
  if(na>=100)
     d=por1*mc;
     
  else
     if(na>=25&&na<100)
        d=por2*mc;
     else
	    if(na>=10&&na<25) 
		   d=por3*mc;
		else
		    d=0;
  mp=mc-d;		    
			     
 //salida
 cout<<"Numero de Articulos  =====> "<<na<<"   unidades "<<endl;   
 cout<<"Prtesio X articulo   =====> "<<pa<<"   Soles "<<endl;
 cout<<"Monto de la Compra   =====> "<<mc<<"   Soles "<<endl;
 cout<<"Monto del Descuento  =====> "<<d<<"    Soles "<<endl;
  cout<<"Monto a Pagar       =====> "<<mp<<"   Soles "<<endl;
  }
  else
    cout<<"Dato Errado !!!!!!!!!!!!!"<<endl;
 getche(); // congela la salida
 return 0;
} //fin de bloque

