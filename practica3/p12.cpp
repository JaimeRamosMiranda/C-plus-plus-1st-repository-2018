/*
12.- Ingresar el nombre y dos notas de un alumno y muestre su promedio, 
un mensaje indicando si el alumno esta aprobado o desaprobado y la cualidad del alumno. 
Para cada una de las operaciones utilice funciones.
La cualidad se determina de acuerdo al siguiente cuadro
		PROMEDIO		CUALIDAD
		0	4.4		   Pésimo
		4.5	10.4		   Malo
		10.5	13.4		   Regular
		13.5	16.4		   Bueno
		16.5	20		   Excelente

*/

// librerias
#include <conio.h>
#include <iostream>
#include <iomanip>
#include <math.h>	// para usar pow()
using namespace std;
// prototipos

double promedio(float n1,float n2);
char *observacion(float pro);
char *cualidad(float pro);

 // funcion principal
int main()
 {  char nom[20];
    float nota1,nota2;
 double pro;
 int rep,i;
 i=1;
 for(;;)
 {cout<<"datos del alumno" <<i<<endl;
 cout<<"Ingrese su nombre :"<<endl;
 fflush(stdin);
 gets(nom);
 cout<<"Ingrese nota 1 . ";
 cin>>nota1;
 cout<<"Ingrese nota 2 . ";
 cin>>nota2;
 pro=promedio(nota1,nota2);
 cout<<"Promedio    : "<<pro<<endl;
 cout<<"Observacion : "<<observacion(pro)<<endl; 
 cout<<"Cualidad    : "<<cualidad(pro)<<endl;
 getche();
 cout<<"Hay mas alumno si 1 no 0"<<endl;
 cin>>rep;
 i=i+1;
 if (rep==0)break;
}
cout<<"Fin proceso"<<endl;
getche();
 return 0;
 }
// desarrollo de prototipos
double promedio(float n1,float n2)
{float p;
  p=(n1+n2)/2;
  return p;
}
char *observacion(float pro)
{if(pro>=10.5)
   return ("Aprobado");
  else  
  return("Desaprobado");
}
char *cualidad(float pro)
{if(pro>=0&&pro<=4.4)
   return ("Pesimo");
  else  
     if(pro>=4.5&&pro<=10.4)
       return ("Malo");
       else
           if(pro>=10.5&&pro<=13.4)
             return ("Regular");
             else
                if(pro>=13.5&&pro<=16.4)
                  return ("Bueno");
                  else
                     if(pro>=16.5&&pro<=20)
                        return ("Excelente");

}












