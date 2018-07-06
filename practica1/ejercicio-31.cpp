#include <iostream>
#include <conio.h>
#define p5 0.05
#define p10 0.1
#define p15 0.15
using namespace std;
int main()
{
//variables
float i,monto, mt, mpl;
char t;
int l;

cout<<"Ingrese el monto de la venta a financiar: "<<endl;
cin>>monto;
cout<<"Ingrese el numero de letras a pagar: "<<endl;
cin>>l;
cout<<"Ingrese el de tarjeta <A(tarjeta A);B(tarjeta B);C(tarjeta C)> : "<<endl;
cin>>t;
t=toupper(t);
//proceso
if( (t=='A' || t=='B' || t=='C') && (l>0 && l<=12) && monto > 0)
{

    switch(t)
    {
     case 'A': switch(l)
     			 { case 1 : 
				   case 2 : 
				   case 3 : 
				   case 4 : 
				   case 5 : 
				   case 6 : 
				   case 7 : 
				   case 8 : 
				   case 9 : 
				   case 10 : 
				   case 11 : 
				   case 12 : {
				              i=p5*monto ;
				              mt=monto+i;
                              mpl=mt/l;
                              cout<<"Su interes es: "<<i<<" soles"<<endl;
	                          cout<<"El monto total a pagar es : "<<mt<<" soles"<<endl;
	                          cout<<"El monto a pagar por letra es : "<<mpl<<" soles"<<endl;break;}   
				  } break;
     
	 case 'B': switch(l)
     			 { case 1 : 
				   case 2 : 
				   case 3 : 
				   case 4 : 
				   case 5 : 
				   case 6 : 
				   case 7 : 
				   case 8 : {
				              i=p10*monto ;
				              mt=monto+i;
                              mpl=mt/l;
                              cout<<"Su interes es: "<<i<<" soles"<<endl;
	                          cout<<"El monto total a pagar es : "<<mt<<" soles"<<endl;
	                          cout<<"El monto a pagar por letra es : "<<mpl<<" soles"<<endl;break;}   
				   
				   default: {
					cout<<"Numero de letras ingresado mayor al maximo permitido(8 letras)."<<endl;
				   break; } 
				  } break;
     
	 case 'C': switch(l)
     			 { case 1 : 
				   case 2 : 
				   case 3 : 
				   case 4 : 
				   case 5 : 
				   case 6 : {
				              i=p15*monto ;
				              mt=monto+i;
                              mpl=mt/l;
                              cout<<"Su interes es: "<<i<<" soles"<<endl;
	                          cout<<"El monto total a pagar es : "<<mt<<" soles"<<endl;
	                          cout<<"El monto a pagar por letra es : "<<mpl<<" soles"<<endl;break;}   
					default: {
					cout<<"Numero de letras ingresado mayor al maximo permitido(6 letras)."<<endl;
				    break; 
				     }    
				  } break;
     
	}
    
}
else
cout<<"Error al ingresar los datos"<<endl;
    
getche();
return 0;
}
