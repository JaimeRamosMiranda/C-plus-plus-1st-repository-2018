/*
30.- Una empresa de carga brinda servicio a todo el continente americano, 
la tarifa que cobra por cada tonelada se muestra en el siguiente cuadro:
			Destino
Medio de transporte	Norte	sur	centro
Aéreo			30	25	20
Marítimo		25	20	15
Terrestre		20	15	10
Asimismo, si la carga que se transporta es perecible, 
se le incrementa el 7% del pago total de acuerdo a las toneladas. 
Escribir un algoritmo para calcular el monto a pagar.
//variable
Medio de transporte mt 	char A,M,T
destino				d	char N,S,C
cargo a transportar	ton	real
perecible			per	char s,n
tarifa
*/

#include <iostream>
#include <conio.h>
using namespace std;

#define an 30
#define as 25
#define ac 20
#define mn 25
#define ms 20
#define mc 15
#define tn 20
#define ts 15
#define tc 10
#define p7 0.07

int main()
{
	float mp,ton,inc,tar;
	char mt,d,per;
	//datos
	cout<<"Ingrese la carga en toneladas :"<<endl;
	cin>>ton;
	cout<<"Ingrese nombre medio de transporte [A] Aereo, [M] Maritimo, [T] Terrestre:"<<endl;
	cin>>mt;
	mt=toupper(mt);
	cout<<"Ingrese el destino [N] Norte, [S] sur, [C] centro:"<<endl;
	cin>>d;
	d=toupper(d);
	cout<<"¿El producto es perecible? [S] Si, [N] No"<<endl;
	cin>>per;
	per=toupper(per);
	
	//proceso
	if((mt=='A' || mt=='M' || mt=='T') && (d=='N' || d=='S' || d=='C') && ton>0)
		{
		switch(mt)
		{
			case 'A': switch(d)
						{case 'N': tar=an;break;
						 case 'S': tar=as;break;
						 case 'C': tar=ac;break;
						} break;
			case 'M': switch(d)
						{case 'N': tar=mn;break;
						 case 'S': tar=ms;break;
						 case 'C': tar=mc;break;
						} break;
			case 'T': switch(d)
						{case 'N': tar=tn;break;
						 case 'S': tar=ts;break;
						 case 'C': tar=tc;break;
						} break;
		}
		mp=tar*ton;
		if(per=='S')
			{inc=mp*p7;
			mp=mp+inc;
			cout<<"Su incremento es :"<<inc<<endl;
			}
		cout<<"Su monto a pagar es "<<mp<<" soles"<<endl;
		}
	else
		cout<<"Error al ingresar los datos"<<endl;
cout<<"========FIN PROCESO========"<<endl;
}


