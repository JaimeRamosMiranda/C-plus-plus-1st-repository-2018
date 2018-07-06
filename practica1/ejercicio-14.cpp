/*
14.-Determinar las raíces de una ecuación de segundo grado del tipo:
 AX²+BX+C=0, considere la formula general de segundo grado. 
 Considerar el caso en que las raíces sean imaginarias.
*/
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
	//Declaracion
	float a,b,c,d,r1,r2,re,im;
	//Entrada
	cout<<"Ingresar los coeficientes de la ecuaciòn cuadratica :"<<endl;
	cout<<"Ingresar el coeficiente de X^2 :"<<endl;
	cin>>a;
	cout<<"Ingresar el coeficiente de X :"<<endl;
	cin>>b;
	cout<<"Ingresar el coeficiente de termino independiente :"<<endl;
	cin>>c;
	if(a==0 && b==0)
		cout<<" La ecuacion no tiene solucion";
		else{if(a==0)
				{cout<<"La ecuacion es lineal"<<endl;
				r1=-c/b;
				cout<<"La solucion de la ecuacion es "<<r1<<endl;
				}
			else{d=pow(b,2)-4*a*c;
				if(d>0)
					{r1=(-b/2*a)+sqrt(d)/(2*a);
					r2=(-b/2*a)-sqrt(d)/(2*a);
					cout<<"Las soluciones de la ecuacion son : "<<endl;
					cout<<"La primera solucion es : "<<r1<<endl;
					cout<<"La primera solucion es : "<<r2<<endl;
					}
				else
					{if(d==0)
						{r1=-b/(2*a);
						r2=r1;
						cout<<"Las soluciones de la ecuacion son iguales: "<<endl;
						cout<<"la solucion es : "<<r1<<endl;
						}
					else{d=-d;
						re=-b/2*a;
						im=sqrt(d)/(2*a);
						cout<<"Las raices de la ecuacion son :"<<endl;
						cout<<"La primera solucion es: "<<re<<" + "<<im<<" i"<<endl;
						cout<<"La segunda solucion es: "<<re<<" - "<<im<<" i"<<endl;
					}
				}
			}
			
		}
	//cout<<"La ecuaciòn no es cuadratica"<<endl;
	//Proceso
	
	//Salida
}
