/*
22.- Escriba un algoritmo para determinar 
las posibles adquisiciones que se pueden  
hacer con 87 soles sin que sobre dinero de 3 productos de 5 , 7 y 19 soles  
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int a,b,c;
 for(a=0;a<=87/5;a++)
    for(b=0;b<=87/7;b++)
       for(c=0;c<=87/19;c++)
         if((5*a+7*b+19*c)==87)
            cout<<"A "<<a<<" B "<<b<<" C "<<c<<endl;
            
getche();
return 0;
}
