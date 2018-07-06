#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
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
   char rpta;
   int codigo;
    // captura de campos de datos
  	// crea el bucle para ingresar varios registros
	do
	{system ("cls");
	  cout<<"Ingrese el codigo a registrar : ";
	  cin>>codigo;
	  F = fopen(archivo,"a+");
   //Consistencia de exito de apertura del archivo
      if (F == NULL)
        {cout<<"No se puede abrir el archivo\n";
          getche();
          exit(1);
         }
      fread(&A,sizeof(A),1,F);
      
     // Lee el "Registro", de tamano=sizeof(Registro) del archivo "f"
      while(!feof(F)) // Ciclo mientras no se encuentre el final del archivo
        { 
           if(A.Cod==codigo)
             {
             cout << "\n\n\n\rRegistro duplicado !!!";
             fclose(F);
             getch();
             exit (0);
             }
         fread(&A,sizeof(A),1,F);
        }
	
    // captura de campos de datos
 	cout<<"Ingrese datos "<<endl;
   
    A.Cod=codigo;
    cout<<"Nombre ---> ";
    fflush(stdin);
    gets(A.Nombre);
    do
    {
	cout<<"Nota -----> ";
    cin>>A.Nota;
    }while(A.Nota<0 || A.Nota>20);
	// grabando a disco
	fwrite(&A, sizeof(A), 1, F);
    fclose(F);
	cout<<"Alumno Archivado\n\n";
	cout<<"Desea Ingresar Otro registro (S/N)? ";
   	cin>>rpta;
    
	}while(rpta == 'S' || rpta == 's');
	
		
	system ("pause");
	return 0;
}
