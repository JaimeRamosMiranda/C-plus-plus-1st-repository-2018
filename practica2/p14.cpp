/*
14.- Supóngase que en una reciente elección hubo cuatro candidatos, 
con identificadores 1, 2, 3,4. 
Usted habrá de encontrar mediante un programa, 
el número de votos correspondiente a cada candidato y 
el porcentaje que obtuvo respecto al total de los votantes. 
El usuario ingresara los votos de manera desorganizada, 
tal y como se obtuvieron en la elección, 
el final de datos está  representado por un cero. 
Observe, como ejemplo, 
la siguiente lista.:	1 3 1 4 2 2 1 3 1 1 1 3 4 1 2 4 4 0 
*/

#include<conio.h>
#include<iostream>
using namespace std;
//**********VALOR CENTINELA ************
int main()
{
	int v,c1,c2,c3,c4;
	float tv,p1,p2,p3,p4;
	
	
	c1=c2=c3=c4=tv=0;

	do
	   {cout<<"<ingrese el numero de su candidato "<<endl;
	    cin>>v;
	    if  ((v<1 || v>4) && v != 0)
	    cout<<"DATO ERRADO !!!!!!"<<endl;
	    
     }while((v<0 || v>4) && v != 0);
	while(v!=0)
	{switch(v)
	  {case 1:c1=c1+1;break;
	   case 2:c2=c2+1;break;
	   case 3:c3=c3+1;break;
	   case 4:c4=c4+1;break;
	  }
	 do
	   {cout<<"<ingrese el numero de su candidato "<<endl;
	    cin>>v;
	    if  ((v<1 || v>4) && v != 0)
	    cout<<"DATO ERRADO !!!!!!"<<endl;
	    
     }while((v<0 || v>4) && v != 0); 
   }
   tv=c1+c2+c3+c4;
   p1=(c1*100)/tv;
   p2=(c2*100)/tv;
   p3=(c3*100)/tv;
   p4=(c4*100)/tv;
   system("cls");
   cout<<"TOTAL DE VOTOS POR CANDIDATO"<<endl;
   cout<<"Canditato 1 : "<<c1<<" con "<<p1<<"%"<<endl;
   cout<<"Canditato 2 : "<<c2<<" con "<<p2<<"%"<<endl;
   cout<<"Canditato 3 : "<<c3<<" con "<<p3<<"%"<<endl;
   cout<<"Canditato 4 : "<<c4<<" con "<<p4<<"%"<<endl;
   getche();
   return 0;
}
   
