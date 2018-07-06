#include <stdio.h> 
#include <string.h> 
#include <conio.h> 
#include <iostream> 
#include <ctype.h>
#include <iomanip>

using namespace std;

struct articulos
{
       int numero;
       char descripcion[100];
       float precio_anterior;
       float precio_actual;
       
}articulo;

FILE *H;

void ingresar();  
void modificar(); 
void eliminar(); 
void mostrar(); 

int main()
{
 //system("color 1f");
int op;
  do
  {
     system("cls");
     cout << "\n\n\r <<PROGRAMA QUE MUESTRA PRECIO E INFLACION DE ARTICULOS>>";
     cout << "\n\n\n\r 1.- Ingresar nuevo articulo.";
     cout << "\n\r 2.- Modificar un articulo.";
     cout << "\n\r 3.- eliminar un articulo.";
     cout << "\n\r 4.- mostrar inflacion.";
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
  int num;
  system("cls");

  cout << "\n\rIngresar nuevo articulo";
  H=fopen("articulo.txt","ab+");  
  if (H==NULL)
	 {
		 cout<<"ERROR: El archivo no existe";
		 getch();
		 exit(1);
	 }
  
  cout << "\n\n\n\rNumero del articulo : "; cin>>num;
  fread(&articulo,sizeof(articulo),1,H);
  while(!feof(H)) 
  {
    if(articulo.numero==num)
    {
       cout << "\n\n\n\rRegistro duplicado !!!";
       fclose(H);
       getch();
       return;
    }
    fread(&articulo,sizeof(articulo),1,H);
  }

  cout << "\n\rDescripcion: ";            cin>>articulo.descripcion;
  cout << "\n\rPrecio anterior   : ";     cin >>articulo.precio_anterior;
  cout << "\n\rPrecio actual    : ";      cin >>articulo.precio_actual;

  articulo.numero=num;

  fwrite(&articulo,sizeof(articulo),1,H); 

  cout << "\n\n\n\rArticulo registrado exitosamente.";
  fclose(H);
  
  getch();
  return;
}

void modificar()
{
  int num;
  
   system("cls");

  cout << "\n\rModificar Articulos";
  H=fopen("articulo.txt","rb+");
  if(H==NULL)
  {
    cout << "\n\n\n\rNo existe el archivo !!!";
    getch();
    return;
  }
  
  cout << "\n\n\n\rNumero del articulo "; cin>>num;
  fread(&articulo,sizeof(articulo),1,H);
  while(!feof(H))
  {
    if(articulo.numero==num)
    {
    cout << "\n\r"<<setw(10)<<"Numero"<<setw(15)<<"Articulo"<<setw(15)<<"P.anterior"<<setw(15)<<"P.actual";
    cout << "\n\r------------------------------------------------------------------------";
    cout << "\n\r "<<setw(10)<<articulo.numero<<setw(12)<<articulo.descripcion<<setw(12)<<articulo.precio_anterior<<" $"<<setw(16)<<articulo.precio_actual<<" $";
    
      cout << "\n\n\n\rAnote los nuevos datos :\n";
      cout << "\n\rDescripcion: "; cin>>articulo.descripcion;
      cout << "\n\rPrecio Anterior   : "; cin >>articulo.precio_anterior;
      cout << "\n\rPrecio Actual    : "; cin >>articulo.precio_actual;
     // cout<<ftell(H)<< "    "<<sizeof(articulo);getche();
      fseek(H,ftell(H)-sizeof(articulo),SEEK_SET);
      fwrite(&articulo,sizeof(articulo),1,H);  
						   
      fclose(H);   
      cout << "\n\n\rRegistro modificado.";
      getch();
      return;
    }
    fread(&articulo,sizeof(articulo),1,H);
  }
  cout << "\n\rNo se encuentra ese registro !!!";
  fclose(H);
  getch();
  return;
}

void eliminar()
{
  int num; 
  char op;
   system("cls");

  cout << "\n\rEliminar un Articulo";
  H=fopen("articulo.txt","rb+"); 	     
  if(H==NULL)
  {
    cout << "\n\n\n\rNo existe el archivo.";
    getch();
    return;
  }
  cout << "\n\n\n\rNumero del Articulo : "; cin>>num;

  fread(&articulo,sizeof(articulo),1,H);
  while(!feof(H))
  {
    if(articulo.numero==num)
    {
    cout << "\n\r"<<setw(10)<<"Numero"<<setw(15)<<"Articulo"<<setw(15)<<"P.anterior"<<setw(15)<<"P.actual";
    cout << "\n\r------------------------------------------------------------------------";
    cout <<"\n\r "<<setw(10)<<articulo.numero<<setw(12)<<articulo.descripcion<<setw(12)<<articulo.precio_anterior<<" $"<<setw(16)<<articulo.precio_actual<<" $";
      articulo.numero=0;
      strcpy(articulo.descripcion,"");
      articulo.precio_anterior=0.0;
      articulo.precio_actual=0.0;
      do {
	  cout << "\n\n\rEsta seguro que desea borrarlo? (s/n) ---> ";
	  op=toupper(getche());
      }while(op!='S' && op!='N');

      if(op=='S')
      {
	 fseek(H,ftell(H)-sizeof(articulo),SEEK_SET);
	 fwrite(&articulo,sizeof(articulo),1,H);  
	 cout << "\n\n\n\rRegistro eliminado !!!";
      }
      fclose(H);
      getch();
      return;
    }
    fread(&articulo,sizeof(articulo),1,H);
  }
  cout << "\n\rNo se encuentra ese registro !!!";
  fclose(H);
  getch();
  return;
}


void mostrar()
{
 float inflacion=0,s=0,prom=0,promedio=0,max1=-100,inflamayor=0;
 char artmax[100];
 system("cls");

  cout << "\n\r<<LISTADO DE REGISTROS DE ARTICULOS>>\n";
  H=fopen("articulo.txt","r");
				     
  if(H==NULL)
  {
    cout << "\n\n\n\rNo existe el archivo !!!";
    getch();
    return;
  }

    cout << "\n\r"<<setw(10)<<"Numero"<<setw(15)<<"Articulo"<<setw(15)<<"P.anterior"<<setw(15)<<"P.actual"<<setw(15)<<"%inflacion";
    cout << "\n\r------------------------------------------------------------------------";
  fread(&articulo,sizeof(articulo),1,H);
  while(!feof(H)) 
    {
    if(articulo.numero!=0)
    {
    inflacion=(articulo.precio_actual-articulo.precio_anterior)*100/articulo.precio_anterior;
    s++;
    prom=inflacion+prom;
                        if(inflacion>max1)
                        {
                         strcpy(artmax,articulo.descripcion);
                         inflamayor=inflacion;
                         max1=inflacion;
                        }
                        
    cout <<"\n\r"<<setw(7)<<articulo.numero<<setw(16)<<articulo.descripcion<<setw(12)<<articulo.precio_anterior<<" $"<<setw(16)<<articulo.precio_actual<<" $"<<setw(17)<<inflacion<<" %";
}
    fread(&articulo,sizeof(articulo),1,H);
    }
  fclose(H);
  cout << "\n\r------------------------------------------------------------------------";
  promedio=prom/s;
  cout<<"\n\nPromedio de inflacion          : "<<promedio;
  cout<<"\nArticulo con mayor inflacion   : "<<artmax;
  cout<<"\nPorcentaje con mayor inflacion : "<<inflamayor;

  getch();
  return;
}
