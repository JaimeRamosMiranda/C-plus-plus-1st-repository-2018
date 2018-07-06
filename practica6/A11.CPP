#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iomanip.h>
#include <iostream.h>
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
    system("cls");
	FILE *F;
   personal reg,regtemporal,registro[dim];
   int i,n,c=0,j,opc;
   // abre el archivo datos.txt
   F = fopen("e:\\datos.txt","r");
   //Consistencia de exito de apertura del archivo
   if (F == NULL)
   {
      printf("No se puede abrir el archivo\n");
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
    do  
     {
    system("cls");
	cout<<"MENU DE OPCIONES"<<endl;
	cout<<"ORDENAR POR"<<endl;
	cout<<"\n[1]:  Nombre ";
	cout<<"\n[2]:  Edad ";
	cout<<"\n[3]:  Sexo ";
	cout<<"\n[4]:  Finalizar ";
	  do
		{cout<<"INGRESE UNA OPCION : ";
		 cin>>opc;
		 }while (opc<1 || opc>4);
   // ordena los registros utilizando el array de estructuras
  
  
      for(i=0;i<c;i++ )
	  for(j=i+1;j<c;j++)
	    switch(opc)
	    {case 1:
		  if (strcmp(registro[i].Nombre,registro[j].Nombre)>0)
			  {regtemporal=registro[i];

			  registro[i]=registro[j];
			  registro[j]=regtemporal;
			  } break;
		 case 2: if(registro[i].edad >registro[j].edad)
					  {regtemporal=registro[i];
						registro[i]=registro[j];
						registro[j]=regtemporal;
						}break;
		case 3: if(registro[i].sexo >registro[j].sexo)
					  {regtemporal=registro[i];
						registro[i]=registro[j];
						registro[j]=regtemporal;
						}break;
		case 4: system("cls");
                cout<<"Fin proceso .... ";
                system("pause");
                break;				
		 }	  
    
    //Imprime los registros ordenados

  
    system ("cls");
    cout<<"                LISTADO DEL PERSONAL   "<<endl<<endl<<endl;
	 cout<<"===================================================================\n";
   cout<<setw(10)<<"Codigo"<<setw(20)<<"Nombre"<<setw(10)<<"Sexo"<<setw(10)<<"Edad\n";
   cout<<"-----------------------------------------------------------------------\n";
   for (i=0;i<c;i++)
     cout<<setw(10)<<registro[i].Cod<<setw(20)<<registro[i].Nombre<<setw(10)<<registro[i].sexo<<setw(10)<<registro[i].edad<<endl;

         

	system ("pause");
	}while (opc!=4);
	return 0;
	}


