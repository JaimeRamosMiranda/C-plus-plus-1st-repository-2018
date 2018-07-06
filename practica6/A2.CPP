
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iomanip>
using namespace std;
#define archivo "E:\\Alumnos.dat"
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
	F = fopen(archivo,"r+");
   //Consistencia de exito de apertura del archivo
   if (F == NULL)
   {
      printf("No se puede abrir el archivo\n");
      getch();
      exit(1);
   }
    cout<<"====================================================\n";
   cout<<setw(10)<<"Codigo"<<setw(20)<<"Nombre"<<setw(10)<<"Nota\n";
   cout<<"------------------------------------------------------\n";
	// aqui siempre debe empezar el ciclo de lectura 
	// y fread() regresa siempre cuantas estructuras leyo
	
   fread(&A, sizeof(A), 1, F);	
    while(!feof(F))
	{ 	// desplegando estructuras
        cout<<setw(10)<<A.Cod<<setw(20)<<A.Nombre<<setw(10)<<A.Nota<<endl;
        	
		cout<<"\n";
      fread(&A,sizeof(A),1,F);	
	}; // aqui termina while
	cout<<"-----------------------------------------------------\n";
	// no olvidar cerrar archivo y siempre fuera de while
	getche();
	
	fclose(F);
   printf("\n\n");

	system ("pause");
	return 0;
}
