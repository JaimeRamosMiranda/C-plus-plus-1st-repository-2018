#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <conio.h> 
#include <iostream> 
#include <ctype.h>
#include <iomanip>
/*

2.Hacer un algoritmo que me permita crear un archivo de alumnos, 
realizar altas, bajas, y cambios en el. 
Los datos de los alumnos son los siguientes: 
Numero, nombre, Calificacion1, calificacion2, calificacion3.  
Emitir un listado del promedio de calificaciones así: 
CALIFICACIONES FINALES 
NOMBRE		C1	C2	C3	CAL. FINAL	OBSERVACION 
XXXXXXX		99.99	99.99	99.99	99.99		Aprobado 
XXXXXXX		99.99	99.99	99.99	99.99		Reprobado 
XXXXXXX		99.99	99.99	99.99	99.99		XXXXXXXXXXXX 
  
XXXXXXX		99.99	99.99	99.99	99.99		XXXXXXXXXXXX 
Total Aprobados:    999 
Total Reprobados: 999 
Considerar que el peso de las calificaciones es. Cal1 peso1, cal2 peso2 y cal3 peso 2

*/

using namespace std;

struct alumnos
{
       int numero;
       char nombre[100];
       float calificacion1;
       float calificacion2;
       float calificacion3;
       
}alumno;

FILE *H;

void ingresar();  
void modificar(); 
void eliminar(); 
void mostrar(); 

int main()
{
 system("color 3f");
int op;
  do
  {
     system("cls");
     cout << "\n\n\r <<PROGRAMA QUE MUESTRA PROMEDIO DE ALUMNOS>>";
     cout << "\n\n\n\r 1.- Ingresar datos del alumno.";
     cout << "\n\r 2.- Modificar un datos del alumno.";
     cout << "\n\r 3.- eliminar un datos del alumno.";
     cout << "\n\r 4.- mostrar promedios.";
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

  cout << "\n\rIngresar nuevas notas";
  H=fopen("notas.txt","ab+");  
  if (H==NULL)
	 {
		 cout<<"ERROR: El archivo no existe";
		 getch();
		 exit(1);
	 }
  
  cout << "\n\n\n\rNumero del alumno : "; cin>>num;
  fread(&alumno,sizeof(alumno),1,H);
  while(!feof(H)) 
  {
    if(alumno.numero==num)
    {
       cout << "\n\n\n\rRegistro duplicado !!!";
       fclose(H);
       getch();
       return;
    }
    fread(&alumno,sizeof(alumno),1,H);
  }
  
  cout << "\n\rNombre         : ";            cin>>alumno.nombre;
  cout << "\n\rCalificacion 1 : ";            cin>>alumno.calificacion1;
  cout << "\n\rCalificacion 2 : ";            cin>>alumno.calificacion2;
  cout << "\n\rCalificacion 3 : ";            cin>>alumno.calificacion3;

  alumno.numero=num;

  fwrite(&alumno,sizeof(alumno),1,H); 

  cout << "\n\n\n\rAlumno registrado exitosamente.";
  fclose(H);
  
  getch();
  return;
}

void modificar()
{
  int num;
  
   system("cls");

  cout << "\n\rModificar Articulos";
  H=fopen("notas.txt","rb+");
  if(H==NULL)
  {
    cout << "\n\n\n\rNo existe el archivo !!!";
    getch();
    return;
  }
  
  cout << "\n\n\n\rNumero del alumno "; cin>>num;
  fread(&alumno,sizeof(alumno),1,H);
  while(!feof(H))
  {
    if(alumno.numero==num)
    {
    cout << "\n\r"<<setw(10)<<"Numero"<<setw(15)<<"Nombre"<<setw(15)<<"Cal.1"<<setw(15)<<"Cal.2"<<"cal.3";
    cout << "\n\r------------------------------------------------------------------------";
    cout << "\n\r "<<setw(10)<<alumno.numero<<setw(12)<<alumno.nombre<<setw(15)<<alumno.calificacion1<<setw(12)<<alumno.calificacion2<<setw(16)<<alumno.calificacion3;

      cout << "\n\n\n\rAnote los nuevos datos :\n";
      cout << "\n\rNombre             : "; cin>>alumno.nombre;
      cout << "\n\rCalificacion 1     : "; cin >>alumno.calificacion1;
      cout << "\n\rCalificacion 2     : "; cin >>alumno.calificacion2;
      cout << "\n\rCalificacion 3     : "; cin >>alumno.calificacion3;
      
      fseek(H,ftell(H)-sizeof(alumno),SEEK_SET);
      fwrite(&alumno,sizeof(alumno),1,H);  
						   
      fclose(H);   
      cout << "\n\n\rRegistro modificado.";
      getch();
      return;
    }
    fread(&alumno,sizeof(alumno),1,H);
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

  cout << "\n\rEliminar Notas";
  H=fopen("notas.txt","rb+"); 	     
  if(H==NULL)
  {
    cout << "\n\n\n\rNo existe el archivo.";
    getch();
    return;
  }
  cout << "\n\n\n\rNumero del Alumno : "; cin>>num;

  fread(&alumno,sizeof(alumno),1,H);
  while(!feof(H))
  {
    if(alumno.numero==num)
    {
    cout << "\n\r"<<setw(10)<<"Numero"<<setw(15)<<"Nombre"<<setw(15)<<"Cal.1"<<setw(15)<<"Cal.2"<<"cal.3";
    cout << "\n\r------------------------------------------------------------------------";
    cout << "\n\r "<<setw(10)<<alumno.numero<<setw(12)<<alumno.nombre<<setw(15)<<alumno.calificacion1<<setw(12)<<alumno.calificacion2<<setw(16)<<alumno.calificacion3;
      alumno.numero=0;
      strcpy(alumno.nombre,"");
      alumno.calificacion1=0.0;
      alumno.calificacion2=0.0;
      alumno.calificacion3=0.0;
      do {
	  cout << "\n\n\rEsta seguro que desea borrarlo? (s/n) ---> ";
	  op=toupper(getche());
      }while(op!='S' && op!='N');

      if(op=='S')
      {
	 fseek(H,ftell(H)-sizeof(alumno),SEEK_SET);
	 fwrite(&alumno,sizeof(alumno),1,H);  
	 cout << "\n\n\n\rRegistro eliminado !!!";
      }
      fclose(H);
      getch();
      return;
    }
    fread(&alumno,sizeof(alumno),1,H);
  }
  cout << "\n\rNo se encuentra ese registro !!!";
  fclose(H);
  getch();
  return;
}


void mostrar()
{
 int final=0,aprob=0,desaprob=0;
 char obs[10]="",artmax[100];
  system("cls");

  cout << "\n\r<<LISTADO DE PROMEDIOS DE LOS ALUMNOS>>\n";
  H=fopen("notas.txt","r");
				     
  if(H==NULL)
  {
    cout << "\n\n\n\rNo existe el archivo !!!";
    getch();
    return;
  }

    cout << "\n\r"<<setw(10)<<"Nombre"<<setw(10)<<"Cal.1"<<setw(10)<<"Cal.2"<<setw(10)<<"cal.3"<<setw(12)<<"calc.final"<<setw(12)<<"observacion";
    cout << "\n\r-----------------------------------------------------------------------------";
  fread(&alumno,sizeof(alumno),1,H);
  while(!feof(H)) 
    {
    if(alumno.numero!=0)
    {
    final=int((alumno.calificacion1+2*alumno.calificacion2+2*alumno.calificacion3)/5);
                        if(final>10)
                        {
                         strcpy(obs,"Aprob");
                         aprob++;
                        }
                        else 
                        {
                        strcpy(obs,"Reprob");
                        desaprob++;
                        }
    cout << "\n\r "<<setw(10)<<alumno.nombre<<setw(9)<<alumno.calificacion1<<setw(9)<<alumno.calificacion2<<setw(9)<<alumno.calificacion3<<setw(11)<<final<<setw(12)<<obs;
}
    fread(&alumno,sizeof(alumno),1,H);
    }
  fclose(H);
  cout << "\n\r-----------------------------------------------------------------------------";
  cout<<"\n\nTotal de aprobados   : "<<aprob;
  cout<<"\nTotal de desaprobados  : "<<desaprob;

  getch();
  return;
}
