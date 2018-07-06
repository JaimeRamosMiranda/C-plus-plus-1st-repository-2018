/*
4.- Escriba un programa usando la función anterior para Mostrar todos los primos  en el intervalo [li, ls].
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int primo(int n);
int main ()
{
	int i,ls,li;
     
   
       cout<<"Ingrese limite Inferior :";
       cin>>li;
      
    cout<<"Ingrese Limite Superior :"<<endl;
    cin>>ls;
    cout<<endl;
    for(i=li;i<=ls;i++)
      {
        if(primo(i)==1)
          cout<<i<<"\t";
                
         }     
	cout<<endl;
    cout<<"  "<<endl;
	getche();
	return 0;
}
int primo(int n)
 {int pri,i;
   pri=1;
   for(i=2;i<n;i++)
       if ((n%i==0)&& (n>2))
          pri=0;
   return pri;
}         
