#include <iostream.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iomanip.h>
#define dim 20
struct  personal
{
	int Cod;
	char Nombre[30];
	char sexo;
	int edad;
};
int main()
{system("cls");
	FILE *F;
   personal reg;
   char rpta;
   // abre el archivo datos.txt
   F = fopen("E:\\datos.txt","r");
   //Consistencia de exito de apertura del archivo
   if (F == NULL)
   {
      printf("No se puede abrir el archivo\n");
      getche();
      exit(1);
   }

	system ("cls");
	 cout<<"===================================================================\n";
   cout<<setw(10)<<"Codigo"<<setw(20)<<"Nombre"<<setw(10)<<"Sexo"<<setw(10)<<"Edad\n";
   cout<<"-----------------------------------------------------------------------\n";
	// aqui siempre debe empezar el ciclo de lectura 
	   fread(&reg, sizeof(reg), 1, F);	
	//crea el bucle mientras no sea el final del archivo
	while(!feof(F))
	{ 	// desplegando estructuras
        cout<<setw(10)<<reg.Cod<<setw(20)<<reg.Nombre<<setw(10)<<reg.sexo<<setw(10)<<reg.edad<<endl;
        	
		cout<<"\n";
      fread(&reg,sizeof(reg),1,F);	
	}; // aqui termina while
	// no olvidar cerrar archivo y siempre fuera de while
	system ("pause");
	fclose(F);
   printf("\n\n");
   getche();
	system ("pause");
	return 0;
	}
