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
{empleado fijo[max];
 int n,i;
 float total;
 do
  {cout<<"Ingrese el numero de empleados de la empresa : "<<endl;
   cin>>n;
   }while(n<1||n>max);
 // lectura de datos
 for(i=0;i<n;i++)
   {cout<<"Ingrese datos del empleado"<<i+1<<endl;
     cout<<"codigo;  ";
     cin>>fijo[i].cod;
      cout<<"Nombre;  ";
      fflush(stdin);
      gets(fijo[i].nom);
      cout<<"Departamento;  ";
      fflush(stdin);
     gets(fijo[i].dep);
     do
     { cout<<"Nivel;  ";
       cin>>fijo[i].niv;
      }while(fijo[i].niv<1 || fijo[i].niv >5);
      do
     { cout<<"Sueldo;  ";
       cin>>fijo[i].sue;
      }while(fijo[i].sue <0);
   }
 //calcula total nomina
  total = 0;
   for(i=0;i<n;i++)
       total = total + fijo[i].sue;

 // salida
 system("cls");
 cout<<"Datos Ingresados"<<endl<<endl<<endl;
   cout<<setw(8)<<"ORDEN"<<setw(8)<<"CODIGO "<<setw(25)<<"  NOMBRES"<<setw(20)<<" DEPARTAMENTO"<<setw(10)<<"NIVEL"<<setw(10)<<"SUELDO"<<endl;
  for(i=0;i<n;i++)
     cout<<setw(8)<<i+1<<setw(8)<<fijo[i].cod<<setw(25)<<fijo[i].nom<<setw(20)<<fijo[i].dep<<setw(10)<<fijo[i].niv<<setw(10)<<fijo[i].sue<<endl;
  cout<<"TOTAL NOMINA : "<<total<<" Nuevos Soles"<<endl<<endl<<endl;
  cout<<"Personal de contabilidad"<<endl;
    for(i=0;i<n;i++)
       if(strcmp(fijo[i].dep,"conta")==0)
          {cout<<"Nombre : "<<fijo[i].nom<<endl;
          cout<<"Sueldo : "<<fijo[i].sue<<endl;
          }
 system("pause");
 return 0;
 }





