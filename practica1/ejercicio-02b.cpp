//inclusion de librerias
#include <iostream>
#include <conio.h>
#include <math.h>
#define pi 3.1416
using namespace std;
int main()
{/*****Inicio de bloque****************
 kkkkkkkkkkkkkkkkk
 kkkkkkkkkkkkk
 kkkkkkkkkk
 lllllllll
 */
 // declaracion de variables e/s
 float h, r, c,area,ac,at;
 //DATOS
 cout<<"INGRESE EL Radio del circulo "<<endl;
 cin>>r;
 cout<<"INGRESE la hipotenusa del triangulo"<<endl;
 cin>>h;
  //proceso
   c=sqrt(h*h -r*r);
   at=(r*c/2)*2;
   ac=(pi*r*r)/2;
 area=at+ac;
 
 //salida
 cout<<"Area Triangulo =====> "<<at<<"  metros cuadrados "<<endl;   
 cout<<"Area Semi Circulo  =====> "<<ac<<"  metros cuadrados "<<endl;
 cout<<"Area Total     =====> "<<area<<"  metros cuadrados "<<endl;
 getche(); // congela la salida
 return 0;
} //fin de bloque

