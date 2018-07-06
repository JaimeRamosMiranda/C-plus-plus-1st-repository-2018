#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iomanip>
#define archivo  "E:\\Alumnos.dat"
#define archivo1 "E:\\temporal.dat"
using namespace std;
struct  ALUMNO
{
	int Cod;
	char Nombre[30];
	int Nota;
};

void CrearData();
void MostrarData();
void Buscarxcodigo();
void Buscarxnombre();
void BuscarFiltroData();
void EliminarData();
void ModificarData();
int menu();
int main()
{
   int   op;
   FILE *F;
   ALUMNO A;
   do
   {system("cls");
   op=menu();


   switch (op)
   {
      case 1:     CrearData();
                  break;
      case 2:     system("cls");
                  MostrarData();
                  getche();
                  break;
      case 3:     Buscarxcodigo();
                  break;
      case 4:     Buscarxnombre();
                  break;
      case 5:     BuscarFiltroData();
                  break;
      case 6:     EliminarData();
                  break;
      case 7:
           ModificarData();
                  break;

   }
    } while (op!=8);
   system("cls");
    cout<<"FIN PROCESO HASTA PRONTO !!!!!!!"<<endl;
     getche();
    
   return (0);
}
int menu()
{int op;
    do {system("cls");
      cout<<"\t\t\tREGISTRO DE ALUMNOS\n\n";
      cout<<"\t\t1 Crear \n";
      cout<<"\t\t2 Mostrar  \n";
      cout<<"\t\t3 Buscar por codigo \n";
      cout<<"\t\t4 Buscar por Nombre \n";
      cout<<"\t\t5 Buscar con filtro \n";
      cout<<"\t\t6 Eliminar \n";
      cout<<"\t\t7 Modificar \n";
      cout<<"\t\t8 Terminar \n";
      cout<<"Ingrese su opcion ---> ";
      cin>>op;
      }
   while (op<1 || op>8);
   return op;
}
void CrearData()
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
   {
      printf("No se puede abrir el archivo\n");
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
       return;
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
     {cout<<"Nota -----> ";
      cin>>A.Nota;
      }while(A.Nota <0 || A.Nota >20);

	// grabando a disco
	fwrite(&A, sizeof(A), 1, F);
	cout<<"Desea Ingresar Otro registro (S/N)? ";
   	cin>>rpta;

	fclose(F);
	}while(rpta == 'S' || rpta == 's');
	//avisando usuario
	cout<<"Alumno Archivado\n\n";
	system ("pause");


	system ("pause");

}

void MostrarData()
{system("cls");
   FILE *F;
   ALUMNO A;
	F = fopen(archivo,"r+");
   //Consistencia de exito de apertura del archivo
   if (F == NULL)
   {
      printf("No se puede abrir el archivo\n");
      getche();
      exit(1);
   }
    cout<<"====================================================\n";
   cout<<setw(10)<<"Codigo"<<setw(20)<<"Nombre"<<setw(10)<<"Nota\n";
   cout<<"------------------------------------------------------\n";
	// aqui siempre debe empezar el ciclo de lectura

   fread(&A, sizeof(A), 1, F);

   while(!feof(F))
	{ 	// desplegando estructuras
        cout<<setw(10)<<A.Cod<<setw(20)<<A.Nombre<<setw(10)<<A.Nota<<endl;

		cout<<"\n";
      fread(&A,sizeof(A),1,F);
	}; // aqui termina while
	cout<<"---------------------------------------------------------"<<endl;
	// no olvidar cerrar archivo y siempre fuera de while
	system ("pause");
	fclose(F);
   printf("\n\n");

	system ("pause");

}

void Buscarxcodigo()
{system("cls");
	FILE *F;
   ALUMNO A;

   int Codigo,encontrado,rep=1;
   do
   {
// cargando clave a buscar
	cout<<"Codigo a  buscar ---> ";
	cin>>Codigo;
	//abriendo, leyendo,cargando estructura
	F = fopen(archivo,"r+");
   if (F == NULL)
   {
      printf("No se puede abrir el archivo\n");
      getche();
      exit(1);
   }
   
	// aqui siempre debe empezar el ciclo de lectura

   encontrado = 0;
   fread(&A,sizeof(A),1,F);
   while(!feof(F))
	{ 	// desplegando Registro Buscado
      if(A.Cod == Codigo)
      {encontrado = 1;
      cout<<"Codigo     :"<<A.Cod<<endl;
      cout<<"Nombres    :"<<A.Nombre<<endl;
      cout<<"Nota       :"<<A.Nota<<endl;
       
      }
      fread(&A, sizeof(A), 1, F);
	}; // aqui termina while
	// no olvidar cerrar archivo y siempre fuera de while
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

void Buscarxnombre()
{system("cls");
	FILE *F;
   ALUMNO A;
	char nom[30];
   int encontrado,rep=1;
   do
   {
// cargando clave a buscar
    cin.ignore();
	cout<<"Nomre a buscar ---> ";
	cin.getline(nom,30);
	//abriendo, leyendo,cargando estructura
	F = fopen(archivo,"r+");
   if (F == NULL)
   {
      printf("No se puede abrir el archivo\n");
      getche();
      exit(1);
   }
    cout<<"=================================================\n";
   cout<<setw(10)<<"Codigo"<<setw(20)<<"Nombre"<<setw(10)<<"Nota\n";
   cout<<"-------------------------------------------------\n";
	// aqui siempre debe empezar el ciclo de lectura

   encontrado = 0;
   fread(&A,sizeof(A),1,F);
   while(!feof(F))
	{ 	// desplegando Registro Buscado
      if(strcmp(A.Nombre,nom)==0)

      {encontrado = 1;
         cout<<setw(10)<<A.Cod<<setw(20)<<A.Nombre<<setw(10)<<A.Nota<<endl;

         cout<<"\n";
      }
      fread(&A, sizeof(A), 1, F);
	}; // aqui termina while
	// no olvidar cerrar archivo y siempre fuera de while
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



void BuscarFiltroData()
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
      printf("No se puede abrir el archivo\n");
      getche();
      exit(1);
   }
    cout<<"=================================================\n";
   cout<<setw(10)<<"Codigo"<<setw(20)<<"Nombre"<<setw(10)<<"Nota\n";
   cout<<"-------------------------------------------------\n";
	// aqui siempre debe empezar el ciclo de lectura

   encontrado = 0;
   fread(&A,sizeof(A),1,F);
   while(!feof(F))
	{ 	// desplegando Registro Buscado
      if(A.Nota >= Nota)
      {encontrado = 1;
         cout<<setw(10)<<A.Cod<<setw(20)<<A.Nombre<<setw(10)<<A.Nota<<endl;

         cout<<"\n";
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

void EliminarData()
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
                        
         fwrite(&A, sizeof(A), 1, G);
	           
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
	  system ("pause");

}
 
void ModificarData()
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
               { 
                  do
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
                    }while(op1==1);
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
	 
	  cout<< " Alumno actualizado con exito    "<<endl;
	  getche();system ("pause");
	  
}

