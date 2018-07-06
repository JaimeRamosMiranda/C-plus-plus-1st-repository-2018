/*
4.- Ingresar el nombre, edad, y sexo de N personas, los almacene en un array de estructura y mediante un menú de opciones se muestre ordenados por:
"	Nombre
"	Edad
"	Sexo
"	Finalizar
Desarrolle usando funciones para cada caso //metodo de ordenamiento por campos
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iomanip>
using namespace std;
#define dim 10
struct personal{

	char nombre[20];
	int edad;
	char sexo;

};
int menu();
int menu1();
void ingresar();
void ordenar(int opc);
void mostrar();
	personal p[5];
	int opc,n;
int main()
  {system("cls");
   int opc1;
    cout<<"Ingrese numero de personas :";
    cin>>n;

	 do
	  {opc1=menu1();
	    switch (opc1)
	     {case 1:	ingresar();break;
		  case 2:opc=menu();	
               ordenar(opc);break;
          }	
			
		}while(opc1!=3);
	 system("cls");
                cout<<"Fin proceso .... ";
                system("pause");
     return 0;           						
	 }
int menu1()
  {int opc1;
	system("cls");
	cout<<"MENU DE PRINCIPAl"<<endl;

	cout<<"\n[1]:  Ingresar Datos ";
	cout<<"\n[2]:  Ordenar";
	cout<<"\n[3]:  Salir ";
	
	  do
		{cout<<"INGRESE UNA OPCION : ";
		 cin>>opc1;
		 }while (opc1<1 || opc1>3);
	return opc1;
	}	 
	 
 int menu()
  {
	system("cls");
	cout<<"MENU DE ORDENAMIENTO"<<endl;
	cout<<"ORDENAR POR"<<endl;
	cout<<"\n[1]:  Nombre ";
	cout<<"\n[2]:  Edad ";
	cout<<"\n[3]:  Sexo ";
	cout<<"\n[4]:  Finalizar ";
	  do
		{cout<<"INGRESE UNA OPCION : ";
		 cin>>opc;
		 }while (opc<1 || opc>4);
	return opc;
	}

  void ingresar()
	 {int i;
	 char s;
	  for (i=0;i<n;i++)
		{ system ("cls");
		 cout<<"Datos del personal : "<<(i+1)<<endl;
		 cout<<"Nombre :";
		 fflush(stdin);
		 gets(p[i].nombre);
		 do{
		 cout<<"Edad : ";cin>>p[i].edad;
		 }while(p[i].edad<0);
		 do{
		 cout<<"Sexo (M) masculino o (F) femenino: ";
		 cin>>p[i].sexo;
		 s=toupper(p[i].sexo);
		 }while(s!='M' && s!='F');
		 
		 }
	  }



  void ordenar(int opc)
  {int i,j;
  personal t;
	
	for(i=0;i<n;i++ )
	  for(j=i+1;j<n;j++)
	  switch(opc)
		{case 1:
		  if (strcmp(p[i].nombre,p[j].nombre)>0)
			  {t=p[i];

			  p[i]=p[j];
			  p[j]=t;
			  }
               break;
		 case 2: if(p[i].edad >p[j].edad)
					  {t=p[i];
						p[i]=p[j];
						p[j]=t;
						} 
                        break;
		case 3: if(p[i].sexo >p[j].sexo)
					  {t=p[i];
						p[i]=p[j];
						p[j]=t;
						} break;
	
		 }
   mostrar();
  }

 void mostrar()
  {int i;
	system("cls");
	cout<<setw(25)<<"NOMBRES  "<<setw(10)<<" EDAD "<<setw(10)<<"SEXO "<<endl;
	for(i=0;i<n;i++)
	 cout<<setw(25)<<p[i].nombre<<setw(10)<<p[i].edad<<setw(10)<<p[i].sexo<<endl;
	 cout<<"Presione cualquier tecla para continuar ";
	 getch();
	 }



