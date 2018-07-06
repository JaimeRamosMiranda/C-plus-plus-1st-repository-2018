  /*
 DIRECTOS.CPP
 Rutinas de ...
 1.- Altas
 2.- Consultas
 3.- Modificaciones
 4.- Bajas logicas
 5.- Listado

 registros en un archivo binario relativo o de acceso directo

 
*/

#include <stdio.h> // Para el manejo de archivos
#include <string.h> // Para el manejo de cadenas
#include <conio.h> // Para el manejo de clrscr
#include <iostream.h> // Para el manejo de cout
#i
nclude <ctype.h> // Para el uso de toupper

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

FILE *alias;  // Declaracion global de la variable "alias" (apuntador a un
	      // archivo
long int dir_fisica;  // Declaracion global de la variable para calcular
		      // la direccion fisica

void ALTA_DIRECTA(); // Declaracion global de la rutina de Altas
void CONSULTA_DIRECTA(); // Declaracion global de la rutina de Consultas
void MODIFICACION_DIRECTA(); // Declaracion global de la rutina de Modificaciones
void BAJA_LOGICA_DIRECTA(); // Declaracion global de la rutina de Baja Logica
void LISTADO_SECUENCIAL(); // Declaracion global de la rutina de Listado

int main()
{
int op;
  do
  {
     system("cls");
     cout << "\n\n\r Programa que almacena datos de PRODUCTOS en un ARCHIVO DIRECTO";
     cout << "\n\n\n\r 1.- Altas directas";
     cout << "\n\r 2.- Consultas directas";
     cout << "\n\r 3.- Modificaciones directas";
     cout << "\n\r 4.- Bajas logicas directas";
     cout << "\n\r 5.- Listado Secuencial";
     cout << "\n\r 0.- Salir";

     cout << "\n\n\n\r Seleccione su opcion ---> ";
     cin >> op;

     switch(op)
     {
	case 1 : ALTA_DIRECTA();         break;
	case 2 : CONSULTA_DIRECTA();     break;
	case 3 : MODIFICACION_DIRECTA(); break;
	case 4 : BAJA_LOGICA_DIRECTA();  break;
	case 5 : LISTADO_SECUENCIAL();   break;
     }
  }while(op!=0);
  return 0;
}


void ALTA_DIRECTA()
{
  int no_prod;  // Variable local para el numero de producto
   system("cls");

  cout << "\n\rALTAS DE REGISTROS DE PRODUCTOS";
  alias=fopen("PRODUCTO.DIR","ab+"); // Intenta abrir el archivo PRODUCTO.DIR
				     // en modo de lectura/escritura
  if(alias==NULL)
     {cout<<"El archivo no existe ";
      getche();
      return;
      }
    //alias=fopen("PRODUCTO.DIR","wb"); // Crea el archivo en caso de no existir


  cout << "\n\n\n\rNumero de producto: "; cin >> no_prod;


  dir_fisica=(no_prod-1)*sizeof(Registro); // Calculo de la dir. fisica
  
  fseek(alias,dir_fisica,SEEK_SET);
  //Posicionar el apuntador del archivo

  fread(&Registro,sizeof(Registro),1,alias);
     // Lee el "Registro", de tamano=sizeof(Registro) del archivo "alias"
  if(Registro.no_prod==no_prod)
  {
       cout << "\n\n\n\rRegistro duplicado !!!";
       fclose(alias);
       getch();
   return;    
  }

  cout << "\n\rDescripcion: "; cin>>Registro.descrip;
  cout << "\n\rCantidad   : "; cin >> Registro.cantidad;
  cout << "\n\rPrecio     : "; cin >> Registro.precio;
  do
  {
    cout << "\n\rGarantia   : "; Registro.garantia=toupper(getche());
  }while(Registro.garantia!='S' && Registro.garantia!='N');

  Registro.no_prod=no_prod;

  fseek(alias,dir_fisica,SEEK_SET); //Posicionar el apuntador del archivo
  fwrite(&Registro,sizeof(Registro),1,alias); // Grabar el Registro completo
   cout << "\n\n\n\rProducto registrado !!!";
  cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";

  fclose(alias); // Cierra el archivo
  getch();
  
}

void CONSULTA_DIRECTA()
{
  int no_prod; // Variable local para el numero de producto que desea consultar
 system("cls");

  cout << "\n\rCONSULTA DE REGISTROS DE PRODUCTOS";
  alias=fopen("PRODUCTO.DIR","rb"); // Intenta abrir el archivo PRODUCTO.DIR
				     // en modo de solo lectura
  if(alias==NULL)
  {
    cout << "\n\n\n\rNo existe el archivo !!!";
    cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
    getch();
    exit (0);
  }
  
  cout << "\n\n\n\rNumero de producto: "; cin >> no_prod;
   
  dir_fisica=(no_prod-1)*sizeof(Registro); // Calculo de la dir. fisica
  fseek(alias,dir_fisica,SEEK_SET); 
  //Posicionar el apuntador del archivo
  fread(&Registro,sizeof(Registro),1,alias);
     // Lee el "Registro", de tamano=sizeof(Registro) del archivo "alias"
  if(Registro.no_prod==no_prod)
  {
    cout << "\n\rNo Prod                    Descripcion  Cantidad        Precio  Garantia";
    cout << "\n\r------------------------------------------------------------------------";
    printf("\n\r%3d\t%30s\t%3d\t\t$%4.2f\t%c",Registro.no_prod,Registro.descrip,Registro.cantidad,Registro.precio,Registro.garantia);
  }
  else
  {
    cout << "\n\n\n\rNo existe ese registro !!!";
  }
  fclose(alias);
  cout << "\n\n\n\n\r<<< Oprima cualquier tecla para continuar >>>";
  getch();
  
}

void MODIFICACION_DIRECTA()
{
  int no_prod; // Variable local para el numero de producto que desea modificar
   system("cls");

  cout << "\n\rMODIFICACION DE REGISTROS DE PRODUCTOS";
  alias=fopen("PRODUCTO.DIR","rb+"); // Intenta abrir el archivo PRODUCTO.DIR
				     // en modo de lectura/escritura
  if(alias==NULL)  // Valida la existencia del archivo
  {
    cout << "\n\n\n\rNo existe el archivo !!!";
    cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
    getch();
    exit (0);  
  }

  cout << "\n\n\n\rNumero de producto: "; cin >> no_prod;

  dir_fisica=(no_prod-1)*sizeof(Registro); // Calculo de la dir. fisica
  fseek(alias,dir_fisica,SEEK_SET); //Posicionar el apuntador del archivo
  fread(&Registro,sizeof(Registro),1,alias);
     // Lee el "Registro", de tamano=sizeof(Registro) del archivo "alias"
  if(Registro.no_prod==no_prod)
  {
      cout << "\n\rNo Prod                    Descripcion  Cantidad        Precio  Garantia";
      cout << "\n\r------------------------------------------------------------------------";
      printf("\n\r%3d\t%30s\t%3d\t\t$%4.2f\t%c",Registro.no_prod,Registro.descrip,Registro.cantidad,Registro.precio,Registro.garantia);

      cout << "\n\n\n\rAnote los nuevos datos ...";
      cout << "\n\rNo Prod   "; cin>>Registro.no_prod;
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
      // La funcion ftell(alias) devuelve la posicion donde se encuentra el
      // apuntador
      fseek(alias,dir_fisica,SEEK_SET); //Posicionar el apuntador del archivo
      fwrite(&Registro,sizeof(Registro),1,alias);  // Graba el registro con
						   // los nuevos campos
      fclose(alias);   // Cierra el archivo
      cout << "\n\n\n\rRegistro modificado !!!";
      cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
      getch();
      
  }
  else
  {
   cout << "\n\n\n\rNo se encuentra ese registro !!!";
  }
  fclose(alias); // Cierra el archivo
  cout << "\n\n\n\n\r<<< Oprima cualquier tecla para continuar >>>";
  getch();

}

void BAJA_LOGICA_DIRECTA()
{
  int no_prod; // Variable local para el numero de producto que desea eliminar
  char op;
  system("cls");

  cout << "\n\rBAJA LOGICA DE REGISTROS DE PRODUCTOS";
  alias=fopen("PRODUCTO.DIR","rb+"); // Intenta abrir el archivo PRODUCTO.DIR
				     // en modo de lectura/escritura
  if(alias==NULL)  // Valida la existencia del archivo
  {
    cout << "\n\n\n\rNo existe el archivo !!!";
    cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
    getch();
    exit (0);
  }

  cout << "\n\n\n\rNumero de producto: "; cin >> no_prod;

  dir_fisica=(no_prod-1)*sizeof(Registro); // Calculo de la dir. fisica
  fseek(alias,dir_fisica,SEEK_SET); //Posicionar el apuntador del archivo
  fread(&Registro,sizeof(Registro),1,alias);
     // Lee el "Registro", de tamano=sizeof(Registro) del archivo "alias"
  if(Registro.no_prod==no_prod)
  {
      cout << "\n\rNo Prod                    Descripcion  Cantidad        Precio  Garantia";
      cout << "\n\r------------------------------------------------------------------------";
      printf("\n\r%3d\t%30s\t%3d\t\t$%4.2f\t%c\n\n\n\n\r",Registro.no_prod,Registro.descrip,Registro.cantidad,Registro.precio,Registro.garantia);

      Registro.no_prod=0;
      strcpy(Registro.descrip,"");
      Registro.cantidad=0;
      Registro.precio=0.0;
      Registro.garantia=' ';

      // Es necesario reposicionar el apuntador del archivo al principio del
      // registro que desea modificar, ya que al leer un registro, el
      // apuntador se posiciona en el registro siguiente
      // La funcion ftell(alias) devuelve la posicion donde se encuentra el
      // apuntador
      do
      {
	cout << "\n\rEsta seguro que desea eliminar este registro? [S/N] ---> ";
	op=toupper(getche());
      }while(op!='S' && op!='N');
      if(op=='S')
      {
	fseek(alias,dir_fisica,SEEK_SET); //Posicionar el apuntador del archivo
	fwrite(&Registro,sizeof(Registro),1,alias);  // Graba el registro con
						   // los nuevos campos
	cout << "\n\n\n\rRegistro eliminado logicamente !!!";
      }
      else
      {
	    cout << "\n\n\n\rRegistro NO eliminado !!!";
      }
      fclose(alias);   // Cierra el archivo
      cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
      getch();
      
  }
  else
  {
   cout << "\n\n\n\rNo se encuentra ese registro !!!";
  }
  fclose(alias); // Cierra el archivo
  cout << "\n\n\n\n\r<<< Oprima cualquier tecla para continuar >>>";
  getch();
  
}

void LISTADO_SECUENCIAL()
{
   system("cls");

  cout << "\n\rLISTADO DE REGISTROS DE PRODUCTOS";
  alias=fopen("PRODUCTO.DIR","rb"); // Intenta abrir el archivo PRODUCTO.DIR
				     // en modo de solo lectura
  if(alias==NULL)
  {
    cout << "\n\n\n\rNo existe el archivo !!!";
    cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
    getch();
    exit (0);
  }

  cout << "\n\rNo Prod                    Descripcion  Cantidad        Precio  Garantia";
  cout << "\n\r------------------------------------------------------------------------";
  fread(&Registro,sizeof(Registro),1,alias);
     // Lee el "Registro", de tamano=sizeof(Registro) del archivo "alias"
  while(!feof(alias)) // Ciclo mientras no se encuentre el final del archivo
  {
   //if( Registro.no_prod!=0)
    printf("\n\r%3d\t%30s\t%3d\t\t$%4.2f\t%c",Registro.no_prod,Registro.descrip,Registro.cantidad,Registro.precio,Registro.garantia);
    fread(&Registro,sizeof(Registro),1,alias);
  }
  fclose(alias); // Cierra el archivo
  cout << "\n\r------------------------------------------------------------------------";
  cout << "\n\rFin del listado !!!";
  cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
  getch();
  
}

