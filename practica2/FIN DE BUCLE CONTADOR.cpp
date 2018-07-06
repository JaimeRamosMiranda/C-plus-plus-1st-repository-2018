/*
Ejemplo
Se tienen las calificaciones de un grupo de alumnos que se presentaron a un examen,  
escribir  un  algoritmo para calcular el promedio y 
mostrar cuantas calificaciones hay en cada uno de los siguientes rangos:
		[0       a   10.5>
		[10.5  a   15.5>
		[15.5   a   18.5>
		[18.5   a   20.0> 
*/

#include<conio.h>
#include<iostream>
using namespace std;
//**********MEDODO DEL CONTADOR  ************
int main()
{
	int n,i,r1,r2,r3,r4;
	float cal,pro,suma;
	suma=0;
	r1=r2=r3=r4=0;
	cout<<"Ingrese numero de alumnos del grupo :"<<endl;
	cin>>n;
	i=1;
	while(i<=n)
	{do
	   {cout<<"la nota del alumno "<<i<<"   ";
	    cin>>cal;
        }while(cal<0 || cal>20);
	 suma=suma + cal;
	 if (cal>=0&& cal<= 10.44)
	     r1=r1+1;
	 else
         if (cal>=10.5&& cal<= 14.44)
	        r2=r2+1;
         else
             if (cal>=14.5&& cal<= 16.44)
	             r3=r3+1;
             else
                 r4=r4+1;
     i=i+1;
     }                    
	pro=suma/n;
	cout<<"Promerdio general : "<<pro<<endl;
	cout<<"Rango : [0.00 - 10.44] hay "<<r1<<"  Alumnos "<<endl;
	cout<<"Rango : [10.5 - 14.44] hay "<<r2<<"  Alumnos "<<endl;
	cout<<"Rango : [14.5 - 16.44] hay "<<r3<<"  Alumnos "<<endl;
	cout<<"Rango : [16.5 - 20.00] hay "<<r4<<"  Alumnos "<<endl;
	
	getche();
	return 0;
}
