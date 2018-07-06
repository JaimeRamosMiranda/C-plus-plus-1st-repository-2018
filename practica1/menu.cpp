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
 do
 {system("cls");
 do
  {system("cls");
 cout<<"\t\t\t\tAREA DE FIGURAS GEOMETRICAS"<<endl;
 cout<<"\t\t\t\t==========================="<<endl;
 cout<<"\t\t[1]:RECTANGULO"<<endl;
 cout<<"\t\t[2]:CIRCULO"<<endl;
 cout<<"\t\t[3]:TRIANGULO"<<endl;
 cout<<"\t\t[4]:SOLUCION 1 DE PRACTICA 1"<<endl;
 cout<<"\t\t[5]:SALIR"<<endl;
 cout<<"\t\t\t\t\t\tINGRESE UNA OPCION : [ ] "<<"\b\b\b";
 cin>>opcion;
  }while(opcion <1 || opcion >5);
  //proceso
  switch(opcion)
    {case 1: cout<<"Ingrese largo :";
             cin>>largo;
             cout<<"Ingrese ancho :";
             cin>>ancho;
			 area=largo * ancho;
			 cout<<"Arera Rectangulo :"<<area<<endl;
			 break; 
	 case 2: cout<<" Ingrese Radio :"<<endl;
	          cin>>radio;
			  area=pi*radio*radio;
			  cout<<"Arera Circulo :"<<area<<endl;
			  break;
	case 3: cout<<" Ingrease los tres lados de un triangilo :"<<endl;
	          cin>>a>>b>>c;
	          s=(a+b+c)/2;
			  area=sqrt(s*(s-a)*(s-b)*(s-c));
			  cout<<"Arera Triangulo :"<<area<<endl;
			  break;
	case 4: 
 //DATOS
 cout<<"INGRESE EL LADO A"<<endl;
 cin>>a;
 cout<<"INGRESE EL LADO B"<<endl;
 cin>>b;
 cout<<"INGRESE EL LADO C"<<endl;
 cin>>c; //almacena un valor a la variable c
 //proceso
 area=(a-c)*b/2;
 ac=b*c;
 at=area+ac;
 //salida
 cout<<"Area Triangulo =====> "<<area<<"  metros cuadrados "<<endl;   
 cout<<"Area Cuadrado  =====> "<<ac<<"  metros cuadrados "<<endl;
 cout<<"Area Total     =====> "<<at<<"  metros cuadrados "<<endl;
 		 
	}
	 getche(); // congela la salida
}while(opcion !=5);
system("cls");
cout<<"******************* FIN PROCESO ***************"<<endl;  
 getche(); // congela la salida
 return 0;
} //fin de bloque

