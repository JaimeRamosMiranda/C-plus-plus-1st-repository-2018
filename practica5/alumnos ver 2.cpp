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
//alumno a, temp[50];


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
int buscarcod(int codigo,alumno a[],int n)
 {int pos,i;
 pos=-1;
    for(i=0;i<n;i++)
        {
        
	      if(codigo==a[i].cod)
		  pos=i;
     }
   return pos;
}
void ordena(float nota[])
{int i,j;
  float t;
  for(i=0;i<5;i++)
     for(j=i+1;j<5;j++)
       if(nota[i]>nota[j])
        { t=nota[i];
         nota[i]=nota[j];
         nota[j]=t;
         }
   }
float promedio()
{int i;
  float nota[5],pro,s,me;
  s=0;
  for(i=0;i<5;i++)
   {cout<<"NOTA  "<<i+1<<endl;
    cin>>nota[i];
   
   }
  
   ordena(nota);
   
    for(i=1;i<5;i++)
        s=s+nota[i];
        cout<<"suma : "<<s;getche();
   pro=s/4;
   
   return pro;
}         

void leer(alumno a[], int &n)
{int pos,repite,codigo;
  int tap=0;int tdes=0;
  do
    {cout<<"Ingrese Informacion del alumno "<<n+1<<endl;
      cout<<"Codigo : ";
     cin>>codigo;
      //fflush(stdin);
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
        cout<<"INGRESE LAS PRACTICAS DEL ALUMNO "<<n+1<<endl;         
        a[n].pp=promedio();
         cout<<"INGRESE LAS NOTAS DE LABORATORIO DEL ALUMNO "<<n+1<<endl;         
        a[n].pl=promedio();  
           a[n].pf=(3*a[n].ep + 4*a[n].ef + a[n].pp + a[n].pl )/9;

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
void mostraralum(alumno a)
{
    cout<<"\nCodigo ==> "<<a.cod<<endl;
    cout<<"Nombre ==> "<<a.nombre<<endl;
    cout<<"Nota del parcial ==> "<<a.ep<<endl;
    cout<<"Nota del final ==> "<<a.ef<<endl;
    cout<<"Promedio de nota de practicas ==> "<<a.pp<<endl;
    cout<<"Promedio general ==> "<<a.pf<<endl;
    cout<<"Observacion ==> "<<a.obs<<endl;
    cout<<endl;
}


void mostrar(alumno a[],int n)
 {
 int i;
   int tap=0;int tdes=0;
 cout<<"\n\n";
  cout<<setw(8)<<" CODIGO"<<setw(15)<<"NOMBRES"<<setw(10)<<"E.PARCIAL"<<setw(10)<<"E.FINAL"<<
 setw(10)<<" P.PRAC"<<setw(10)<<" P.FINAL"<<setw(15)<<"OBSERVACION"<<endl;

 for(i=0;i<n;i++)
 {if(a[i].pf>10.5)
     tap=tap+1;
   else
     tdes=tdes+1;  
cout<<setw(8)<<a[i].cod<<setw(15)<<a[i].nombre<<setw(10)<<a[i].ep<<setw(10)<<a[i].ef<<
 setw(10)<<a[i].pp<<setw(10)<<a[i].pf<<setw(15)<<a[i].obs<<endl;
}

cout<<"TOTAL DE APROBADOS    : "<<tap<<endl;
cout<<"TOTAL DE DESAPROBADOS : "<<tdes<<endl;
getche();
}

int busqueda(alumno a[],int n)
 { int pos,i;
 char nomb[20];
  pos=-1;
   cout<<"\n\n";
   cout<<"\tIngrese el Nombre a buscar: ";
  fflush(stdin);
   gets(nomb);
 for(i=0;i<n&&pos==-1;i++)
   if(strcmp(a[i].nombre,nomb)==0)
      pos=i;
       
       
  return pos;
}

void ordenaalfabetico(alumno a[],int n)
{int i,j;
 alumno t;
 for(i=0;i<n;i++)
   for(j=i+1;j<n;j++)
     if(strcmp(a[i].nombre,a[j].nombre)>0)
        {t=a[i];
         a[i]=a[j];
         a[j]=t;
         }
}
void ordenanumerico(alumno a[],int n)
{int i,j;
 alumno t;
 for(i=0;i<n;i++)
   for(j=i+1;j<n;j++)
     if(a[i].pf>a[j].pf)
        {t=a[i];
         a[i]=a[j];
         a[j]=t;
         }
}
void modificardato(alumno a[],int n)
{    int codigo,pos,opc,modi;
        
        cout<<"Modificar datos"<<endl;
        cout<<"================="<<endl<<endl;
        cout<<"Ingrese el codigo del alumno a modificar ; ";
        cin>>codigo;
       pos=buscarcod(codigo,a,n);
        if(pos!=-1)
          {  for(;;)
               {
                do{

                    cout<<"\t\tLISTA DE OPCIONES"<<endl;
                    cout<<"\t==============================="<<endl<<endl;
                    cout<<"\t[1]...Codigo"<<endl;
                    cout<<"\t[2]...Nombre"<<endl;
                    cout<<"\t[3]...Examen parcial"<<endl;
                    cout<<"\t[4]...Examen final"<<endl;
                    cout<<"\t[5]...Promedio de practicas"<<endl;
                    cout<<"\t\nIngrese la opcion a modificar ==>";
                    cin>>opc;
                }while(opc<1 || opc>5);

                switch(opc)
				{
                    case 1: cout<<"Ingreser el nuevo codigo ==> ";
                            cin>>a[pos].cod;
                            break;
                    case 2: cout<<"Ingreser el nuevo nombre ==> ";
                            cin>>a[pos].nombre;break;

                    case 3:
                            do{
                                cout<<"Ingrese la nuevo nota del parcial ==> ";
                                cin>>a[pos].ep;
                            }while(a[pos].ep<0 || a[pos].ep>20);

                            cout<<"\n La nota se corrigio exitosamente."<<endl;break;

                    case 4: do{
                                cout<<"Ingrese la nuevo nota del examen final ==> ";
                                cin>>a[pos].ef;
                            }while(a[pos].ef<0 || a[pos].ef>20);
                           
                            cout<<"\n La nota se corrigio exitosamente."<<endl;break;

                    case 5: do{
                                cout<<"Ingrese la nuevo nota del prom. practica==> ";
                                cin>>a[pos].pp;
                            }while(a[pos].pp<0 || a[pos].pp>20);
                          
                            cout<<"\n La nota se corrigio exitosamente."<<endl;break;
                }
                 cout<<"Desea modificar otro campo Si 1 No 0";
		   cin>>modi;
		   if(modi==0)break;
	}
	cout<<"se modifico exitosamente "<<endl;
	getche();
				 a[pos].pf=(3*a[pos].ep + 4*a[pos].ef + a[pos].pp)/8;

                  if(a[pos].pf>10.5)
                     strcpy(a[pos].obs,"APROBADO");
                      else
                       strcpy(a[pos].obs,"DESAPROBADO");

          }
                   else
                   cout<<"El codigo no esta registrado ";
          
	
 }

int main()
 {alumno alu[max];

  int n,op,pos,codigo;
  n=0;

 do
 {system("cls");
  op=menu();
  switch(op)
   {case 1: leer(alu,n);break;
    case 2:cout<<"\t\t\t\tLISTADO DE ALUMNOS"<<endl;
           cout<<"\t\t\t\t=================="<<endl;
          mostrar(alu,n);break;
    case 3: pos=busqueda(alu,n);
             if (pos>=0)
                 mostraralum(alu[pos]);
                 else
                 cout<<"El alumno no esta registrado";
                 system("pause");break;
   case 4: cout<<"Ingrese el codigo del alumno a buscar ; ";
        cin>>codigo;
         pos=buscarcod(codigo,alu,n);
             if (pos>=0)
                 mostraralum(alu[pos]);
                 else
                 cout<<"El alumno no esta registrado";
                 system("pause");break;
    case 5: ordenaalfabetico(alu,n);
             cout<<"\t\t\tLISTADO EN ORDEN ALFABETICO"<<endl;
             cout<<"\t\t\t==========================="<<endl;
              mostrar(alu,n);break;
   case 6: ordenanumerico(alu,n);
             cout<<"\t\t\tLISTADO POR ORDEN DE MERITO"<<endl;
             cout<<"\t\t\t==========================="<<endl;
              mostrar(alu,n);break;
    case 7: modificardato(alu,n); break;
    }
}while(op!=8);
system("cls");
cout<<"***************** FIN PROCESO ********************";
getche();
return 0;
}
