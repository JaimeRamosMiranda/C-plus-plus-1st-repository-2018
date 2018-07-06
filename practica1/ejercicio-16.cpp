
#include <iostream>
#include <conio.h>
#define p1 0.1
#define p2 0.05
#define p3 0.03
using namespace std;
int main()
{
//variables
float s,d,sn;
//entrada
cout<<"Ingrese el sueldo: "<<endl;
cin>>s;
//proceso	
if(s>0)
{
  if (s<=1000)
     d=p1*s;
  else
     if (s>1000 && s<=2000)
     d=100+p2*(s-1000);
	 else
	 d=100+50+p3*(s-2000);
sn=s-d;
//salidas
cout<<"Sueldo bruto : "<<s<<" soles"<<endl;
cout<<"Descuento    : "<<d<<" soles"<<endl;
cout<<"Sueldo neto  : "<<sn<<" soles"<<endl;      
}
else
cout<<"Error al ingresar el sueldo."<<endl;

getche();
return 0;	
}
