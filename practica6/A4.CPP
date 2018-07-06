#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iomanip>
using namespace std;
#define archivo "E:\\Alumnos.dat"
// Busqueda por Rango
struct  ALUMNO
{
	int Cod;
	char Nombre[30];
	int Nota;
};
int main()
{system("cls");
	FILE *F;
   ALUMNO A;
	
   int Nota,encontrado,rep=1;
   do
   {
// cargando clave a buscar
	cout<<"Nota >= --> ";
	cin>>Nota;
	//abriendo, leyendo,cargando estructura
	F = fopen(archivo,"r+");
   if (F == NULL)
   {
      cout<<"No se encontro Archivo, No se puede abrir el archivo\n";
      getche();
      exit(1);
   }
    cout<<"=================================================\n";
   cout<<setw(10)<<"Codigo"<<setw(20)<<"Nombre"<<setw(10)<<"Nota\n";
   cout<<"-------------------------------------------------\n";
	// aqui siempre debe empezar el ciclo de lectura 
	// y fread() regresa siempre cuantas estructuras leyo
   encontrado = 0;
   fread(&A,sizeof(A),1,F);	
   while(!feof(F))
	{ 	// desplegando Registro Buscado
       if(A.Nota >= Nota)
      
      {encontrado = 1;
         cout<<setw(10)<<A.Cod<<setw(20)<<A.Nombre<<setw(10)<<A.Nota<<endl;
         
         }
      fread(&A, sizeof(A), 1, F);	
	}; // aqui termina while
	// no olvidar cerrar archivo y siempre fuera de while
	if (encontrado == 0)
	   cout<<"Ninguno Cumple con esta Condicion "<<endl;
     system ("pause");
     cout<<"Desea realizar otra busqueda si=1 no = 0)"<<endl;
     cin>>rep;
     }while (rep == 1);
     system("cls");
     cout<<"Fin Busqueda "<<endl;
     system ("pause");   
	fclose(F);
}
