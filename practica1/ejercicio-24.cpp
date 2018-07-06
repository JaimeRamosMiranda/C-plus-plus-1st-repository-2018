#include<iostream>
#include<conio.h>
#define p1 70
#define p2 90
#define p3 120
#define p4 10
#define p5 50
using namespace std;
int main()
{
//variables
float s1,s2,s3,st;
int h,esc,v;
//entrada	
cout<<"Ingrese el numero de hijos que tiene: "<<endl;
cin>>h;	
cout<<"Ingrese el numero de hijos en edad escolar: "<<endl;
cin>>esc;
cout<<"Digite el numero 1 si la madre es viuda o el numero 0 en caso contrario: "<<endl;
cin>>v;	
//proceso
if( h>=0 && esc>=0 && (v==0 || v==1) && esc<=h)
{
 if (h<=2)
 s1=p1;
 else
     if (h>2 && h<=5)	
     s1=p2;
     else
     s1=p3;
 s2=esc*p4;
 if (v==1)
 s3=p5;
 else
 s3=0;
 st=s1+s2+s3;
 cout<<"Subsidio total: "<<st<<" soles"<<endl;
    	
}
else
cout<<"Error al ingresar los datos."<<endl;	
	
getche();
return 0;	
}
