#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
//variables
float cuota,por,d,mp;
char tc,ins;
cout<<"Ingrese la cuota de su instituto: "<<endl;
cin>>cuota;
cout<<"Ingrese el tipo de colegio: <N(Nacional) o P(particular)> : "<<endl;
cin>>tc;
tc=toupper(tc);
cout<<"Ingrese el instituto <A(Instituto A);B(Instituto B);C(Instituto C)> : "<<endl;
cin>>ins;
ins=toupper(ins);
//proceso
if( (ins=='A' || ins=='B' || ins=='C')  && (tc=='N' || tc=='P') && cuota > 0)
{

    switch(ins)
    {
     case 'A': switch(tc)
     			 { case 'N' : por=0.5 ;break;
				   case 'P' : por=0.25 ;break;
				  } break;
     
	 case 'B': switch(tc)
     			 { case 'N' : por=0.4 ;break;
				   case 'P' : por=0.29 ;break;
				  } break;
				  
	 case 'C': switch(tc)
     			 { case 'N' : por=0.3 ;break;
				   case 'P' : por=0.15 ;break;
				  } break;
	}
    d=por*cuota;
    mp=cuota-d;
    cout<<"Su cuota es: "<<cuota<<" soles"<<endl;
	cout<<"Su descuento es: "<<d<<" soles"<<endl;
	cout<<"El monto a pagar es : "<<mp<<" soles"<<endl;
}
else
cout<<"Error al ingresar los datos"<<endl;
    
getche();
return 0;
}
