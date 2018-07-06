//Ejercicio 3, nota de programacion
#include <iostream>
#include <conio.h>

#define a1 0.3 //30%
#define s1 0.15 //15%
#define m1 0.2 //20%

using namespace std;

int main()
{
float dt,m2,s2,a2,c2;
//Entrada
cout<<"Ingrese la donacion total:"<<endl;
cin>>dt;
//proceso
a2=dt*a1;
s2=a2*s1;
m2=s2*m1;
c2=dt-(a2+s2+m2);

//salida
cout<<"Mostrando todas las donaciones"<<endl;
cout<<"Distribucion de donacion "<<dt<<" Soles"<<endl;
cout<<"Para Matematica       :"<<m2<<" Soles"<<endl;
cout<<"Para Sistemas      :"<<s2<<" Soles"<<endl;
cout<<"Para Administracion	:"<<a2<<" Soles"<<endl;
cout<<"Para Contabilidad	:"<<c2<<" Soles"<<endl;
cout<<"*********FIN PROCESO ********"<<endl;
getche();
return 0;
}

