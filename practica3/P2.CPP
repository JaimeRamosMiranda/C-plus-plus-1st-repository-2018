/*
2.- Determinar la suma de los n primeros términos de la siguiente serie:
1+X+X^2/2!+X^3/3!...
*/

// librerias
#include <conio.h>
#include <iostream>
#include <iomanip>
#include <math.h>	// para usar pow()
using namespace std;

// prototipos
int leeN();
double leeX();
double sumaSerie(int n, double x);
int factorial(int n);
void imprime(double rpta);
 // funcion principal
int main()
 {  int n;
     double x,suma;
	 n=leeN();			// llamada a leeN()
	 x=leeX();			// llamada a leeX()
	 suma=sumaSerie(n,x);	// llamada a sumaSerie()
	imprime(suma);			// llamada a imprime()
}
// desarrollo de prototipos
int leeN()
  {
	int n;
	cout <<"Cuantos terminos: "; cin >> n;
	return n;
 }
//------------
double leeX()
  {
	double x;
	cout <<"Valor de X: "; cin >> x;
	return x;
 }
//------------
double sumaSerie(int n, double x)
  {
	double suma=1;
	for (int cont=1; cont<n; cont++)
    {
		suma = suma +  pow(x,cont)/factorial(cont);
	}
	return suma;
}
//------------
int factorial(int n)
   {
	int f=1;
	for (int c=1; c<=n; c++){
		f = f* c;
	}
	return f;
}
//------------
void imprime(double rpta)//rpta es el argumento que sera reemplazado por el valor en el prog principal
 {
	cout << endl<< "suma de serie: "<<rpta;
	getch();
}
//------------
