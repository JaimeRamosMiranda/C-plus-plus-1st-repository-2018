/*
17.- En una tienda de descuento las personas que van a pagar el importe 
de su compra llegan a la caja y sacan una bolita de color, 
que les dirá que descuento tendrán sobre el  total de su compra. 
Determinar la cantidad que pagara cada cliente desde que la tienda  abre hasta que cierra. 
Se sabe que si el color de la bolita es roja, el cliente obtendrá un  40% de descuento; 
si es amarillo un 25% y si es blanca no obtendrá descuento.
*/

#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main(){
	cout << "Bienvenido a la tienda REMATE" << endl;
	int Cierre =  0, numCli = 0;
	float monto, acumulador = 0,d,mp;
	char bolita;

	do{
		++numCli;
		cout << "Cual es el monto que inicialmente paga el cliente  "  << numCli<<"   ";
		cin >> monto;
		cout << "Escoja una bolita " << endl;
		cout << "(r/R) Rojo " << endl;
		cout << "(a/A) Amarillo " << endl;
		cout << "(b/B) Blanco " << endl;
		do{
			cout << "Cual es su eleccion ==> ";
			cin >> bolita;
		}while(bolita!='r'&&bolita!='R'&&bolita!='a'&&bolita!='A'&&bolita!='b'&&bolita!='B');
		switch(bolita){
			case 'r':
			case 'R': d=monto*0.4;
			          break;
			case 'a':
			case 'A': d=monto*0.25;
								break;
			case 'b':
			case 'B': d=0;break;
		}
		mp=monto-d;
		acumulador = acumulador + mp;
        		system ("cls");
cout<<setw(12)<<"Nª CLIENTE"<<setw(15)<<"Monto Inic."<<setw(10)<<"Descuento"<<setw(15)<<"Monto Pagar"<<endl; 	
		cout<<setw(12)<<numCli<<setw(15)<<monto<<setw(10)<<d<<setw(15)<<mp<<endl;
		//cout<<"Monto         :"<<monto<<endl;
		//cout<<"Descuento     : "<<d<<endl;
		//cout<<"Monto a Pagar : "<<mp<<endl;
		 do{
			cout << "Desea cerrar la tienda (0/1) ==> ";
			cin >> Cierre;
		 }while(Cierre !=0 && Cierre !=1);
	}while(Cierre == 0);

	cout <<endl<<endl<< "Las ventas totales de la tienda son: " << acumulador << endl;
	cout << "la tienda tuvo " << numCli << " clientes" << endl;
	getch();
}
