#include <iostream>
#include <conio.h>
#define p12 0.12
#define p10 0.1
#define p8 0.08
using namespace std;
int main()
{
int i,n;
float sueldo,aumento,nuevo,total;
do{
	cout<<"Ingrese el numero de empleados: "<<endl;
	cin>>n;
	if(n<1)
	cout<<"dato ingresado incorrecto"<<endl;
	}while(n<1);
	
i=1;total=0;	
while(i<=n)
{
do{ cout<<"Ingrese el sueldo del empleado: "<<i<<endl;
    cin>>sueldo;
    if(sueldo<0)
	cout<<"dato ingresado incorrecto"<<endl;
	}while(sueldo<0);
	
	if(sueldo<1000)
	{
		aumento=p12*sueldo;
		nuevo=sueldo+aumento;
		total=total+nuevo;
		cout<<"Empleado numero: "<<i<<endl;
		cout<<"Sueldo: "<<sueldo<<" soles"<<endl;
		cout<<"Aumento: "<<aumento<<" soles"<<endl;
		cout<<"Nuevo sueldo: "<<nuevo<<" soles"<<endl;
	}
	else
	if(sueldo>=1000 && sueldo <=2500)
	{
		aumento=p10*sueldo;
		nuevo=sueldo+aumento;
		total=total+nuevo;
		cout<<"Empleado numero: "<<i<<endl;
		cout<<"Sueldo: "<<sueldo<<" soles"<<endl;
		cout<<"Aumento: "<<aumento<<" soles"<<endl;
		cout<<"Nuevo sueldo: "<<nuevo<<" soles"<<endl;
	}
	else
	{
		aumento=p8*sueldo;
		nuevo=sueldo+aumento;
		total=total+nuevo;
		cout<<"Empleado numero: "<<i<<endl;
		cout<<"Sueldo: "<<sueldo<<" soles"<<endl;
		cout<<"Aumento: "<<aumento<<" soles"<<endl;
		cout<<"Nuevo sueldo: "<<nuevo<<" soles"<<endl;
	}
	i=i+1;
	
}
	cout<<"Monto total de la nomina: "<<total<<" soles"<<endl;

getche();
return 0;
}
