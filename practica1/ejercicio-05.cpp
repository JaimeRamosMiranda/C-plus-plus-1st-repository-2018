//inclusion de librerias
#include<iostream>
#include<conio.h>
#define p1 0.4 //40%
#define p2 0.2 //20%
#define p3 0.4 //40%
using namespace std;
//programa principal
int main ()
{//DECLARACION DE VARIABLES DE E/S
float ds,dd,dm,te,r1,r2,r3;
//Entrada
cout<<"Ingrese la donacion en soles:"<<endl;
cin>>ds;
cout<<"Ingrese la donacion en dolares:"<<endl;
cin>>dd;
cout<<"Ingrese la donacion en marcos:"<<endl;
cin>>dm;
//proceso
te=(ds/3.52+dd+dm/2.08)*1.07;
r1=p1*te;
r2=p2*te;
r3=p3*te;
//salida
cout<<"mostrando todas las donaciones"<<endl;
cout<<"En soles:"<<ds<<endl;
cout<<"En dolares:"<<dd<<endl;
cout<<"En marcos:"<<dm<<endl;
cout<<endl<<endl<<endl;
cout<<"Distribucion de"<<te<<"Euros"<<endl;
cout<<"Para centro de salud       :"<<r1<<endl;
cout<<"Para comedor de niños      :"<<r2<<endl;
cout<<"Para gastos administrativos:"<<r3<<endl;
cout<<"*********FIN PROCESO ********"<<endl;
getche();
return 0;
}
