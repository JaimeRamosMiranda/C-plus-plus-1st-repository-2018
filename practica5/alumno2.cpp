#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<iomanip>
using namespace std;
#define max 100
struct alumno
{int cod;
 char nombre[20];
 float ep,ef,pp,pl,pf;
 char obs[15];
};
int buscarcod(int codigo,alumno a[],int n)
 {int pos,i;
 pos=-1;
    for(i=0;i<n&&pos==-1;i++)
        { if(codigo==a[i].cod)
		  pos=i;
     }
   return pos;
}
int menu()
{int opcion;
 cout<<"\t\t\tMENU PRINCIPAL"<<endl;
 cout<<"\t\t\t=============="<<endl;
 cout<<"[1]:Captura datos"<<endl;
 cout<<"[2]:Mostrar Reporte"<<endl;
 cout<<"[3]:Busqueda por nombre "<<endl;
 cout<<"[4]:Busqueda por codigo "<<endl;
 cout<<"[5]:Ordena alfabetico"<<endl;
 cout<<"[6]:Ordena numerico"<<endl;
 cout<<"[7]:Modificar campos"<<endl;
 cout<<"[8]:Salir"<<endl;
 do
 {cout<<"Ingrese Una Opcion "<<endl;
  cin>>opcion;
 }while(opcion<1 || opcion>8);
 return opcion;
}
void leer(alumno a[], int &n)
{int pos,repite,codigo;
  do
    {cout<<"Ingrese Informacion del alumno "<<n+1<<endl;
      cout<<"Codigo : ";
     cin>>codigo;
      pos=buscarcod(codigo,a,n);
      if(pos==-1)
         {a[n].cod=codigo;
          cout<<"Nombres : "<<endl;
          fflush(stdin);
          gets(a[n].nombre);
          do
           { cout<<"Exa.Parcial : "<<endl;
             cin>>a[n].ep;
          }while(a[n].ep<0 || a[n].ep>20);
         do
          { cout<<"Exa.Final : "<<endl;
            cin>>a[n].ef;
          }while(a[n].ef<0 || a[n].ef>20);
        do
          { cout<<"Prom. practicas : "<<endl;
            cin>>a[n].pp;
          }while(a[n].pp<0 || a[n].pp>20);
          do
          { cout<<"Prom. laboratorio : "<<endl;
            cin>>a[n].pl;
          }while(a[n].pl<0 || a[n].pl>20);
          a[n].pf=(2*a[n].ep+4*a[n].ef+a[n].pp+a[n].pl)/8;
           if(a[n].pf>10.5)
            
             strcpy(a[n].obs,"APROBADO");
            
            else
            
              strcpy(a[n].obs,"DESAPROBADO");
            
             n=n+1;
        }
       else
      cout<<"el codigo ya esta registrado "<<endl;
      cout<<"Desea Ingresar otro alumn Si 1 No 0 "<<endl;
      cin>>repite;
  }while(repite == 1);
}
void mostrar(alumno a[],int n)
 {
 int i,ap,ad;
  ap=ad=0;
 cout<<"\n\n";
  cout<<setw(8)<<" CODIGO"<<setw(15)<<"NOMBRES"<<setw(10)<<"E.PARCIAL"<<setw(10)<<"E.FINAL"<<
 setw(10)<<" P.PRAC"<<setw(10)<<" P.FINAL"<<setw(15)<<"OBSERVACION"<<endl;
 cout<<"======================================================================================"<<endl;
 for(i=0;i<n;i++)
 {if(a[i].ef>=10.5)
     ap=ap+1;
   else
     ad=ad+1;  
 cout<<setw(8)<<a[i].cod<<setw(15)<<a[i].nombre<<setw(10)<<a[i].ep<<setw(10)<<a[i].ef<<
 setw(10)<<a[i].pp<<setw(10)<<a[i].pf<<setw(15)<<a[i].obs<<endl;
}
cout<<"======================================================================================"<<endl;
cout<<"Total aprobados :"<<ap<<endl;
cout<<"Total desaprobados :"<<ad<<endl;

}
void mostraralum(alumno a)
{
    cout<<"\nCodigo                      ==> "<<a.cod<<endl;
    cout<<"Nombre                        ==> "<<a.nombre<<endl;
    cout<<"Nota del parcial              ==> "<<a.ep<<endl;
    cout<<"Nota del final                ==> "<<a.ef<<endl;
    cout<<"Promedio de nota de practicas ==> "<<a.pp<<endl;
    cout<<"Promedio general              ==> "<<a.pf<<endl;
    cout<<"Observacion                   ==> "<<a.obs<<endl;
    cout<<endl;
}

int main()
 {alumno alu[max];

  int n,op,pos,codigo;
   n=0;
  leer(alu,n);
  cout<<"DATOS INGRESADOS"<<endl;
  mostrar(alu,n);
  getche();
  return 0;
}









