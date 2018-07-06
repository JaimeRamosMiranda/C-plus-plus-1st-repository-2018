#include <conio.h>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include<string.h>
using namespace std;

#define max 3


struct tienda
{int cod;
 char nom[30];
 float v[12];
 float sal;
 };

 void ingreso(tienda t[],int n)
  {int i,j;
	for (i=0;i<n;i++)
		 {	cout<<"iNGRESE DATOS DEL EMPLEADO # "<<(i+1)<<endl;
			cout<<" CODIGO	: ";
			cin>>t[i].cod;
			cout<<" Nombre	: ";
			cin>>t[i].nom;
			for(j=1;j<=3;j++)
			 {cout<<"Ingrese ventas del mes "<<j;
			  cin>>t[i].v[j];
			  }
			 cout<<"Salario : ";
			 cin>>t[i].sal;
			 }

  }
	void mostrar(tienda t[],int n)
  {int i,j;
   system("cls");
	 cout<<setw(10)<<"CODIGO "<<setw(30)<<"NOMBRES "<<setw(10)<<"salario"<<endl;

	 for(i=0;i<n;i++)
	 {cout<<setw(10)<<t[i].cod<<setw(30)<<t[i].nom<<setw(10)<<t[i].sal<<endl;
	  cout<<"VENTAS POR MES EN TODO EL AÑO "<<endl;
	  for(j=1;j<=3;j++)
		  cout<<setw(15)<<t[i].v[j]<<endl;
	 }
	}
	//***************
	void mayven(tienda t[],int n)
  {int i,j,pos;
	float maven;
	  float suma;
		maven=-1;
	 for(i=0;i<n;i++)
	 {suma = 0;
	  for(j=1;j<=3;j++)
		  suma = suma + t[i].v[j];
		  if(suma > maven)
			 {maven=suma;
			  pos = i;
			  }
	 }
	 cout<<"Vendedor con mayor venta durante el año "<<endl;
	 cout<<" Codigo : "<<t[pos].cod<<endl;
	 cout<<" Nombre : "<<t[pos].nom<<endl;
	 }

		int main()
		  {int l;
		  system("cls");
			tienda ven[max];
		  cout<<"Ingrese Nº de registros ";
			cin>>l;

			ingreso (ven,l);

			mostrar(ven,l);
			mayven(ven,l);
			system("pause");
			}
