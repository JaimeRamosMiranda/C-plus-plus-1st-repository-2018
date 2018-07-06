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
/*	
	op=1;
	
	while(op==1)
	{system("cls");
	
	r1=r2=r3=0;

	do
	   {cout<<"ingrese puntaje del alumno "<<"   ";
	    cin>>pun;
	    if  ((pun<0 || pun>100) && pun != -1)
	    cout<<"DATO ERRADO !!!!!!"<<endl;
	    
     }while((pun<0 || pun>100) && pun != -1);
	while(pun!=-1)
	{
	
	 if (pun>=0&& cal<= 29)
	     {
		 r3=r3+1;
	     cal='c';
	 }
	 else
         if (pun>=30 && cal<= 69)
	     {
		 r2=r2+1;
	     cal='b';
	 }
	 else
             if (pun>=70&& cal<= 100)
	     {
		 r1=r1+1;
	     cal='a';
	 }
	do
   {cout<<"ingrese el puntaje del alumno"<<endl<<"para finalizar ingrese -1"<<endl;
   cin>>pun;
   if ((pun<0 || pun>100) && pun != -1);
   cout<<"dato errado!!!!!"<<endl;
   
	    }while((pun<0 || pun>100) && pun != -1);
     ce=r1+r2+r3;
     }     
	 system("cls");               
	 
	system("cls");
	cout<<"numero de estudiantes : "<<ce<<endl;
	cout<<"Rango : [0.00 - 29] hay "<<r3<<"  Alumnos "<<endl;
	cout<<"Rango : [30 - 69] hay "<<r2<<"  Alumnos "<<endl;
	cout<<"Rango : [70 - 100] hay "<<r1<<"  Alumnos "<<endl;
	cout<<"hay mas grupos si [1] no [0]"<<endl;
	cin>>op;
}
    system("cls");
    cout<<"*********gracias por usar mi aplicacion*******"<<endl;
	
	

	getche();
    return 0;
}
*/
