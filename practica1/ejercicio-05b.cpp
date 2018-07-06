//ejercicio 5
#include <iostream>
#include <conio.h>
using namespace std;
//programa principal
int main()
{
	float a,b,c,at,r;
	//entrada
	cout<<"Ingrese la medicion del lado A :"<<endl;
	cin>>a;
	cout<<"Ingrese la medicion del lado B :"<<endl;
	cin>>b;
	cout<<"Ingrese la medicion del lado C :"<<endl;
	cin>>c;
	cout<<"Ingrese la medicion del radio :"<<endl;
	cin>>r;
	//proceso
	at=r*(a+b+c)/2;
	//salida
	cout<<"mostrado las medidas de los lados "<<endl;
	cout<<"Lado A	:"<<a<<endl;
	cout<<"Lado B	:"<<b<<endl;
	cout<<"Lado C	:"<<c<<endl;
	cout<<endl<<endl<<endl;
	cout<<"Area del triangulo : "<<at<<endl;
	cout<<"******FIN DE EJEcucion******";
	getche();
	return 0;
}
