#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
#define archivo "E:\\Alumnos.dat"
struct  ALUMNO
{	int Cod;
	char Nombre[30];
	int Nota;
};
int main()
{system("cls");
	FILE *F;
    ALUMNO A;
	F = fopen(archivo,"w");
	if(F==NULL)
	  {cout<<" no existe el archivo "<<endl;
	    getche();
	    exit (0);
     }

   fclose(F);
   cout<<"ARCHIVO VACIO CREADO CON EXITO !!!!!!!"<<endl;
   getche();
}
