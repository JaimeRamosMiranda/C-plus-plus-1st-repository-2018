
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
//variables
int a;
//entrada
cout<<"Ingrese el a�o: "<<endl;
cin>>a;
//proceso	
if(a%4==0 && a%100!=0)
  cout<<"El a�o es bisiesto."<<endl;
  else
     if (a%400==0)
     cout<<"El a�o es bisiesto."<<endl;
     else 
	 cout<<"El a�o no es bisiesto."<<endl;	
	
getche();
return 0;	
}
