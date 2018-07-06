/*
2.- Escribir un pseudocódigo y el correspondiente programa en C++ 
que obtenga y escriba tanto los términos como 
la suma de los términos de la siguiente serie. 
 	2, 7, 10, 15, 18, 23,………..,2500 
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{int ter,sw,suma;
 sw=1;
 ter=2;
 suma=0;
 while(ter<=2500)
 {cout<<ter;
   suma=suma+ter; 
  if(ter<2500)
    cout<<", ";
    if(sw==1)
      {ter=ter+5;
       sw=0;
       }
    else
      {ter=ter+3;
       sw=1;
       }
   
  }
cout<<endl;    
cout<<"SUMA SERIE : "<<suma<<endl;
getche();
return 0;
}
