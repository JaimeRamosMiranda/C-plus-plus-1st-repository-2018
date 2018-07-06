#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iomanip>
using namespace std;
#define archivo "E:\\Alumnos.dat"
#define archivo1 "E:\\temporal.dat"
// Elimina Registro
struct  ALUMNO
{
	int Cod;
	char Nombre[30];
	int Nota;
};
int main()
{
	system("cls");
   FILE *F;
   FILE *G;  
   ALUMNO A;
   char op;
   int encontrado=0, Codigo;
	cout<<"Ingrese Codigo a Eliminar ---> ";
	
   cin>>Codigo;
	//abriendo, leyendo,cargando estructura
	F = fopen(archivo,"r+");
   if (F == NULL)
   {
      cout<<"No se puede abrir el archivo\n";
      getche();
      exit(1);
   } 
	G = fopen(archivo1,"a+");
   if (G == NULL)
   {
      cout<<"No se puede abrir el archivo\n";
      getche();
      exit(1);
   }
  cout<<"=================================================\n";
  cout<<setw(10)<<"Codigo"<<setw(20)<<"Nombre"<<setw(10)<<"Nota\n";
  cout<<"-------------------------------------------------\n";
   fread(&A, sizeof(A), 1, F);	
   while(!feof(F))
	{ 	//  Registro Buscado
      if(Codigo != A.Cod)
        {
                   
         fwrite(&A, sizeof(A), 1, G);
	               
        }
       else   
          encontrado =1;  
      fread(&A, sizeof(A), 1, F);	
	}
	// no olvidar cerrar archivo y siempre fuera de while
	fclose(F);
	fclose(G);
   //Recordar que los nombres Directorios/carpetas y Archivos de datos no
	// pueden tener mas de 8  caracteres
 	remove(archivo); // Elimina
  
	rename(archivo1, archivo); //Cambia de nombre
    		
   if(encontrado == 0)
      printf("No existe ese CODIGO ...\n\n");
   else
	  printf("Registro Eliminado\n\n");
	  getche();system ("pause");
	  return 0;
}
