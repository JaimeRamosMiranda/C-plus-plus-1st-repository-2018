/*
10.-  Una librería  tiene clasificado sus libros por áreas, 
las cantidades se guardan en un array  CanLib.  
a) Los arrays deben ser ingresados por teclado. 
b) Determinar la cantidad total de libros de dicha librería. 
c) Cuantos libros hay en el area de indice ingresado por teclado.  
d) Cual es el minimo valor de libros en dicha libreria e indicar en que areas la cantidad de libros es igual al minimo.  
e)  Cual es el máximo valor de libros en dicha libreria e indicar en que areas la cantidad de libros es igual al máximo.  
*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
#define TM 20

void leervectorstr(int m[TM], int n);
void leervector(int CanLib[], int n);
/*
void sumatotal()
void buscarlib()
void minimo()
void maximo
*/

int main()
{
	int narea, cant,s;
	cout<<"Ingresar el numero de areas :"<<endl;
	cin>>narea;
	leervectorstr(int s, int narea);
	leervector(int cant, int narea);
	
	
	getche();
	return 0;
}

void leervectorstr(int m[TM], int n)
{
	char area[TM];
	int n,i;
	i=0;
	for(i=0;i<n;i++)
	{cout<<"Ingresar el nombre del area : "<<i+1<<endl;
	gets>>m[TM];
	}
}

void leervector(int CanLib[], int d)
{
	int CanLib[],i;
	i=0;
	for(i=0;i<n;i++)
	{cout<<"Ingresar la cantidad de libros en las area : "<<i+1<<endl;
	cin>>CanLib[i];
	}
}

