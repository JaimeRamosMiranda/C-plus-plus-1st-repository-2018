/*#include <stdio.h>
#include <iostream.h>
#include <conio.h>
void intercambio(int x,int y);
int main() 
{
int a, b;
a=7;
b=10;
cout<<" a= "<<a<<" b = "<<b<<endl;
intercambio(a,b);
cout<<" a= "<<a<<" b = "<<b<<endl;
getche();
return 0; 
    } 
void intercambio(int x,int y)
 {int z;
   z=x;
   x=y;
   y=z;
}  
*/
#include <stdio.h>
#include <iostream.h>
#include <conio.h>
void intercambio(int *x,int *y);
int main() 
{
int a, b;
a=7;
b=10;
cout<<" a= "<<a<<" b = "<<b<<endl;
intercambio(&a,&b);
cout<<" a= "<<a<<" b = "<<b<<endl;
getche();
return 0; 
    } 
void intercambio(int *x,int *y)
 {int z;
   z=*x;
   *x=*y;
   *y=z;
}  
