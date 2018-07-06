#include<conio.h>
#include<iostream>
#include<math.h>
using namespace std;

//declaracion de funciones como prptotipos

int leerNumero();
int inversa(int n);
void mensaje(int , int);

// programa principal

int  main()
{
long n,copia, inv=0;
char op;

n=leerNumero(); //la variable n invoca una funcion
copia=n;
inv=inversa(n); //se invoca la funcion inversa con un argmento
cout<<"Inversa: "<<inv<<endl;
mensaje(copia,inv); //se invoca la funcion mensaje con dos argmentos
getche();


return 0;
}

// desarrolo de las funciones declaradas como proyotipos

//no recibe pero retorna
int leerNumero()
{int n;
cout<<"ingrese numero entero: "; 
cin>>n;
return n;
}

//recibe y retorna
int inversa(int n)
{int inv=0;
  while(n>0)
  {	inv = inv*10 + n%10;
	n =n/10;
  }
return inv;
}

//cuando hay diferentes tipos de resultados, usar void porque no retorna un unico valor
void mensaje(int copia,int inv)
{

if(copia==inv)
	cout<<" si es capicua !";
else
	cout<<" no es capicua ";

}
