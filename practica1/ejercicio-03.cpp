//inclusion de librerias
#include <iostream>
#include <conio.h>
using namespace std;
#define por1 0.55 //55%
#define por2 0.3 //30%
#define por3 0.15 //15%
int main()
{/*****Inicio de bloque****************
 kkkkkkkkkkkkkkkkk
 kkkkkkkkkkkkk
 kkkkkkkkkk
 lllllllll
 */
 // declaracion de variables e/s
 float e1, e2, e3,ef,tf,pf,pe;
 //DATOS
 cout<<"INGRESE LA NOTA DEL EXAMEN 1"<<endl;
 cin>>e1;
 cout<<"INGRESE LA NOTA DEL EXAMEN 2"<<endl;
 cin>>e2;
 cout<<"INGRESE LA NOTA DEL EXAMEN 3"<<endl;
 cin>>e3;
 cout<<"INGRESE LA NOTA DEL EXAMEN FINAL"<<endl;
 cin>>ef;
 cout<<"INGRESE LA NOTA DEL TRABAJP FINAL"<<endl;
 cin>>tf;

 //proceso
 pe=(e1+e2+e3)/3;
 pf=por1*pe+por2*ef*por3*tf;
 
 //salida
 cout<<"Promedio de examenes  =====> "<<pe<<endl;   
 cout<<"Examen Final  =====> "<<ef<<endl;
 cout<<"Nota del trabajo Final  =====> "<<tf<<endl;
 cout<<"Promedio Final    =====> "<<pf<<endl;
 getche(); // congela la salida
 return 0;
} //fin de bloque

