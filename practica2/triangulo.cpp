/*
Dibujar con caracteres, un triángulo de catetos desde 1 a 15 de longitud
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int n,f,c;
 char car;
 int op;
 for(;;)
 	{  
 	do
 	{cout<<"Ingrese >0 y <= 15 :";
 	 cin>>n;
 	}while(n<0||n>15);
 	cout<<"Ingrese un caracter :"<<endl;
 	cin>>car;
 	for(f=1;f<=n;f++)
  	 {
  	 for(c=1;c<=f;c++)
    	 cout<<car;
   	cout<<endl;
		}
	getche();
	cout<<"Desea continuar Si 1 No 0"<<endl;
	cin>>op;
	if(op==0)break;
	}
	system("cls");
	cout<<"fin proceso"<<endl;
	getche();
	return 0;
}
