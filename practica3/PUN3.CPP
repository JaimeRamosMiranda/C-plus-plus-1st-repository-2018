
#include <conio.h>
#include <iostream.h>
int main()
{// declracion de variables de I/O
  float sm,skm,ts,th,v,*p1,*p2,*p3,*p4,*p5,*p6;
 // captura de datos
 p1=&sm;
 p2=&skm;
 p3=&ts;
 p4=&th;
 p5=&v;
 cout<<"Ingrese el espacio recorrido en metros :";
 cin>>*p1;
 cout<<"Ingrese tiempo en segundos:";
 cin>>*p3;
 // proceso
 *p2=*p1/1000;
 *p4=*p3/3600;
 *p5=*p2 / *p4;
 // salida
 cout<<"Distancia en Km :  "<<*p2<<endl;
 cout<<"Tiempo en horas :  "<<*p4<<endl;
 cout<<"Velocidad : "<<*p5<<"Km / Hora"<<endl;
system("pause");
getche();
 return 0;
} 
