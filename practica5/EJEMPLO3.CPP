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
void cargar(empleado fijo[],int n)
{int i;
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
}

void mostrar(empleado fijo[],int n)
{int i;
  cout<<setw(8)<<"ORDEN"<<setw(8)<<"CODIGO "<<setw(25)<<"  NOMBRES"<<setw(20)<<" DEPARTAMENTO"<<setw(10)<<"NIVEL"<<setw(10)<<"SUELDO"<<endl;
  for(i=0;i<n;i++)
     cout<<setw(8)<<i+1<<setw(8)<<fijo[i].cod<<setw(25)<<fijo[i].nom<<setw(20)<<fijo[i].dep<<setw(10)<<fijo[i].niv<<setw(10)<<fijo[i].sue<<endl;
}

float totalnomina(empleado fijo[],int n)
{int i;
 float total; 
  total = 0;
   for(i=0;i<n;i++)
       total = total + fijo[i].sue;
   return total;
}
 
void mostrarXdep(empleado fijo[],char d[],int n)
  {int i;
  
       for(i=0;i<n;i++)   
       if(strcmp(fijo[i].dep,d)==0)
          {cout<<"Nombre : "<<fijo[i].nom<<endl;
          cout<<"Sueldo : "<<fijo[i].sue<<endl;
          }
  }         
  
  
int main()
{empleado per[max];
char depa[20];
 int n;
 float total;
 do
  {cout<<"Ingrese el numero de empleados de la empresa : "<<endl;
   cin>>n;
   }while(n<1||n>max);
 cargar(per,n);
 mostrar(per,n);
 system("pause");
 total=totalnomina(per,n);
 cout<<"TOTAL NOMINA : "<<total<<" Nuevos Soles"<<endl<<endl<<endl;
 system("pause");
 cout<<"Ingrese el departamento que desea mostrar "<<endl;
 fflush(stdin);
 gets(depa);
 cout<<"Personal del Departamento de : "<<depa<<endl;
 mostrarXdep(per,depa,n);
 
 
 system("pause");
 return 0;
 }





