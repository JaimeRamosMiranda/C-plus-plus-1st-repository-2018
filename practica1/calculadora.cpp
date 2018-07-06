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
 float n1,n2,r,sw;
 char op;
 //DATOS
 cout<<"INGRESE EL PRIMER NUMERO "<<endl;
 cin>>n1;
 cout<<"INGRESE EL SEGUNDO NUMERO "<<endl;
 cin>>n2;
 cout<<"INGRESE UN OPRADOR <+,-,*,/> "<<endl;
 cin>>op;
 //proceso
 sw=1;
 switch(op)
   {case '+': r=n1+n2;break;
    case '-': r=n1-n2;break;
    case '*': r=n1*n2;break;
    case '/': if (n2!=0)
	             r=n1/n2;
	          else
			     sw=0;break;
	default : sw=2;
	   
   }
 //salida
 if(sw==1)
   cout<<n1<<" "<<op<<" "<<n2<<" = "<<r<<endl;
 else
     if(sw==0)
	    cout<<" No existe division por cero"<<endl;
	 else
	    cout<<" Operador errado   "<<endl;
		   
 getche(); // congela la salida
 return 0;
} //fin de bloque

