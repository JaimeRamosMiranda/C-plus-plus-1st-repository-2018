/*
3.- Escribir un algoritmo que permita ingresar el nombre y 3 notas de N alumnos 
y los almacene en un array de estructura. Controle que las notas estén entre 0 y 20.
Mediante un menú de opciones mostrar los alumnos aprobados, desaprobados y todos.

*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iomanip>
using namespace std;

#define dim 10
struct alumno{
	char codigo[10];
	char nombre[30];
	double n1,n2,n3;
	double pro;
	
};
void ingresardato(alumno A[], int n)
{ int i;

  for (i=0;i<n;i++)
	{cout<<"Ingrese datos del alumno : "<<(i+1)<<endl;

		cout<<"Codigo : ";//Falta consistenciar el codigo para evitar duplicidad
/*
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
                cout<<"­­ El codigo ya existe !!"<<endl;
          cout<<"Deseas ingresar otro empleado (1/0) "<<endl;
          cin>>rep;
          if(rep==0) break;      
       }       
}
*/
		
		cin>>A[i].codigo;
		cout<<"Nombre : ";
		fflush(stdin);
		gets(A[i].nombre);
		do
		 {
        cout<<"nota 1 : ";
		cin>>A[i].n1;
        }while(A[i].n1<0||A[i].n1>20);
         do
		 {
		cout<<"nota 2 : ";
		cin>>A[i].n2;
		}while(A[i].n2<0||A[i].n2>20);
		do
		 {
		cout<<"nota 3 : ";
		cin>>A[i].n3;
		}while(A[i].n3<0||A[i].n3>20);
        A[i].pro=(A[i].n1+A[i].n2+A[i].n3)/3.;
        

	  }



       getch();
}
void mostrarxorden_merito (alumno A[], int n)
{cout<<"\t\t\tLISTADO DE ALUMNOS POR ORDEN DE MERITO "<<endl;
 cout<<"\t\t\t====================================== "<<endl;
 cout<<setw(10)<<"CODIGO "<<setw(25)<<"NOMBRES   "<<setw(8)<<"NOTA 1"<<setw(8)<<"NOTA 2"<<setw(8)<<"NOTA 3"<<setw(10)<<"PROMEDIO"<<endl;
 
		for(int i=0;i<n;i++)
		cout<<setw(10)<<A[i].codigo<<setw(25)<<A[i].nombre<<setw(8)<<A[i].n1<<setw(8)<<A[i].n2<<setw(8)<<A[i].n3<<setw(10)<<A[i].pro<<endl;
		
	getch(); 
  }
void mostrartodo (alumno A[], int n)
{cout<<"\t\t\tLISTADO DE TODOS LOS ALUMNOS "<<endl;
 cout<<"\t\t\t============================ "<<endl;
 cout<<setw(10)<<"CODIGO "<<setw(25)<<"NOMBRES   "<<setw(8)<<"NOTA 1"<<setw(8)<<"NOTA 2"<<setw(8)<<"NOTA 3"<<setw(10)<<"PROMEDIO"<<endl;
 
		for(int i=0;i<n;i++)
		cout<<setw(10)<<A[i].codigo<<setw(25)<<A[i].nombre<<setw(8)<<A[i].n1<<setw(8)<<A[i].n2<<setw(8)<<A[i].n3<<setw(10)<<A[i].pro<<endl;
		
	getch(); 
  }  
void ordena(alumno A[], int n)
{int i,j;
 alumno t;
 for( i=0;i<n;i++)
   for( j=i+1;j<n;j++)
     if (A[i].pro<A[j].pro)
         {t=A[i];
          A[i]=A[j];
          A[j]=t;
          } 

	}
void aprobados(alumno A[], int n)
{ int i;
cout<<"\t\tALUMNOS APROBADOS"<<endl;
cout<<"\t\t================="<<endl;
cout<<setw(10)<<"CODIGO "<<setw(25)<<"NOMBRES   "<<setw(8)<<"NOTA 1"<<setw(8)<<"NOTA 2"<<setw(8)<<"NOTA 3"<<setw(10)<<"PROMEDIO"<<endl;
 
  for( i=0;i<n;i++)	
      {if(A[i].pro>10.5)
       	cout<<setw(10)<<A[i].codigo<<setw(25)<<A[i].nombre<<setw(8)<<A[i].n1<<setw(8)<<A[i].n2<<setw(8)<<A[i].n3<<setw(10)<<A[i].pro<<endl;
        }
	getch(); 
       
}   
void desaprobados(alumno A[], int n)
{ 
 int i;
cout<<"\t\tALUMNOS DESAPROBADOS"<<endl;
cout<<"\t\t===================="<<endl;
cout<<setw(10)<<"CODIGO "<<setw(25)<<"NOMBRES   "<<setw(8)<<"NOTA 1"<<setw(8)<<"NOTA 2"<<setw(8)<<"NOTA 3"<<setw(10)<<"PROMEDIO"<<endl;
 
  for( i=0;i<n;i++)	
      {if(A[i].pro<10.5)
       	cout<<setw(10)<<A[i].codigo<<setw(25)<<A[i].nombre<<setw(8)<<A[i].n1<<setw(8)<<A[i].n2<<setw(8)<<A[i].n3<<setw(10)<<A[i].pro<<endl;
        }
	getch(); 
       
}  
int menu()
{
	int opcion;

		do{
		system("cls");
			cout<<"  Menu  "<<endl;
			cout<<"Ingresar datos alumno ........[1]"<<endl;
			cout<<"Mostrar Todos los Alumno .....[2]"<<endl;
			cout<<"Mostrar por Orden de Merito ..[3]"<<endl;
			cout<<"Aprobados              .......[4]"<<endl;
			cout<<"Desaprobados            ......[5]"<<endl;
			cout<<"Salir.........................[6]"<<endl;
			cout<<"Ingrese opcion : ";
			cin>>opcion;
		}while(opcion<1 || opcion>6);
	 return opcion;
  }


int main()
{ int n,op;
	alumno A[dim];
	cout<<"Ingrese el numero de alumnos : "<<endl;
	cin>>n;
	do
	 {system("cls");

		op=menu();
			switch(op)
			{
			case 1: ingresardato(A,n);
				break;
			case 2:system("cls"); 
                 mostrartodo(A,n);
				break;
			case 3:system("cls"); 
			       ordena(A,n);
			       mostrarxorden_merito (A,n);
                 
				break;
			case 4:system("cls");
                   
                   aprobados(A,n);
                   
				break;
			case 5:system("cls");
                  
                   desaprobados(A,n);
                   
                   break;
           
			       
				
			case 6: system("cls");
			        cout<<" Proceso finalizado con exito ..........."; break;
			}
	 }while(op!=6);
		getch();
}
