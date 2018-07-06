/*
15.- Diseñar un programa que presente el siguiente menú:

			MOVIMIENTO BANCARIO
 		[1] : Ingreso
		[2] : Deposito
		[3] : Retiro
		[4] : Reporte
		[5] : Salir
Que permita simular el movimiento de una cuenta bancaria.

*/

#include <iostream>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
using namespace std;

void menu();
float leermonto(float &sa);
void retiro(float &sa);
void ingreso();
void reporte();

int main()
{
	float si,sa,sret,sing,monto;
	int retiros = 0, ingresos = 0;
	int mov;
	leermonto(sa);
	menu();
}



// DEsarrollo de las funciones 
void menu()
{int mov,op;
float sa;

system("cls");
 cout<<"\t\t\t MOVIMIENTO DE CUENTA BANCARIA "<<endl;
 cout<<"\t\t\t ****************************** "<<endl;
 cout<<"\t [1]: Ingreso"<<endl;
 cout<<"\t [2]: Retiro"<<endl;
 cout<<"\t [3]: Reporte"<<endl;
 cout<<"\t [4]: Salir"<<endl;
 do
   {
    cout<<"\t\t\t Ingrese una Opcion [ ] "<<"\b\b\b";
    cin>>mov;
  }while(mov<1 || mov>4);
  
	switch(mov)
	{case 1:ingreso();
			break;
	case 2: retiro(sa);
			break;
	case 3: reporte();
			break;
	case 4: break;
	}
	do{
		cout<<"Desea hacer otra operacion (Si=1,No=0)? [ ]"<<"\b\b";
		cin>>op;
		if(op==1)
		menu();
		else
		cout<<"Gracias"<<endl;
		break;
	}while(op<0||op>1);
}

float leermonto(float &sa)
{
do
  {cout<<"Ingrese el saldo Inicial "<<endl;
   cin>>sa;
  }while(sa<0);
  return sa;
}

void retiro(float &sa)
{float monto, sret;
int retiros=0;
system("cls");
 cout<<"OPERACION DE RETIRO "<<endl;
 cout<<"------------------- "<<endl;
 cout<<"Saldo Inicial : "<<sa<<endl;
 cout<<"Cuanto dinero Desea REtirar "<<endl;
 cin>>monto;
 
 if(monto > sa)
    cout<<"saldo Insuficiente Solo cuenta con "<<sa<< " soles "<<endl;
 else
   sa=sa - monto;
   sret=sret + monto;
   retiros = retiros +1;
   cout<<"Ud. a retirado  "<<monto<<" soles"<<endl;
   cout<<"Su saldo disponible es : "<<sa<<" soles"<<endl;
   system("pause");
}     
void ingreso()
{float sa, monto, sing;
int ingresos=0;

system("cls");
 cout<<"OPERACION DE INGRESO "<<endl;
 cout<<"------------------- "<<endl;
 cout<<"Saldo Actual : "<<sa<<endl;
 cout<<"Cuanto dinero Desea Ingresar "<<endl;
 cin>>monto;
 
  sa=sa + monto;
   sing=sing + monto;
   ingresos = ingresos +1;
   cout<<"Ud. a Ingresado "<<monto<<" soles"<<endl;
   cout<<"Su saldo disponible es : "<<sa<<" soles"<<endl;
   system("pause");
}     

void reporte()
{float sing, sret, sa;

system("cls");
 cout<<"REPORTE DE ESTADO DE CUENTA "<<endl;
 cout<<"--------------------------- "<<endl;
 cout<<"Cantidad de dinro al iniciar la transaccion : "<<sa<<endl;
 cout<<"Cantidad de dinero ingresado :  "<<sing<<endl;
 cout<<"Cantidad de dinero Retirado :  "<<sret<<endl;
 cout<<"Ud. tiene un saldo de  :  "<<sa<<" Soles "<<endl;
   system("pause");
}     


