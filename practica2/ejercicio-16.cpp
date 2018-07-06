/*
16.- Escribir un programa que muestre una salida con la siguiente secuencia numérica: 1, 5, 3, 7, 5, 9, 7, ..., 23 
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int i,ter;

i=1;
ter=1;
while(ter<23)
{
	
	if(ter==1)
	cout<<ter<<", ";
	
	if (i%2!=0)
	ter=ter+4;
	else
	ter=ter-2;
	
	
	if(ter<23)
	cout<<ter<<", ";
    else
    cout<<ter;
	i=i+1;
}

	
	
	
getche();
return 0;
}
