/*
 SECUENCI.CPP
 Rutinas de ...
 1.- Altas
 2.- Consultas
 3.- Modificaciones
 4.- Bajas logicas
 5.- Listado

 registros en un archivo binario secuencial

 
*/

#include <stdio.h> // Para el manejo de archivos
#include <string.h> // Para el manejo de cadenas
#include <conio.h> // Para el manejo de clrscr
#include <iostream> // Para el manejo de cout
#include <ctype.h> // Para el uso de toupper
using namespace std;

struct tipo_registro
{                      // Campos:
  int no_prod;         // Numero de producto
  char descrip[30];    // Descripcion del articulo
  int cantidad;        // Cantidad disponible en almacen
  float precio;        // Precio del articulo
  char garantia;       // Tiene garantia? [S/N]
};

 tipo_registro Registro; // Declaracion global de la variable
			       // "Registro" de tipo struct tipo_registro

FILE *f;  // Declaracion global de la variable "f" (apuntador a un
	      // archivo

void ALTA_SECUENCIAL(); // Declaracion global de la rutina de Altas
void CONSULTA_SECUENCIAL(); // Declaracion global de la rutina de Consultas
void MODIFICACION_SECUENCIAL(); // Declaracion global de la rutina de Modificaciones
void BAJA_LOGICA_SECUENCIAL(); // Declaracion global de la rutina de Baja Logica
void BAJA_FISICA_SECUENCIAL(); // Declaracion global de la rutina de Baja Logica
void LISTADO_SECUENCIAL(); // Declaracion global de la rutina de Listado

int main()
{
int op;
  do
  {
     system("cls");
     cout << "\n\n\r Programa que almacena datos de PRODUCTOS en un ARCHIVO SECUENCIAL";
     cout << "\n\n\n\r 1.- Altas secuenciales";
     cout << "\n\r 2.- Consultas secuenciales";
     cout << "\n\r 3.- Modificaciones secuenciales";
     cout << "\n\r 4.- Bajas logicas secuenciales";
     cout << "\n\r 5.- Bajas fisicas (compactar archivo)";
     cout << "\n\r 6.- Listado secuencial";
     cout << "\n\r 0.- Salir";

     cout << "\n\n\n\r Seleccione su opcion ---> ";
     cin >> op;

     switch(op)
     {
	case 1 : ALTA_SECUENCIAL();         break;
	case 2 : CONSULTA_SECUENCIAL();     break;
	case 3 : MODIFICACION_SECUENCIAL(); break;
	case 4 : BAJA_LOGICA_SECUENCIAL();  break;
	case 5 : BAJA_FISICA_SECUENCIAL();  break;
	case 6 : LISTADO_SECUENCIAL();      break;
     }
  }while(op!=0);
  return 0;
}


void ALTA_SECUENCIAL()
{
  int no_prod;  // Variable local para el numero de producto
  system("cls");

  cout << "\n\rALTAS DE REGISTROS DE PRODUCTOS";
  f=fopen("PRODUCTO.SEC","ab+"); // Intenta abrir el archivo PRODUCTO.SEC
				     // en modo de lectura/escritura
 
  if (f==NULL)
	{
		 cout<<"ERROR: El archivo no existe";
		 getch();
		 exit(1);
	 }
    

  cout << "\n\n\n\rNumero de producto: "; 
  cin >> no_prod;
  fread(&Registro,sizeof(Registro),1,f);
     // Lee el "Registro", de tamano=sizeof(Registro) del archivo "f"
  while(!feof(f)
  ) // Ciclo mientras no se encuentre el final del archivo
  {
    if(Registro.no_prod==no_prod)
    {
       cout << "\n\n\n\rRegistro duplicado !!!";
       fclose(f);
       getch();
       return;
    }
    fread(&Registro,sizeof(Registro),1,f);
  }

  cout << "\n\rDescripcion: "; cin>>Registro.descrip;
  cout << "\n\rCantidad   : "; cin >> Registro.cantidad;
  cout << "\n\rPrecio     : "; cin >> Registro.precio;
  do
  {
    cout << "\n\rGarantia   : "; Registro.garantia=toupper(getche());
  }while(Registro.garantia!='S' && Registro.garantia!='N');

  Registro.no_prod=no_prod;

  fwrite(&Registro,sizeof(Registro),1,f); // Grabar el Registro completo
  fclose(f); // Cierra el archivo

  cout << "\n\n\n\rProducto registrado !!!";
  cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
  getch();
  return;
}

void CONSULTA_SECUENCIAL()
{
  int no_prod; // Variable local para el numero de producto que desea consultar
  system("cls");

  cout << "\n\rCONSULTA DE REGISTROS DE PRODUCTOS";
  f=fopen("PRODUCTO.SEC","rb"); // Intenta abrir el archivo PRODUCTO.SEC
				     // en modo de solo lectura
  if(f==NULL)
  {
    cout << "\n\n\n\rNo existe el archivo !!!";
    cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
    getch();
    return;
  }

  cout << "\n\n\n\rNumero de producto: "; cin >> no_prod;

  fread(&Registro,sizeof(Registro),1,f);
     // Lee el "Registro", de tamano=sizeof(Registro) del archivo "alias"
  while(!feof(f)) // Ciclo mientras no se encuentre el final del archivo
  {
    if(Registro.no_prod==no_prod)
    {
      cout << "\n\rNo Prod                    Descripcion  Cantidad        Precio  Garantia";
      cout << "\n\r------------------------------------------------------------------------";
      printf("\n\r%3d\t%30s\t%3d\t\t$%4.2f\t%c",Registro.no_prod,Registro.descrip,Registro.cantidad,Registro.precio,Registro.garantia);
      fclose(f);
      cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
      getch();
      return;
    }
    fread(&Registro,sizeof(Registro),1,f);
  }
  cout << "\n\rNo se encuentra ese registro !!!";
  fclose(f); // Cierra el archivo
  cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
  getch();
  return;
}

void MODIFICACION_SECUENCIAL()
{long dir_fisica;
  int no_prod; // Variable local para el numero de producto que desea modificar
   system("cls");

  cout << "\n\rMODIFICACION DE REGISTROS DE PRODUCTOS";
  f=fopen("PRODUCTO.SEC","rb+"); // Intenta abrir el archivo PRODUCTO.SEC
				     // en modo de lectura/escritura
  if(f==NULL)  // Valida la existencia del archivo
  {
    cout << "\n\n\n\rNo existe el archivo !!!";
    cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
    getch();
    return;
  }

  cout << "\n\n\n\rNumero de producto: "; cin >> no_prod;

  fread(&Registro,sizeof(Registro),1,f);
     // Lee el "Registro", de tamano=sizeof(Registro) del archivo "f"
  while(!feof(f)) // Ciclo mientras no se encuentre el final del archivo
  {
    if(Registro.no_prod==no_prod)
    {
      cout << "\n\rNo Prod                    Descripcion  Cantidad        Precio  Garantia";
      cout << "\n\r------------------------------------------------------------------------";
      printf("\n\r%3d\t%30s\t%3d\t\t$%4.2f\t%c",Registro.no_prod,Registro.descrip,Registro.cantidad,Registro.precio,Registro.garantia);

      cout << "\n\n\n\rAnote los nuevos datos ...";
      cout << "\n\rDescripcion: "; cin>>Registro.descrip;
      cout << "\n\rCantidad   : "; cin >> Registro.cantidad;
      cout << "\n\rPrecio     : "; cin >> Registro.precio;
      do
      {
	cout << "\n\rGarantia   : "; Registro.garantia=toupper(getche());
      }while(Registro.garantia!='S' && Registro.garantia!='N');

      // Es necesario reposicionar el apuntador del archivo al principio del
      // registro que desea modificar, ya que al leer un registro, el
      // apuntador se posiciona en el registro siguiente
      // La funcion ftell(f) devuelve la posicion donde se encuentra el
      // apuntador
      
  
      fseek(f,ftell(f)-sizeof(Registro),SEEK_SET);
      fwrite(&Registro,sizeof(Registro),1,f);  // Graba el registro con
						   // los nuevos campos
      fclose(f);   // Cierra el archivo
      cout << "\n\n\n\rRegistro modificado !!!";
      cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
      getch();
      return;
    }
    fread(&Registro,sizeof(Registro),1,f);
  }
  cout << "\n\rNo se encuentra ese registro !!!";
  fclose(f); // Cierra el archivo
  cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
  getch();
  return;
}

void BAJA_LOGICA_SECUENCIAL()
{
  int no_prod; // Variable local para el numero de producto que desea eliminar
  char op; //Variable local
   system("cls");

  cout << "\n\rBAJAS LOGICAS DE REGISTROS DE PRODUCTOS";
  f=fopen("PRODUCTO.SEC","rb+"); // Intenta abrir el archivo PRODUCTO.SEC
				     // en modo de lectura/escritura
  if(f==NULL)  // Valida la existencia del archivo
  {
    cout << "\n\n\n\rNo existe el archivo !!!";
    cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
    getch();
    return;
  }

  cout << "\n\n\n\rNumero de producto: "; cin >> no_prod;

  fread(&Registro,sizeof(Registro),1,f);
     // Lee el "Registro", de tamano=sizeof(Registro) del archivo "alias"
  while(!feof(f)) // Ciclo mientras no se encuentre el final del archivo
  {
    if(Registro.no_prod==no_prod)
    {
      cout << "\n\rNo Prod                    Descripcion  Cantidad        Precio  Garantia";
      cout << "\n\r------------------------------------------------------------------------";
      printf("\n\r%3d\t%30s\t%3d\t\t$%4.2f\t%c",Registro.no_prod,Registro.descrip,Registro.cantidad,Registro.precio,Registro.garantia);

      Registro.no_prod=0;
      strcpy(Registro.descrip,"");
      Registro.cantidad=0;
      Registro.precio=0.0;
      Registro.garantia=' ';

      do {
	  cout << "\n\n\rEsta seguro que desea borrarlo? [S/N] ---> ";
	  op=toupper(getche());
      }while(op!='S' && op!='N');

      if(op=='S')
      {
	 // Es necesario reposicionar el apuntador del archivo al principio del
	 // registro que desea modificar, ya que al leer un registro, el
	 // apuntador se posiciona en el registro siguiente
	 // La funcion ftell(alias) devuelve la posicion donde se encuentra el
	 // apuntador
	 fseek(f,ftell(f)-sizeof(Registro),SEEK_SET);
	 fwrite(&Registro,sizeof(Registro),1,f);  // Graba el registro con
						   // los nuevos campos
	 cout << "\n\n\n\rRegistro eliminado !!!";
      }
      fclose(f);   // Cierra el archivo
      cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
      getch();
      return;
    }
    fread(&Registro,sizeof(Registro),1,f);
  }
  cout << "\n\rNo se encuentra ese registro !!!";
  fclose(f); // Cierra el archivo
  cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
  getch();
  return;
}

void BAJA_FISICA_SECUENCIAL()
{
FILE *temporal; //Declaracion local de una variable para controlar el
		// archivo temporal
   system("cls");

  cout << "\n\rBAJAS FISICAS DE REGISTROS DE PRODUCTOS";
  f=fopen("PRODUCTO.SEC","rb"); // Intenta abrir el archivo PRODUCTO.SEC
				     // en modo de solo lectura
  if(f==NULL)  // Valida la existencia del archivo
  {
    cout << "\n\n\n\rNo existe el archivo !!!";
    cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
    getch();
    return;
  }

  temporal=fopen("TEMPORAL.TMP","wb"); // Crea el archivo TEMPORAL.TMP

  fread(&Registro,sizeof(Registro),1,f);
     // Lee el "Registro", de tamano=sizeof(Registro) del archivo "alias"
  while(!feof(f)) // Ciclo mientras no se encuentre el final del archivo
  {
    if(Registro.no_prod!=0)
	 fwrite(&Registro,sizeof(Registro),1,temporal);
	 // Graba el registro valido en el archivo temporal

    fread(&Registro,sizeof(Registro),1,f);
  }
  fclose(f); // Cierra todos los archivos abiertos
  fclose(temporal);
  remove("PRODUCTO.SEC"); //Elimina el archivo original
  rename("TEMPORAL.TMP","PRODUCTO.SEC");
  //Renombra el archivo temporal con el nombre del archivo original

  cout << "\n\n\n\rArchivo compactado !!!";
  cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
  getch();
  return;
}

void LISTADO_SECUENCIAL()
{
  system("cls");

  cout << "\n\rLISTADO DE REGISTROS DE PRODUCTOS";
  f=fopen("PRODUCTO.SEC","rb"); // Intenta abrir el archivo PRODUCTO.SEC
				     // en modo de solo lectura
  if(f==NULL)
  {
    cout << "\n\n\n\rNo existe el archivo !!!";
    cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
    getch();
    return;
  }

  cout << "\n\rNo Prod                    Descripcion  Cantidad        Precio  Garantia";
  cout << "\n\r------------------------------------------------------------------------";
  fread(&Registro,sizeof(Registro),1,f);
     // Lee el "Registro", de tamano=sizeof(Registro) del archivo "alias"
  while(!feof(f)) // Ciclo mientras no se encuentre el final del archivo
  {//if( Registro.no_prod!=0)
    printf("\n\r%3d\t%30s\t%3d\t\t$%4.2f\t%c",Registro.no_prod,Registro.descrip,Registro.cantidad,Registro.precio,Registro.garantia);
    fread(&Registro,sizeof(Registro),1,f);
  }
  fclose(f); // Cierra el archivo
  cout << "\n\r------------------------------------------------------------------------";
  cout << "\n\rFin del listado !!!";
  cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
  getch();
  return;
}

