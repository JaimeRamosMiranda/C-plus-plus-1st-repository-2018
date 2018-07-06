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
   personal reg,regtemporal,registro[dim];
   int i,n,c=0,j;
   // abre el archivo datos.txt
   F = fopen("E:\\datos.txt","r");
   //Consistencia de exito de apertura del archivo
   if (F == NULL)
   {
      printf("No se puede abrir el archivo\n");
      getche();
      exit(1);
   }

	
	// aqui siempre debe empezar el ciclo de lectura 
	   fread(&reg, sizeof(reg), 1, F);	
	//crea el bucle mientras no sea el final del archivo
	while(!feof(F))
	{ 	// guarda el registro leido en el arrays de estructuras
        registro[c]=reg;
        c=c+1;      	
	// lee el siguiente registro del archivo	
      fread(&reg,sizeof(reg),1,F);	
	}; // aqui termina while
	// no olvidar cerrar archivo y siempre fuera de while

	fclose(F);
   // ordena los registros utilizando el array de estructuras
  
      for(i=0;i<c;i++ )
	  for(j=i+1;j<c;j++)
	  
		  if (strcmp(registro[i].Nombre,registro[j].Nombre)>0)
			  {regtemporal=registro[i];

			  registro[i]=registro[j];
			  registro[j]=regtemporal;
			  }
     
    //Imprime los registros ordenados
    system ("cls");
    cout<<"                LISTADO DEL PERSONAL   "<<endl<<endl<<endl;
	 cout<<"===================================================================\n";
   cout<<setw(10)<<"Codigo"<<setw(20)<<"Nombre"<<setw(10)<<"Sexo"<<setw(10)<<"Edad\n";
   cout<<"-----------------------------------------------------------------------\n";
   for (i=0;i<c;i++)
     cout<<setw(10)<<registro[i].Cod<<setw(20)<<registro[i].Nombre<<setw(10)<<registro[i].sexo<<setw(10)<<registro[i].edad<<endl;

         
  getche();
	system ("pause");
	return 0;
	}
