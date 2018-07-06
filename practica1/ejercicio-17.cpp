
#include<iostream>
#include<conio.h>
#define p5 0.05
#define p7 0.07
#define p10 0.1
#define p15 0.15
#define p20 0.2
using namespace std;
int main()
{
//variables
float t,s,u;
//entrada
cout<<"Ingrese el salario mensual: "<<endl;
cin>>s;
cout<<"Ingrese el número de años trabajando en la empresa: "<<endl;
cin>>t;
	//proceso
if (s>0 && t>0)
{
	 if (t<1)
	 u=p5*s;
	 else
	    if (t>=1 && t<2)
	     u=p7*s;
		else
		     if (t>=2 && t<5)
	          u=p10*s; 
	         else
	             if (t>=5 && t<10)
	             u=p15*s;
	             else
	                 if (t>=10)
	                 u=p20*s;
	 //salida
	 cout<<"Salario mensual  : "<<s<<" soles"<<endl;
	 cout<<"Utilidad anual   : "<<u<<" soles"<<endl;
	 cout<<"Años de servicio : "<<t<<" años"<<endl;  
}
else
cout<<"Error al ingresar los datos."<<endl;	
	
	
	
getche();
return 0;
}

