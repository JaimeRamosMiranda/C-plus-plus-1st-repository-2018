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
 float ed1,ed2,ed3,ma,me,ce;
 //DATOS
 cout<<"INGRESE la edad del primer hijo"<<endl;
 cin>>ed1;
 cout<<"INGRESE la edad del Hijo hijo"<<endl;
 cin>>ed2;
 cout<<"INGRESE la edad del tercer hijo"<<endl;
 cin>>ed3;
 //proceso
 if(ed1>0&&ed2>0&&ed3>0)
 {
 
 if(ed1>ed2)
   {ma=ed1;
    me=ed2;
   }
  else
    {ma=ed2;
    me=ed1;
   }
  if(ed3>ma)
    ma=ed3;
   if(ed3<me)
      me=ed3;
  ce=(ed1+ed2+ed3)-(ma+me);    
	  	    
 //salida
 cout<<"Hijo Mayor  =====> "<<ma<<"  Años "<<endl;   
 cout<<"Hijo Medio  =====> "<<ce<<"  Años "<<endl;
 cout<<"Hijo Menor  =====> "<<me<<"  Años "<<endl;
}
else
cout<<"Dato Errado !!!!!!!!!!!!!"<<endl;
 getche(); // congela la salida
 return 0;
} //fin de bloque

