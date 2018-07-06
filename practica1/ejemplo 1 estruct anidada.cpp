/*
Escribir un programa para ingresar 2 numeros reales y un operador:
+,-,*,/ y mostrar el resultado de la operacion
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
float a,b,r;
char op;
//datos
cout<<"Ingrese primer numero"<<endl;
cin>>a;
cout<<"Ingrese segundo numero"<<endl;
cin>>b;
cout<<"Ingrese un operador <+,-,*,/>"<<endl;
cin>>op;
//proceso
switch(op)
	{
		case '+': r=a+b; break;
		case '-': r=a-b; break;
		case '*': r=a*b; break;
		case '/': if(b!=0)
					r=a/b;
					else cout<<"Division por cero no existe"<<endl; break;
				exit (0);	break;
		default: cout<<"Operador errado "; break;
	}
//salida
cout<<a<<op<<b<<"="<<r<<endl;
getche();
return 0;
}
