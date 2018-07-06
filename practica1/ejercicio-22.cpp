#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
//variables
float n1,n2,n3,n4,n5,min,sum,prom;
//entrada
cout<<"Ingrese la nota de la practica calificada 1: "<<endl;
cin>>n1;
cout<<"Ingrese la nota de la practica calificada 2: "<<endl;
cin>>n2;
cout<<"Ingrese la nota de la practica calificada 3: "<<endl;
cin>>n3;
cout<<"Ingrese la nota de la practica calificada 4: "<<endl;
cin>>n4;
cout<<"Ingrese la nota de la practica calificada 5: "<<endl;
cin>>n5;
//proceso	
if (n1>=0 && n2>=0 && n3>=0 && n4>=0 && n5>=0 && n1<=20 && n2<=20 && n3<=20 && n4<=20 && n5<=20 )
{ if (n1<=n2 && n1<=n3 && n1<=n4 && n1<=n5)
    min=n1;
  else 
     if (n2<=n3 && n2<=n4 && n2<=n5)
     min=n2;
     else
	     if (n3<=n4 && n3<=n5)
         min=n3;
         else
             if (n4<=n5)
             min=n4;
             else
             min=n5;
sum=n1+n2+n3+n4+n5-min;
prom=sum/4.;
if(prom>16 && prom<=20)
{
cout<<"Categoria del alumno         : "<<"A" <<endl;
cout<<"Promedio de nota del alumnno : "<<prom<<endl;
}
 else
     if (prom>14 && prom<=16)
     {
      cout<<"Categoria del alumno         : "<<"B"<<endl;
      cout<<"Promedio de nota del alumnno : "<<prom<<endl;
     }
     else
         if(prom>9 && prom<=14)
         {
         cout<<"Categoria del alumno         : "<<"C"<<endl;
         cout<<"Promedio de nota del alumnno : "<<prom<<endl;
         }
         else
         {
         cout<<"Categoria del alumno         : "<<"D"<<endl;
         cout<<"Promedio de nota del alumnno : "<<prom<<endl;
         }
   
}

else
cout<<"Error al ingresar los datos."<<endl;	
	
getche();
return 0;	
}
