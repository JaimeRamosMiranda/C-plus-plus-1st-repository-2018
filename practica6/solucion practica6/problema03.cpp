#include<windows.h>
#include<math.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iomanip>
#include<string.h>
#include<ctype.h>
#include<iostream>
/*
Hacer un algoritmo que me permita crear un archivo de pedidos, 
realizar altas, bajas y cambios en el. Los datos de cada pedido son los siguientes: 
Nombre del cliente, direccion, articulo, cantidad, precio unitario. 
Emitir el siguiente listado de pedidos: 
LISTADO DE PEDIDOS 

NOMBRE DEL CLIENTE	ARTICULO	CANTIDAD	PRECIO UNITARIO	TOTAL 
XXXXXXXXXXXXX	XXX	XXXXXXXX	99		     99,999.99		99,999.99 
XXXXXXXXXXXXX	XXX	XXXXXXXX	99		     99,999.99		99,999.99 
  
XXXXXXXXXXXXX	XXX	XXXXXXXX	99		     99,999.99		99,999.99 
                     Total	    999			 99,999.99		99,999.99 

*/
using namespace std;

struct clientes
{
       char nombre[30];
       char direccion[20];
       char articulo[20];
       int cantidad;
       float Precio_unitario;

}cliente;

FILE *H;

void ingresar();  
void modificar(); 
void eliminar(); 
void mostrar(); 

int main()
{
 system("color 1f");
int op;
  do
  {
     system("cls");
     cout << "\n\n\r <<PROGRAMA QUE MUESTRA PEDIDOS>>";
     cout << "\n\n\n\r 1.- Ingresar nuevo Pedido";
     cout << "\n\r 2.- Modificar un Pedido.";
     cout << "\n\r 3.- eliminar un Pedido.";
     cout << "\n\r 4.- mostrar Pedido.";
     cout << "\n\r 0.- Salir.";

     cout << "\n\n\n\r Seleccione su opcion ---> ";
     cin >> op;

     switch(op)
     {
	case 1 : ingresar();      break;
	case 2 : modificar();     break;
	case 3 : eliminar();      break;
	case 4 : mostrar();       break;
     }
  }while(op!=0);
  return 0;
}

void ingresar()
{
  char nomb[30];
  system("cls");

  cout << "\n\rIngresar nuevo Nombre";
  H=fopen("cliente.txt","ab+");   
  if (H==NULL){
	 cout<<"ERROR: El archivo no existe";
	 getch();
	 exit(1);
           }
  
  cout << "\n\n\n\rNombre del cliente: "; cin>>nomb;
  fread(&cliente,sizeof(cliente),1,H);
  while(!feof(H)) 
  {
    if(strcmp(cliente.nombre,nomb)==0)
    {
       cout << "\n\n\n\rRegistro duplicado !!!";
       fclose(H);
       getch();
       return;
    }
    fread(&cliente,sizeof(cliente),1,H);
  }
  fflush(stdin);
  cout << "\n\rDireccion         : ";     cin>>cliente.direccion;
  cout << "\n\rArticulo          : ";     cin>>cliente.articulo; fflush(stdin);
  cout << "\n\rCantidad          : ";     cin>>cliente.cantidad;
  cout << "\n\rPrecio unitario   : ";     cin>>cliente.Precio_unitario;
  strcpy(cliente.nombre,nomb);
  fwrite(&cliente,sizeof(cliente),1,H); 

  cout << "\n\n\n\rArticulo registrado exitosamente.";
  fclose(H);
  
  getch();
  return;
}

void modificar()
{
  char nomb[30];
  
   system("cls");

  cout << "\n\rModificar Datos";
  H=fopen("cliente.txt","rb+");
  if(H==NULL)
  {
    cout << "\n\n\n\rNo existe el archivo !!!";
    getch();
    return;
  }
  
  cout << "\n\n\n\rNombre: "; cin>>nomb;
  fread(&cliente,sizeof(cliente),1,H);
  while(!feof(H))
  {
    if(strcmp(cliente.nombre,nomb)==0)
    {
 
      cout << "\n\n\n\rAnote los nuevos datos :\n";
      cout << "\n\rDireccion          : "; cin>>cliente.direccion;
      cout << "\n\rArticulo           : "; cin>>cliente.articulo;
      cout << "\n\rCantidad           : "; cin>>cliente.cantidad;
      cout << "\n\rPrecio Unitario    : "; cin>>cliente.Precio_unitario;

      fseek(H,ftell(H)-sizeof(cliente),SEEK_SET);
      fwrite(&cliente,sizeof(cliente),1,H);  
						   
      fclose(H);   
      cout << "\n\n\rRegistro modificado.";
      getch();
      return;
    }
    fread(&cliente,sizeof(cliente),1,H);
  }
  cout << "\n\rNo se encuentra ese registro !!!";
  fclose(H);
  getch();
  return;
}

void eliminar()
{
  char nomb[30]; 
  char op;
   system("cls");

  cout << "\n\rEliminar un Cliente";
  H=fopen("cliente.txt","rb+"); 	     
  if(H==NULL)
  {
    cout << "\n\n\n\rNo existe el archivo.";
    getch();
    return;
  }
  cout << "\n\n\n\rNombre del Cliente : "; cin>>nomb;
  fread(&cliente,sizeof(cliente),1,H);
  while(!feof(H))
  {
    if(strcmp(cliente.nombre,nomb)==0)
    {
      strcpy(cliente.nombre,"");
      strcpy(cliente.direccion,"");
      strcpy(cliente.articulo,"");
      cliente.cantidad=0;
      cliente.Precio_unitario=0.0;      
      do {
	  cout << "\n\n\rEsta seguro que desea borrarlo? (s/n) ---> ";
	  op=toupper(getche());
      }while(op!='S' && op!='N');

      if(op=='S')
      {
	 fseek(H,ftell(H)-sizeof(cliente),SEEK_SET);
	 fwrite(&cliente,sizeof(cliente),1,H);  
	 cout << "\n\n\n\rRegistro eliminado !!!";
      }
      fclose(H);
      getch();
      return;
    }
    fread(&cliente,sizeof(cliente),1,H);
  }
  cout << "\n\rNo se encuentra ese registro !!!";
  fclose(H);
  getch();
  return;
}


void mostrar()
{
 float total;
 system("cls");

  cout << "\n\r<<LISTADO DE CLIENTES>>\n";
  H=fopen("cliente.txt","r");
				     
  if(H==NULL)
  {
    cout << "\n\n\n\rNo existe el archivo !!!";
    getch();
    return;
  }

    cout << "\n\r"<<setw(10)<<"Nombre"<<setw(15)<<"Articulo"<<setw(15)<<"Cantidad"<<setw(15)<<"P.unitario"<<setw(15)<<"total";
    cout << "\n\r------------------------------------------------------------------------";
  fread(&cliente,sizeof(cliente),1,H);
  while(!feof(H)) 
    {
    if(strcmp(cliente.nombre,"")!=0)
    {
    total=cliente.cantidad*cliente.Precio_unitario;
                        
    cout <<"\n\r"<<setw(7)<<cliente.nombre<<setw(16)<<cliente.articulo<<setw(12)<<cliente.cantidad<<setw(16)<<cliente.Precio_unitario<<setw(17)<<total;
}
    fread(&cliente,sizeof(cliente),1,H);
    }
  fclose(H);
  cout << "\n\r------------------------------------------------------------------------";
  getch();
  return;
}
