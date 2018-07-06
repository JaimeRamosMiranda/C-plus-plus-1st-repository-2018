#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
#define dim 20
struct  personal
{
	int Cod;
	char Nombre[30];
	char sexo;
	int edad;
};
int main()
{
	FILE *F;
   personal reg;
   char rpta;
   int codigo;
   do
	{system ("cls");
	cout<<"Ingrese datos en la estructura "<<endl;
	cout<<"Codigo ---> ";
	    cin>>codigo;
   // abre el archivo datos.txt
   F = fopen("E:\\datos.txt","a+");
   //Consistencia de exito de apertura del archivo
   
	// crea el bucle para ingresar varios registros
	if (F == NULL)
   {
      cout<<"No se puede abrir el archivo\n";
      system("pause");
      exit(1);
   }

    
      fread(&reg,sizeof(reg),1,F);
     // Lee el "Registro", de tamano=sizeof(Registro) del archivo "f"
  while(!feof(F)) // Ciclo mientras no se encuentre el final del archivo
  {
    if(reg.Cod==codigo)
    {
       cout << "\n\n\n\rRegistro duplicado !!!";
       fclose(F);
       getch();
       exit(1);
    }
    fread(&reg,sizeof(reg),1,F);
  }       
             
	cout<<"Nombre ---> ";//Evita que salte
	 fflush(stdin);
   gets(reg.Nombre);
    fflush(stdin);
	cout<<"Sexo [M/F] -----> ";
    cin>>reg.sexo;
    cout<<"Edad       -----> ";
    cin>>reg.edad;
    reg.Cod=codigo;
 	// Graba los datos en archivo
   	fwrite(&reg, sizeof(reg), 1, F);
   	fclose(F);
   	cout<<"Desea Ingresar Otro registro (S/N)? ";
   	cin>>rpta;
    }while(rpta == 'S' || rpta == 's');
  //cierra el archivo
  //  fclose(F);
	
	system ("pause");
	return 0;
}
