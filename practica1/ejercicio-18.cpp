

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
//variables
int edad,t;
//entrada
cout<<"Ingrese su edad en años: "<<endl;
cin>>edad;
cout<<"Ingrese el número de años trabajando en la empresa: "<<endl;
cin>>t;
//proceso
if (edad>0 && t>0)
{
  if (edad>=60 && t<25)
  cout<<"Tipo de jubilacion: Jubilacion por edad."<<endl;
  else
     if (edad<60 && t>=25)
     cout<<"Tipo de jubilacion: Jubilacion por antiguedad joven."<<endl;
     else
         if (edad>=60 && t>=25)
         cout<<"Tipo de jubilacion: Jubilacion por antiguedad adulta."<<endl;
         else
         cout<<"No le corresponde ningun tipo de jubilacion."<<endl;	     
}

else
cout<<"Error al ingresar los datos."<<endl;	
getche();
return 0;	
}
