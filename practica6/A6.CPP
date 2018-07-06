#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iomanip>
using namespace std;
#define archivo "E:\\Alumnos.dat"
#define archivo1 "E:\\temporal.dat"
// Modifica campos
struct  ALUMNO
{
	int Cod;
	char Nombre[30];
	int Nota;
};
int main()
{int op,op1;
	system("cls");
	FILE *F;
   FILE *G;  
    ALUMNO A;
   int encontrado=0, Codigo;
	cout<<"Codigo a Actualizar ---> ";
	cin>>Codigo;
	//abriendo, leyendo,cargando estructura
	F = fopen(archivo,"r+");
   if (F == NULL)
   {
      cout<<"No se puede abrir el archivo\n";
     
      system ("pause");
       exit(1);
   } 
	G = fopen(archivo1,"a+");
   if (G == NULL)
   {
      cout<<"No se puede abrir el archivo\n";
      exit(1);
      system ("pause");
   }
  cout<<"======================================================\n";
   cout<<setw(10)<<"Codigo"<<setw(20)<<"Nombre"<<setw(10)<<"Nota\n";
   cout<<"-------------------------------------------------------\n";
   fread(&A, sizeof(A), 1, F);	
   while(!feof(F))
	{ 	//  Registro Buscado
             if(Codigo == A.Cod)
               {  do
                    {
                     cout<<"ACTUALIZAR CAMPOS "<<endl;
                     cout<<" 1: Nombres "<<endl;
                     cout<<" 2: Nota "<<endl;
                     cout<<"Ingrese que Desea Modificar "<<endl;
                     cin>>op;
         
                      switch(op)
                        {case 1: cout<<"Nuevo Nombre ---> ";
	                      fflush(stdin);
                         gets (A.Nombre); break;
                         case 2: cout<<"Nueva Nota -----> ";
                               cin>>A.Nota; break;
                        }        
                    cout<<"Desea actualizar otro campo ? Si [1] No [0]  ";
                    cin>>op1;
                    }while(op1!=0);
                 encontrado = 1;  
               fwrite(&A, sizeof(A), 1, G);      
            }
       else
        
      fwrite(&A, sizeof(A), 1, G);
      fread(&A, sizeof(A), 1, F);	
	}
	// no olvidar cerrar archivo y siempre fuera de while
	fclose(F);
	fclose(G);
   
 	remove(archivo); // Elimina
    rename(archivo1, archivo); //renombre
   
	//avisando
   if(encontrado == 0)
      printf("No existe el CODIGO ...\n\n");
   else
	  printf("Registro Actualizado\n\n");
	  cout<< " Alumno actualizado con exito    "<<endl;
	  getche();system ("pause");
	  
}
