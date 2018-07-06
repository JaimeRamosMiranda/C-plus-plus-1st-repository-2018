
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
char num[12];
float	si,d,sf; 
int  opc;
//entrada
cout<<"Bienvenido cliente"<<endl;
cout<<"Ingrese su numero de cuenta: "<<endl;
cin>>num;
cout<<"Ingrese saldo anterior de la cuenta: "<<endl;
cin>>si;
cout<<"Elegir el movimiento a realizar: "<<endl;
cout<<"1. Depositar a su cuenta"<<endl;
cout<<"2. Retirar de su cuenta"<<endl;
cout<<"3. Salir"<<endl;
cout<<"Opcion: "<<endl;
cin>>opc;
//proceso  
if(si >=0)  
{

switch(opc){
     case 1:
     	cout<<"Ingrese la cantidad a depositar a su cuenta: "<<endl;
     	cin>>d;
     	sf=si+d;
     	cout<<"Monto de la transaccion   : "<<d<<" soles"<<endl;
     	cout<<"Saldo actual de la cuenta : "<<sf<<" soles"<<endl;
     	break;
     case 2:
     	cout<<"Ingrese la cantidad a retirar de su cuenta: "<<endl;
     	cin>>d;
     	 if (d > si)
     	 {
     		cout<<"No tiene dinero suficiente en su cuenta."<<endl;
		 }
		 else
		     sf=si-d;
			 cout<<"Monto de la transaccion   : "<<d<<" soles"<<endl;
     	     cout<<"Saldo actual de la cuenta : "<<sf<<" soles"<<endl;
     	     break;
     case 3: break;
     default: 
         cout<<"Error al digitar el tipo de movimiento."<<endl;  
}	
}
else
cout<<"Error al ingresar los datos."<<endl;
getche();	
return 0;	
}
