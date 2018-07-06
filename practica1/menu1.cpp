//Menu de opciones
/*
Conjunto de acciones que se presenta al usuario, entre las cuales desea elegir una de ellas
y dependiendo de la eleccion se realizarà un conjunto de acciones
*/
//inclusion de librerias
#include <iostream>
#include <conio.h>
#include <math.h>
#define pi 3.1416
using namespace std;
int main()
{
 // declaracion de variables e/s
 float largo,ancho,area,radio,a,b,c,s,ac,at;
 int opcion;
 
 cout<<"\t\t\t\tAREA DE FIGURAS GEOMETRICAS"<<endl;//\t mueve el cursor 1 espacio a la derecha
 cout<<"\t\t\t\t==========================="<<endl;
 cout<<"\t\t[1]:RECTANGULO"<<endl;
 cout<<"\t\t[2]:CIRCULO"<<endl;
 cout<<"\t\t[3]:TRIANGULO"<<endl;
 cout<<"\t\t[4]:SALIR"<<endl;
 cout<<"\t\t\t\t\t\tINGRESE UNA OPCION : [ ] "<<"\b\b\b";//\b retrocede el cursor 1 linea
 cin>>opcion;
 if(opcion>0 && opcion<5)
 {
 switch(opcion)
 {
 	case 1:	cout<<"largo :"<<endl;
 			cin>>largo;
 			cout<<"ancho :"<<endl;
 			cin>>ancho;
 			area=largo*ancho;
 			cout<<"Area rectangulo :"<<area<<" m 2"<<endl;
 			break;
 	case 2: cout<<"radio "<<endl;
 			cin>>radio;
 			area=pi*radio*radio;
 			cout<<"Area del circulo :"<<area<<" m 2"<<endl;
 			break;
 	case 3: cout<<"Ingrese los lados del triàngulo"<<endl;
 			cin>>a>>b>>c;
	        s=(a+b+c)/2;
			area=sqrt(s*(s-a)*(s-b)*(s-c));
			cout<<"Arera Triangulo :"<<area<<endl;
			break;
 	case 4: break;
 }
 }
 else cout<<"Error al ingresar opcion"<<endl;
 getche();
 return 0;
}
