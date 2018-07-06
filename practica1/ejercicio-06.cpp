//ejercicio 5
#include <iostream>
#include <conio.h>
using namespace std;
//programa principal
int main()
{
	//declaracion
	float a,b,c,ct,ap,bp,cp;
	cout<<"Ingrese la cantidad que invirtio la primera persona : "<<endl;
	cin>>a;
	cout<<"Ingrese la cantidad que invirtio la segunda persona : "<<endl;
	cin>>b;
	cout<<"Ingrese la cantidad que invirtio la tercera persona : "<<endl;
	cin>>c;
	
	//proceso
	ct=a+b+c;
	ap=(a/ct)*100;
	bp=(b/ct)*100;
	cp=(c/ct)*100;
	
	//salida
	cout<<"La primera persona invirtio : "<<ap<<"%"<<endl;
	cout<<"La segunda persona invirtio : "<<bp<<"%"<<endl;
	cout<<"La tercera persona invirtio : "<<cp<<"%"<<endl;
	cout<<endl<<endl;
	cout<<"***** Fin de proceso ******";

	getche();
	return 0;
}
