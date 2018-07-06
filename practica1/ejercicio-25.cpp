
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
//variables
int a;
//entrada
cout<<"Ingrese el año: "<<endl;
cin>>a;
//proceso	
if(a%4==0 && a%100!=0)
  cout<<"El año es bisiesto."<<endl;
  else
     if (a%400==0)
     cout<<"El año es bisiesto."<<endl;
     else 
	 cout<<"El año no es bisiesto."<<endl;	
	
getche();
return 0;	
}
