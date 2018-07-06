/*
3.-  Una persona debe realizar un muestreo con N personas para 
determinar el promedio de peso de 
los niños, jóvenes, adultos y viejos que existen en su zona habitacional. 
Se determinan las categorías en base a  la sig. Tabla. 		
CATEGORIA			EDAD 		     
Niños			  0 - 12 		     
Jóvenes			 13 - 29 		     
Adultos			 30 - 59 		     
Viejos			 60 en adelante
*/

#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
 int i, edad, nin, jov, adu, vie, n;
 
 int op;
 op=1;
 while (op==1)
 {
 system("cls");
 nin=jov=adu=vie=0;
 i=1; 
 do
	{	
	 cout<<" el numero de personas encuestadas: "<<endl;	
     cin>>n;
     if (n<=0)
         cout<<" Error al ingresar el numero"<<endl;
	} while(n<=0);
 
 while(i<=n)
  {
  	 do
	    { 	
	     cout<<" Ingrese la edad la persona numero: "<<i<<endl;	
         cin>>edad;
         if (edad<0 || edad>120)
         cout<<" Error al ingresar la edad"<<endl;
	     } while(edad<0 || edad>120);
	  
	  if (edad>0 && edad<=12)
	     nin=nin+1;
	 else
	         {
	         if(edad>=13 && edad<=29)
	            jov=jov+1;
	         else
	            {
				if (edad>=30 && edad<=59)
	            adu=adu+1;
	            else
	            vie=vie+1;
	            }
	         }   
	 i=i+1;
	 
	 
  }
     cout<<"Numero de personas encuestadas: "<<n<<endl;
	 cout<<"Numero de personas que son ninos: "<<nin<<endl;
	 cout<<"Numero de personas que son jovenes: "<<jov<<endl;
	 cout<<"Numero de personas que son adultos: "<<adu<<endl;
	 cout<<"Numero de personas que son viejos: "<<vie<<endl;
	 
	
 cout<<"Desea ingresar otro grupo de personas Si(1) o No(0): "<<endl;
 cin>>op;
}		
	
system("cls");
cout<<"***********************FIN DEL PROCESO ****************"<<endl;	
	
getche ();
return 0;	
}
