#include <iostream>
#include <iomanip> //setw()
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#define max 10
using namespace std;
struct empleado
{int cod;
 char nom[20];
 char dep[20];
 int niv;
 float sue;
 };
int main()
{empleado fijo;
// lectura de datos
     cout<<"codigo;  ";
     cin>>fijo.cod;
      cout<<"Nombre;  ";
      fflush(stdin);
      gets(fijo.nom);
      cout<<"Departamento;  ";
      fflush(stdin);
     gets(fijo.dep);
     do
     { cout<<"Nivel;  ";
       cin>>fijo.niv;
      }while(fijo.niv<1 || fijo.niv >5);
      do
     { cout<<"Sueldo  ";
       cin>>fijo.sue;
      }while(fijo.sue<0);

 // salida
 system("cls");
 cout<<"Datos Ingresados"<<endl<<endl<<endl;
 cout<<setw(10)<<"CODIGO "<<setw(20)<<"  NOMBRES"<<setw(20)<<"DEPARTAMENTO"<<setw(10)<<"NIVEL"<<setw(10)<<"SUELDO"<<endl;
 cout<<setw(10)<<fijo.cod<<setw(20)<<fijo.nom<<setw(20)<<fijo.dep<<setw(10)<<fijo.niv<<setw(10)<<fijo.sue<<endl;
 cout<<"\n\n\n";
 cout<<"Codigo   : "<<fijo.cod<<endl;
 cout<<"Nombre   : "<<fijo.nom<<endl;
 cout<<"Edad     : "<<fijo.dep<<endl;
 cout<<"Domicilio: "<<fijo.niv<<endl;
 cout<<"Sueldo   : "<<fijo.sue<<endl;
 system("pause");
 return 0;
 }





