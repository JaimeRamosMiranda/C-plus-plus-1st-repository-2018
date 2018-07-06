//inclusion de librerias
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{/*****Inicio de bloque****************
 kkkkkkkkkkkkkkkkk
 kkkkkkkkkkkkk
 kkkkkkkkkk
 lllllllll
 */
 // declaracion de variables e/s
 float x1,y1,x2,y2,d;
 //DATOS
 cout<<"INGRESE LAS COORDENADAS DEL PUNTO P1 :"<<endl;
 cin>>x1>>y1;
cout<<"INGRESE LAS COORDENADAS DEL PUNTO P2 :"<<endl;
 cin>>x2>>y2;
 //proceso
 d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
 
 //salida
 cout<<"distancia de P1("<<x1<<","<<y1<<")"<<" a =====> "<<"P2("<<x2<<","<<y2<<") es  "<<d<<"  metros "<<endl;   

 getche(); // congela la salida
 return 0;
} //fin de bloque

