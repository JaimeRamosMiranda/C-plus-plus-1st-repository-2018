#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
using namespace std;
#define max 100
#define p1 0.04
#define p2 0.02
int codigo;
struct trabajador
{int cod;
 char nom[20];
 float sueldobrut,sueldonet,afp,remun;
 };

int menu()
 {int op;
 float sueldobrut,sueldonet,afp,remun;
  cout<<"\t\t\t MENU PRINCIPAL"<<endl;
  cout<<"\t\t[1] Carga Datos "<<endl; //CAPTURA DE DATOS
  cout<<"\t\t[2] Mostrar Datos "<<endl; //MOSTRAR REPORTE
  cout<<"\t\t[3] Busqueda por codigo "<<endl; 
  cout<<"\t\t[4] Eliminacion "<<endl;
  cout<<"\t\t[5] Ordenar por sueldo neto(mayor a menor) "<<endl;
  cout<<"\t\t[6] Modificar "<<endl;
  cout<<"\t\t[7] Salir "<<endl;
  do
   {cout<<"Ingrese una opcion : ===>";
    cin>>op;
}while(op<1 || op >7);
return op;
}

int buscarporcodigo(trabajador fijo[],int n,int codigo)
 {int p,i;
  p=-1;
  for(i=0;i<n;i++)
      if(fijo[i].cod==codigo)
         p = i;
      return p;
}  
                   
void cargar(trabajador fijo[],int &n)
{int p,rep;
float afp,remun,sueldonet,sueldobrut;
        for(;;)
          {system("cls");
           cout<<"Ingreso de datos"<<endl<<endl;

           cout<<"Codigo : ";
           cin>>fijo[n].cod;
          
           p=buscarporcodigo(fijo,n,fijo[n].cod); 
            if(p==-1)
             {cout<<"Nombre : ";
              
              fflush(stdin);
              gets(fijo[n].nom);
              do
               { cout<<"Sueldo Bruto : "<<endl;
                cin>>fijo[n].sueldobrut;
               }while(fijo[n].sueldobrut <0); 
               n=n+1;
               fflush(stdin);
               afp=sueldobrut*p1;
               cout<<"El descuento por AFP es: "<<afp<<endl;
               fflush(stdin);
               remun=sueldobrut*p2;
               cout<<"El descuento por REMUNERACIONES es: "<<remun<<endl;
               fflush(stdin);
               sueldonet=sueldobrut-(afp+remun);
               cout<<"El sueldo neto es: "<<sueldonet<<endl;

          }
           else
                cout<<"нн El codigo ya existe !!"<<endl;
          cout<<"Deseas ingresar otro empleado (1/0) "<<endl;
          cin>>rep;
          if(rep==0) break;      
       }       
}
void mostrar(trabajador fijo[],int n)
{int i;
system("cls");

cout<<"           LISTADO DE EMPLEADOS "<<endl;
cout<<"           ==================== "<<endl;
  cout<<setw(8)<<"ORDEN"<<setw(8)<<"CODIGO "<<setw(25)<<"  NOMBRES"<<setw(20)<<" SUELDO BRUTO"<<endl;
  for(i=0;i<n;i++)
     cout<<setw(8)<<i+1<<setw(8)<<fijo[i].cod<<setw(25)<<fijo[i].nom<<setw(20)<<fijo[i].sueldobrut<<endl;

}
void mostraruno(trabajador f)
  {cout<<"Datos del Empleado"<<endl;
   cout<<"codigo : "<<f.cod<<endl;
   cout<<"nombre : "<<f.nom<<endl;
   cout<<"sueldo : "<<f.sueldobrut<<endl;
   }
   
int mayor(trabajador fijo[],int n)  //NOSE PORQUE COMPILA PERO NO LO APLICA EN EL PROGRAMA 
 {  int i,sueldomayor;
 	float mayor;
 	mayor=fijo[i].sueldonet;
 	sueldomayor=0;
 	for(i=1;i<n;i++)
		 if(fijo[i].sueldonet<mayor)
		 { mayor=fijo[i].sueldonet;
		 sueldomayor=i;	
		 }		
	  }       
 void modificacion(trabajador fijo[], int n)
  {int p,resp,op;
   int codigo;
   trabajador f;
    do
      {system("cls");
       cout<<"Modificacion de Datos"<<endl<<endl;
       cout<<"Codigo a buscar : ";
       cin>>codigo;
       p=buscarporcodigo(fijo,n,codigo);
       if(p!=-1)
        {mostraruno(fijo[p]);
         do
        {cout<<"Que campos desea Modificar "<<endl;
        cout<<"[1] Codigo [2] nombre [3] sueldo [4] salir"<<endl;
        cout<<"Ingrese opcion (1-6)";
        cin>>op;
        switch(op)
          {case 1 : cout<<"Nuevo codigo :";
           cin>>fijo[p].cod; break;
           case 2 : cout<<"Nuevo nombre :";
           fflush(stdin);
           gets(fijo[p].nom); break;
              
           case 3 :
                  do
                   {cout<<"Nuevo sueldo : ";
                     cin>>fijo[p].sueldobrut;
                     }while(fijo[p].sueldobrut<=0);break;
         }    
        }while(op!=4);
   }
        else
         cout<<"el codigo del producto no existe"<<endl;
         cout<<"Deseas modificar otro producto(1/0) ";
         cin>>resp;
      }while(resp==1);
 }  
void eliminacion(trabajador fijo[], int &n)
{int i,p;
  int codigo;
      char resp,preg;
      do 
       {system("cls");
        cout<<"Eliminacion de un registro "<<endl<<endl;
        cout<<"Codigo a buscar : ";
        cin>>codigo;
        p=buscarporcodigo(fijo,n,codigo);
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
{trabajador per[max];
char nb[max];
 int n,opcion,pos;
 n=0;   
 float total,sueldo[max];

  do
    {system("cls");
     opcion=menu();
     switch(opcion)
     {case 1: cargar(per,n);break;
      case 2: mostrar(per,n);break;
      case 3:system("cls"); 
          cout<<"Ingrese el codigo a buscar "<<endl;
          cin>>codigo;
          pos=buscarporcodigo(per,n,codigo);
        if(pos>=0)
           mostraruno(per[pos]);
        else    
           cout<<"el codigo del producto no existe"<<endl; break; 
      case 4:eliminacion(per,n);break; 
      case 5: cout<<"Orden descendente segun los sueldos"<<endl;
	          mayor(per,n);break;
      case 6: modificacion(per,n);break;                   
    }
    getche();
}while(opcion !=7);
 system("cls");
 cout<<"******GRACIAS POR USAR ESTE PROGRAMA =D ******"<<endl;
 
 system("pause");
 return 0;
 }

