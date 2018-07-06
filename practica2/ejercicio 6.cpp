/*
6.- En un examen el tipo de calificación es el siguiente: 
Puntaje	  	Calificación 
100 - 70	A   
69 - 30		B   
29 -   0	C 
Escribe un algoritmo que encuentre: El número de estudiantes que rindieron el examen. 
El número de estudiantes que obtuvieron A, B y C. 
El algoritmo termina cuando se le ingresa un puntaje negativo. 
*/

#include<conio.h>
#include<iostream>
using namespace std;
//**********VALOR CENTINELA ************
int main()
{
	int a,b,c,i;
	float pun;
	char cal;
	int op;//metodo de interruptor para usar varios grupos
	a=b=c=0;
	i=1;
	do{cout<<"Ingrese el puntaje de alumno : "<<i<<" [0-100]"<<endl;
	cin>>pun;
		if((pun<0 || pun>100) && pun!=-1)
		cout<<"Dato errado"<<endl;
	}while((pun<0 || pun>100) && pun!=-1);
	
	while(pun!=-1)
	{if(pun>=0 && pun <30)
		c=c+1;
		else
		if(pun>=30 && pun<70)
			b=b+1;
			else
			a=a+1;
	i=i+1;
	
	do{cout<<"Ingrese el puntaje de alumno : "<<i<<" [0-100]"<<" [Ingrese -1 para terminar]"<<endl;
	cin>>pun;
		if((pun<0 || pun>100) && pun!=-1)
		cout<<"Dato errado"<<endl;
	}while((pun<0 || pun>100) && pun!=-1);
	}
	cout<<"Numero total de estudiantes : "<<i-1<<endl;
	cout<<"Numero total de estudiantes con calificacion A: "<<a<<endl;
	cout<<"Numero total de estudiantes con calificacion B: "<<b<<endl;
	cout<<"Numero total de estudiantes con calificacion C: "<<c<<endl;
	getche();
	return 0;	
}

