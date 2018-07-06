/*
8.- En el museo de arte un estudiante desea determinar para cierto dia, 
el promedio de edad asi como el número de visitantes por sexo,  
para lo cual anota, desde que se habre las puertas hasta el cierre de las mismas, 
el sexo (H,M)y la edad de cada visitante.
Al final del dia dicho estudiante ingresa un asterisco (*) como sexo 
para dar por terminado su proceso y mostrar los resultados requeridos.
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int i,edad,hom,muj,edadtotal;
 char sexo;
 float promedio;
 
 i=0;
 edadtotal=hom=muj=0;
  do
     {
      cout<<"Ingresar el sexo del visitante numero: "<<i+1<<endl;
	  cout<<"HOMBRE(H) o MUJER(M) "<<endl;	
      cin>>sexo;
      if(sexo!='H' && sexo!='h' && sexo!='M' && sexo!='m' && sexo!='*')
      cout<<"Error al ingresar el sexo del visitante"<<endl;
     } while(sexo!='H' && sexo!='h' && sexo!='M' && sexo!='m' && sexo!='*');	
	

while( sexo!='*')
	{
		 do
         {   
         cout<<"Ingresar la edad del visitante numero: "<<i+1<<endl;	
         cin>>edad;
         if(edad<0 || edad>120)
         cout<<"Error al ingresar la edad del empleado"<<endl;
         } while(edad<0 || edad>120);
	 if(sexo=='M' || sexo=='m')
	 muj=muj+1;
	 
	 if(sexo=='H' || sexo=='h')
	 hom=hom+1;
	 i=i+1;
	 edadtotal=edadtotal+edad;
	
	 do
     {
      cout<<"Ingresar el sexo del visitante numero: "<<i+1<<"  Para finalizar digite asterisco (*) "<<endl;
	  cout<<"HOMBRE(H) o MUJER(M) "<<endl;	
      cin>>sexo;
      if(sexo!='H' && sexo!='h' && sexo!='M' && sexo!='m' && sexo!='*')
      cout<<"Error al ingresar el sexo del visitante"<<endl;
     } while(sexo!='H' && sexo!='h' && sexo!='M' && sexo!='m' && sexo!='*');	

	}
	promedio=float(edadtotal)/i;
	cout<<"Edad promedio de visitantes durante el dia: "<<promedio<<endl;
	cout<<"Numero de visitantes que son hombres: "<<hom<<endl;
	cout<<"Numero de visitantes que son mujeres: "<<muj<<endl;
getche();
return 0;
}
