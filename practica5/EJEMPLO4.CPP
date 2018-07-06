#include <iostream>
#include <iomanip> //setw()
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
using namespace std;
#define max 10
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
int menu()
 {int op;
  cout<<"\t\t\t MENU DE OPCIONES"<<endl;
  cout<<"\t\t[1] Carga Datos "<<endl;
  cout<<"\t\t[2] Mostrar Datos "<<endl;
  cout<<"\t\t[3] Total Nomina "<<endl;
  cout<<"\t\t[4] Mostrar por Departamento "<<endl;
  cout<<"\t\t[5] Salir "<<endl;
  do
   {cout<<"Ingrese una opcion : ===>";
    cin>>op;
}while(op<1 || op >5);
return op;
}
void cargar(empleado fijo[],int &n)
{int i,pos,cod,op;
  do
{system("cls");
     cout<<"Ingrese datos del empleado"<<n+1<<endl;
     cout<<"codigo;  ";
     cin>>cod;
     pos=buscod(fijo,n,cod);
     if (pos==-1)
     {
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
      fijo[n].cod=cod;
      n=n+1;
      }
   else
     cout<<"El codigo ya esta registrado "<<endl;
     cout<<"Hay mas datos Si [1] No [0] ";
     cin>>op;
       
   }while(op==1);
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
 int n,opcion;
 n=0;   
 float total;

  do
    {system("cls");
     opcion=menu();
     switch(opcion)
     {case 1: cargar(per,n);break;
      case 2: mostrar(per,n);system("pause");break;
      case 3: total=totalnomina(per,n);
 cout<<"TOTAL NOMINA : "<<total<<" Nuevos Soles"<<endl;
 system("pause");
 break;
      case 4: 
 cout<<"Ingrese el departamento que desea mostrar "<<endl;
 fflush(stdin);
 gets(depa);
 cout<<"Personal del Departamento de : "<<depa<<endl;
 mostrarXdep(per,depa,n);system("pause");break;
}
}while(opcion !=5);
 system("cls");
 cout<<"************FIN PROCESO ***************"<<endl;
 
 system("pause");
 return 0;
 }

