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
 int buscod(empleado f[],int n,int nb)
{int p,i;
 p=-1;
 for(i=0;i<n;i++)
    if(f[i].cod==nb)
        p=i;
 return p;
} 
int main()
{empleado fijo[max];
 int n=0,pos,cod,i,op;
 float total;
 
 // lectura de datos
 do
 {
  cout<<"Ingrese datos del empleado"<<n+1<<endl;
     cout<<"codigo;  ";
     cin>>cod;
     pos=buscod(fijo,n,cod);
if(pos==-1)
   {cout<<"Ingrese datos del empleado"<<n+1<<endl;
     fijo[n].cod=cod;
      cout<<"Nombre;  ";
      fflush(stdin);
      gets(fijo[n].nom);
      cout<<"Departamento;  ";
      fflush(stdin);
     gets(fijo[n].dep);
     do
     { cout<<"Nivel;  ";
       cin>>fijo[n].niv;
      }while(fijo[n].niv<1 || fijo[n].niv >5);
      do
     { cout<<"Sueldo;  ";
       cin>>fijo[n].sue;
      }while(fijo[n].sue <0);
      n=n+1;
   }
   else
     cout <<" registro duplicado"<<endl;
     cout<<"Hay mas datos si 1 no 0 "<<endl;
     cin>>op;
    } while(op==1);
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



