/*
5.- Una empresa almacena los datos de N empleados, para esto, en un proceso repetitivo se ingresa el sexo y el salario de cada empleado. 
Se pide calcular: 
La cantidad de personas que ganan más de 700 al mes. 
El promedio de salarios. 
El porcentaje de mujeres que trabajan en esa empresa 
El porcentaje de varones que trabajan en esa empresa
*/

#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
int i,m700,n,hom, muj;
float s,st, promedio,hompor, mujpor;	
char sexo;	

do
{
  cout<<"Ingresar el numero de empleados: "<<endl;	
  cin>>n;
  if(n<0)
  cout<<"Error al ingresar el numero"<<endl;
} while(n<0);

i=1;
m700=0;
hom=muj=0;
st=0;
while(i<=n)
	{
	  do
     {
      cout<<"Ingresar el sexo del empleado numero: "<<i<<endl;
	  cout<<"HOMBRE(H) o MUJER(M) "<<endl;	
      cin>>sexo;
      if(sexo!='H' && sexo!='h' && sexo!='M' && sexo!='m')
      cout<<"Error al ingresar el sexo del empleado"<<endl;
     } while(sexo!='H' && sexo!='h' && sexo!='M' && sexo!='m');	
	
	 do
     {
     cout<<"Ingresar el salario del empleado numero: "<<i<<endl;	
     cin>>s;
     if(s<0)
     cout<<"Error al ingresar el salario del empleado"<<endl;
     } while(s<0);
	 
	 if (s>700)
	  m700=m700+1;
	 
	 if(sexo=='M' || sexo=='m')
	 muj=muj+1;
	 
	 if(sexo=='H' || sexo=='h')
	 hom=hom+1;
	 i=i+1;
	 st=st+s;
	 	
	}
	 hompor=(float(hom)/n)*100;
	 mujpor=(float(muj)/n)*100;
	 promedio=st/n;
	 cout<<"Numero de empleados que ganan mas de 700 soles mensuales: "<<m700<<endl;
	 cout<<"Salario promedio: "<<promedio<<" soles"<<endl;
	 cout<<"Porcentaje de hombres que trabajan en la empresa: "<<hompor<<"%"<<endl;
	 cout<<"Porcentaje de mujeres que trabajan en la empresa: "<<mujpor<<"%"<<endl;
	
	
getche();
return 0;	
}
