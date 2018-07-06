#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iomanip>
using namespace std;
#define archivo "E:\\Alumnos.dat"
// Busqueda Numerica
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
	
   int Codigo,encontrado,rep=1;
   do
   {system("cls");
   
// cargando clave a buscar
	cout<<"Codigo a  buscar ---> ";
	cin>>Codigo;
	//abriendo, leyendo,cargando estructura
	F = fopen(archivo,"r+");
   if (F == NULL)
   {
      printf("No se encuentra el Archivo, No se puede abrir el archivo\n");
      getche();
      exit(1);
   }
   encontrado = 0;
	// aqui siempre debe empezar el ciclo de lectura 
	// y fread() regresa siempre cuantas estructuras leyo
  
   fread(&A,sizeof(A),1,F);	
   while(!feof(F))
	{ 	// desplegando Registro Buscado
      if(A.Cod == Codigo && encontrado !=1)
      {encontrado = 1;
       cout<<" Codigo    :"<<A.Cod<<endl;
       cout<<" Nombres   :"<<A.Nombre<<endl;
       cout<<" Nota      :"<<A.Nota<<endl;
       
      }
      fread(&A, sizeof(A), 1, F);	
	}; // aqui termina while

	if (encontrado == 0)
	   cout<<"El alumno no esta registrado"<<endl;
     system ("pause");
     cout<<"Desea relizar otra busqueda si=1 no = 0)"<<endl;
     cin>>rep;
     }while (rep == 1);
     system("cls");
     cout<<"Fin Busqueda "<<endl;
     system ("pause");   
	fclose(F);
}
