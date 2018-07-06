#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int i,resultado,suma;

suma=resultado=0;
i=0;
 do{
 cout<<"Ingrese el resultado del tiro numero: "<<i+1<<endl;
 cin>>resultado;
 if(resultado<1 || resultado >6 && resultado!=1)
 cout<<"Error al ingresar los datos"<<endl;
 }while(resultado<1 || resultado >6 && resultado!=1);
 
 
 while(resultado!=1)
	{
	suma=suma+resultado;
	i=i+1;
	
	 do{
     cout<<"Ingrese el resultado del tiro numero: "<<i+1<<endl;
     cin>>resultado;
     if(resultado<1 || resultado >6 && resultado!=1)
     cout<<"Error al ingresar los datos"<<endl;
     }while(resultado<1 || resultado >6 && resultado!=1);
	}
	
	if (resultado==1)
	{
	suma=suma+resultado;
	i=i+1;	
	}
	
	cout<<"Numero de veces que se tiro el dado: " <<i<<endl;
	cout<<"Suma de los valores del lanzamiento del dado: " <<suma<<endl; 
	
	
	
	
getche();
return 0;	
}
