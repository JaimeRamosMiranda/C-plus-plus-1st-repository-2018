/*
16.- Escribir un programa que muestre una salida con la siguiente secuencia numérica: 1, 5, 3, 7, 5, 9, 7, ..., 23 
*/
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i,sw;
	i=1;
	sw=0;
	
	cout<<i;
	while(i>0)	
	{if(sw==0 && i<23)
		{
		i=i+4;
		sw=1;
		cout<<" ,"<<i;
		}
	if(sw==1 && i<23)
		{
		i=i-2;
		sw=0;
		cout<<" ,"<<i;
		}	
	}
	getche();
	return 0;
}
