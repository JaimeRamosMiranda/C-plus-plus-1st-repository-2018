//inclusion de librerias
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{/*****Inicio de bloque****************
 kkkkkkkkkkkkkkkkk
 kkkkkkkkkkkkk
 kkkkkkkkkk
 lllllllll
 */
 // declaracion de variables e/s
 float a, b, c,area,ac,at;
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
 getche(); // congela la salida
 return 0;
} //fin de bloque

