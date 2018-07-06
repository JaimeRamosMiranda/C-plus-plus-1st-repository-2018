/*
10.-  Una librería  tiene clasificado sus libros por áreas, 
las cantidades se guardan en un array  CanLib.  
a) Los arrays deben ser ingresados por teclado. 
b) Determinar la cantidad total de libros de dicha librería. 
c) Cuantos libros hay en el area de indice ingresado por teclado.  
d) Cual es el minimo valor de libros en dicha libreria 
e indicar en que areas la cantidad de libros es igual al minimo.  
e)  Cual es el máximo valor de libros en dicha libreria e 
indicar en que areas la cantidad de libros es igual al máximo.  
*/
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string.h>
using namespace std;
#define max 20
#define dim 100

//a ingresar datos
void leer(char area[][dim], int cant[], int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
	
		cout<<"Ingresar el nombre del area "<<i<<":"<<endl;
		fflush(stdin);
		gets(area[i]);
		
		do{cout<<"Ingresar la cantidad de libros del area "<<i<<":"<<endl;
		cin>>cant[i];
		}while(cant<0);
	}
}

//a mostrando cantidades
void mostrar(char area[][dim], int cant[], int n)
{
	int i;
	
	cout<<"\tAREA"<<setw(25)<<"NUMERO DE LIBROS"<<endl;
	for(i=1;i<=n;i++)
	{cout<<i<<" "<<area[i]<<setw(24)<<cant[i]<<endl;
	}
}

//b cantidad total
void total(char area[][dim], int cant[], int n)
{
	int i,total;
	total=0;
	for(i=1;i<=n;i++)
	{total=total+cant[i];
	}

cout<<"El total de libros es : "<<total<<" libros"<<endl;
}

//c busqueda
int buscar(char area[][dim], int cant[], int n, int n2)
{
	int i;
	for(i=1;i<=n;i++)
	{if(area[i]==area[n2])
	cout<<"el area :"<<area[i]<<" tiene "<<cant[i]<<" libro(s)"<<endl;
	}
}

//d minimo
void minimo(char area[][dim], int cant[], int n)
{int i,j,mincant;
char minarea[dim];

for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		if(cant[j]<cant[i])
		{mincant=cant[j];
		strcpy(minarea,area[j]);
		}
	}
	
    cout<<"La cantidad minima es : "<<mincant<<" libro(s) en "<<minarea<<endl;
}

//e màximo
void maximo(char area[][dim], int cant[], int n)
{int i,j,maxcant;
char maxarea[dim];

for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		if(cant[j]>cant[i])
		{maxcant=cant[j];
		strcpy(maxarea,area[j]);
		}
	}
	cout<<"La cantidad maxima es : "<<maxcant<<" libro(s) en "<<maxarea<<endl;
    
}

int main()
{
	char area[dim][dim];
    int cantidad[dim];
	
	int num,totallibs,num2,opc,i,sw;
	
	sw=1;
	do{	
	do{
	cout<<"Ingresar el numero de areas :"<<endl;
	cin>>num;
	}while(num<0);
	leer(area, cantidad, num);
	mostrar(area, cantidad, num);
	total(area, cantidad, num);
 	minimo(area, cantidad, num);	
	maximo(area, cantidad, num);
	
	do{
	cout<<"Ingrese el numero de area que desea conocer la cantidad [1-"<<num<<"] :"<<endl;
	cin>>num2;
	}while(num2<0 || num2>num);
	buscar(area, cantidad, num,num2);

	
	do
	{cout<<"Desea repetir la operacion [1] Si, [0] No [ ]:"<<"\b\b\b";
	cin>>sw;
	cout<<system("cls");
	}while(sw<0 || sw>1);
	if(sw==0)
	{cout<<system("cls");
	cout<<"*** FIN DEL PROCESO ***"<<endl;
	}
	}while(sw==1);
	
	getche();
	return 0;
}
