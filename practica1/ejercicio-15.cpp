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
 float a,b,c,area,s;
 int na;
 //DATOS
 cout<<"INGRESE los 3 lados >0 de un triangulo :"<<endl;
 cin>>a>>b>>c;
 //proceso
  if(a>0&&b>0&&c>0)
    if(a<b+c&&b<a+c&&c<b+a)
      {s=(a+b+c)/2;
	   area=sqrt(s*(s-a)*(s-b)*(s-c));  
       if(a==b&&b==c&&c==a) 
          cout<<"Es un Triangulo Equilatero "<<endl;
          else
             if(a==b||b==c||c==a) 
                cout<<"Es un Triangulo Isoceles "<<endl;
		     else
                cout<<"Es un Triangulo Escaleno "<<endl;
        cout<<"Area Trinagulo : "<<area<<endl;
	    }
	 else
	    cout<<"No son lados de un Triangulo"<<endl;
	else
    
    cout<<"Dato Errado !!!!!!!!!!!!!"<<endl;
 getche(); // congela la salida
 return 0;
} //fin de bloque

