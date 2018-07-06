#include <iostream>
#include <iomanip> //setw()
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
using namespace std;
#define max 10
int codigo;
struct empleado
{int cod;
 char nom[20];
 char dep[20];
 int niv;
 float sue;
 };
 
int menu()
 {int op;
  cout<<"\t\t\t MENU DE OPCIONES"<<endl;
  cout<<"\t\t[1] Carga Datos "<<endl;
  cout<<"\t\t[2] Mostrar Datos "<<endl;
  cout<<"\t\t[3] Total Nomina "<<endl;
  cout<<"\t\t[4] Mostrar por Departamento "<<endl;
  cout<<"\t\t[5] Busca por codig "<<endl;
  cout<<"\t\t[6] Busca por nombre "<<endl;
  cout<<"\t\t[7] Modificar "<<endl;
  cout<<"\t\t[8] Ordena Alfabetico "<<endl;
  cout<<"\t\t[9] Ordena por codigo "<<endl;
  cout<<"\t\t[10] Eliminacion "<<endl;
  cout<<"\t\t[11] Salir "<<endl;
  do
   {cout<<"Ingrese una opcion : ===>";
    cin>>op;
}while(op<1 || op >11);
return op;
}

int buscarxcodigo(empleado fijo[],int n,int codigo)
 {int p,i;
  p=-1;
  for(i=0;i<n;i++)
      if(fijo[i].cod==codigo)
         p = i;
      return p;
} 
int buscarxnombre(empleado fijo[],int n,char nomb[30])
 {int p,i;
  p=-1;
  for(i=0;i<n;i++)
   if(strcmp(fijo[i].nom,nomb)==0)
         p = i;
      return p;
} 
                   
void cargar(empleado fijo[],int &n)
{int p,rep;
        for(;;)
          {system("cls");
           cout<<"Ingreso de datos"<<endl<<endl;
           cout<<"Codigo : ";
           cin>>fijo[n].cod;
          
           p=buscarxcodigo(fijo,n,fijo[n].cod); 
            if(p==-1)
             {cout<<"Nombre : ";
              
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
                cout<<"нн El codigo ya existe !!"<<endl;
          cout<<"Deseas ingresar otro empleado (1/0) "<<endl;
          cin>>rep;
          if(rep==0) break;      
       }       
}

void mostrar(empleado fijo[],int n)
{int i;
system("cls");
cout<<"           LISTADO DE EMPLEADOS "<<endl;
cout<<"           ==================== "<<endl;
  cout<<setw(8)<<"ORDEN"<<setw(8)<<"CODIGO "<<setw(25)<<"  NOMBRES"<<setw(20)<<" DEPARTAMENTO"<<setw(10)<<"NIVEL"<<setw(10)<<"SUELDO"<<endl;
  for(i=0;i<n;i++)
     cout<<setw(8)<<i+1<<setw(8)<<fijo[i].cod<<setw(25)<<fijo[i].nom<<setw(20)<<fijo[i].dep<<setw(10)<<fijo[i].niv<<setw(10)<<fijo[i].sue<<endl;

}

void mostraruno(empleado f)
  {cout<<"Datos del Empleado"<<endl;
   cout<<"codigo : "<<f.cod<<endl;
   cout<<"nombre : "<<f.nom<<endl;
   cout<<"depend : "<<f.dep<<endl;
   cout<<"nivel  : "<<f.niv<<endl;
   cout<<"sueldo : "<<f.sue<<endl;
   }
   
float totalnomina(empleado fijo[],int n)
{int i;
system("cls");
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
          

      
 void modificacion(empleado fijo[], int n)
  {int p,resp,op;
   int codigo;
   empleado f;
    do
      {system("cls");
       cout<<"Modificacion de Datos"<<endl<<endl;
       cout<<"Codigo a buscar : ";
       cin>>codigo;
       p=buscarxcodigo(fijo,n,codigo);
       if(p!=-1)
        {mostraruno(fijo[p]);
         do
        {cout<<"Que campos desea Modificar "<<endl;
        cout<<"[1] Codigo [2] nombre [3] dpto [4] nivel [5] sueldo [6] salir"<<endl;
        cout<<"Ingrese opcion (1-6)";
        cin>>op;
        switch(op)
          {case 1 : cout<<"Nuevo codigo :";
           cin>>fijo[p].cod; break;
           case 2 : cout<<"Nuevo nombre :";
           fflush(stdin);
           gets(fijo[p].nom); break;
           case 3 :
                  
                   cout<<"Nuevo departamento :";
                    fflush(stdin);
                       gets(fijo[p].dep); break;
                  
                    
           case 4 :
                  do
                   {cout<<"Nuevo nivel : ";
                     cin>>fijo[p].niv;
                     }while(fijo[p].niv<=0||fijo[p].niv>5);break;
              
           case 5 :
                  do
                   {cout<<"Nuevo sueldo : ";
                     cin>>fijo[p].sue;
                     }while(fijo[p].sue<=0);break;
         }    
        }while(op!=6);
   }
        else
         cout<<"el codigo del producto no existe"<<endl;
         cout<<"Deseas modificar otro producto(1/0) ";
         cin>>resp;
      }while(resp==1);
 } 
 
void ordenaalfabetico(empleado fijo[],int n)
   {int i,j;
    empleado t;
    for(i=0;i<n;i++)
       for(j=i+1;j<n;j++)
        if(strcmp(fijo[i].nom,fijo[j].nom)>0)
          {t=fijo[i];
           fijo[i]=fijo[j];
           fijo[j]=t;
           }
} 
void ordenaxcodigo(empleado fijo[],int n)
   {int i,j;
    empleado t;
    for(i=0;i<n;i++)
       for(j=i+1;j<n;j++)
        if(fijo[i].cod>fijo[j].cod)
          {t=fijo[i];
           fijo[i]=fijo[j];
           fijo[j]=t;
           }
}   
void eliminacion(empleado fijo[], int &n)
{int i,p;
  int codigo;
      char resp,preg;
      do 
       {system("cls");
        cout<<"Eliminacion de un registro "<<endl<<endl;
        cout<<"Codigo a buscar : ";
        cin>>codigo;
        p=buscarxcodigo(fijo,n,codigo);
        if(p!=-1)
          {mostraruno(fijo[p]);
           cout<<"Estas seguro de eliminarlo (s/n) :";
           cin>>preg;
           preg=toupper(preg);
           if(preg=='S')
             {for(i=p;i<n-1;i++)
                 fijo[i]=fijo[i+1];
                  n=n-1;
              }
           }
          else
           cout<<"el codigo del producto no existe"<<endl;
           cout<<"Deseas eliminar otro producto(s/n) ";
           cin>>resp;
           resp=toupper(resp);
       }while(resp=='S');
  }        
int main()
{empleado per[max];
char depa[20],nb[max];
 int n,opcion,pos;
 n=0;   
 float total;

  do
    {system("cls");
     opcion=menu();
     switch(opcion)
     {case 1: cargar(per,n);break;
      case 2: mostrar(per,n);break;
      case 3: total=totalnomina(per,n);
      cout<<"TOTAL NOMINA : "<<total<<" Nuevos Soles"<<endl;
     
     break;
      case 4: system("cls");
      cout<<"Ingrese el departamento que desea mostrar "<<endl;
      fflush(stdin);
       gets(depa);
        cout<<"Personal del Departamento de : "<<depa<<endl;
         mostrarXdep(per,depa,n);system("pause");break;
        case 5:system("cls"); 
          cout<<"Ingrese el codigo a buscar "<<endl;
          cin>>codigo;
          pos=buscarxcodigo(per,n,codigo);
        if(pos>=0)
           mostraruno(per[pos]);
        else    
           cout<<"el codigo del producto no existe"<<endl; 
           break; 
 case 6: system("cls");
        
          cout<<"Ingrese el nombre a buscar "<<endl;
          fflush(stdin);
          gets(nb);
        pos=buscarxnombre(per,n,nb);
        if(pos>=0)
           mostraruno(per[pos]);
        else    
           cout<<"el codigo del producto no existe"<<endl; 
           break; 
 case 7 : modificacion(per,n);
     
         break;           
 case 8:ordenaalfabetico(per,n);break; 
 case 9:ordenaxcodigo(per,n);break;
 case 10:eliminacion(per,n);break;           
  
    }
    getche();
}while(opcion !=11);
 system("cls");
 cout<<"************FIN PROCESO ***************"<<endl;
 
 system("pause");
 return 0;
 }
