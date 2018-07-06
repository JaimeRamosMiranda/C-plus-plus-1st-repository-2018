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
//estructura
struct libreria
{
	char area[20];
	int	cantidad;
};
//a ingresar datos
void leer(libreria lib[],int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
	
		cout<<"Ingresar el nombre del area "<<i<<":"<<endl;
		fflush(stdin);
		gets(lib[i].area);
		
		do{cout<<"Ingresar la cantidad de libros del area "<<i<<":"<<endl;
		cin>>lib[i].cantidad;
		}while(lib[i].cantidad<0);
	}
}

//a mostrando cantidades
void mostrar(libreria lib[],int n)
{
	int i;
	
	cout<<"\tAREA"<<setw(25)<<"NUM LIBROS"<<endl;
	for(i=1;i<=n;i++)
	{cout<<i<<" "<<lib[i].area<<setw(24)<<lib[i].cantidad<<endl;
	}
}

//b cantidad total
int total(libreria lib[],int n)
{
	int i,total;
	total=0;
	for(i=1;i<=n;i++)
	{total=total+lib[i].cantidad;
	}
	return total;
}

//c busqueda
int buscar(libreria lib[],int n, int n2)
{
	int i;
	for(i=1;i<=n;i++)
	{if(lib[i].area==lib[n2].area)
	cout<<"el area :"<<lib[i].area<<" tiene "<<lib[i].cantidad<<" libro(s)"<<endl;
	}
}

//d minimo
void minimo(libreria lib[],int n)
{int i,j,mincant;
char minarea[20];

for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		if(lib[j].cantidad<lib[i].cantidad)
		{mincant=lib[j].cantidad;
		strcpy(minarea,lib[j].area);
		}
	}
	
    cout<<"La cantidad minima es : "<<mincant<<" libro(s) en "<<minarea<<endl;
}

//e màximo
void maximo(libreria lib[],int n)
{int i,j,maxcant;
char maxarea[20];

for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		if(lib[j].cantidad>lib[i].cantidad)
		{maxcant=lib[j].cantidad;
		strcpy(maxarea,lib[j].area);
		}
	}
	cout<<"La cantidad maxima es : "<<maxcant<<" libro(s) en "<<maxarea<<endl;
    
}

int main()
{
	libreria canlib[max];
	int num,totallibs,num2,opc,i,sw;
	
	sw=1;
	do{	
	do{
	cout<<"Ingresar el numero de areas :"<<endl;
	cin>>num;
	}while(num<0);
	leer(canlib,num);
	mostrar(canlib,num);
	totallibs=total(canlib,num);
	cout<<"El total de libros es : "<<totallibs<<" libros"<<endl;
	do{
	cout<<"Ingrese el numero de area que desea conocer la cantidad [1-"<<num<<"] :"<<endl;
	cin>>num2;
	}while(num2<0 || num2>num);
	buscar(canlib,num,num2);
	minimo(canlib,num);	
	maximo(canlib,num);
	
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
