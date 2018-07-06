
#include <iostream>
#include <conio.h>
#define de 0.1
#define re 0.05
#define dp 0.05
#define rp 0.15
using namespace std;
int main()
{
//variables
char nombre[70];
char cliente;
char pago;
float monto, descuento, recargo, mf;
//entradas
cout<<"Ingrese su nombre: "<<endl;
cin>>nombre;
cout<<"Digite la letra 'E' si es un estudiante o 'P' si es publico en general: "<<endl;
cin>>cliente;
cout<<"Digite la letra 'C' si el pago lo realizara al contado o 'P' si es a plazos: "<<endl;
cin>>pago;
cout<<"Ingrese el monto a pagar: "<<endl;
cin>>monto;
//proceso	

if( (cliente=='E' || cliente=='P') && (pago=='C' || pago=='P') && monto > 0)
{
	
	if(cliente=='E' && pago=='C')
	{
		descuento= de*monto;
		mf=monto-descuento;
		cout<<"Monto a pagar: "<<mf<<" soles"<<endl;
		
	}
	
	else 
	if( cliente=='E' && pago=='P')
	{
	    recargo= re*monto;
		mf=monto+recargo;
		cout<<"Monto a pagar: "<<mf<<" soles"<<endl;	
		
	}
		
	if(cliente=='P' && pago=='C')
	{
		descuento= dp*monto;
		mf=monto-descuento;
		cout<<"Monto a pagar: "<<mf<<" soles"<<endl;
	}
		
    if(cliente=='P' && pago=='P')
	{
		recargo= rp*monto;
		mf=monto+recargo;
		cout<<"Monto a pagar: "<<monto<<" soles"<<endl;
		cout<<"Monto final a pagar: "<<mf<<" soles"<<endl;
	}
    
}

else
cout<<"Error al ingresar los datos"<<endl;



getche();	
return 0;	
}
