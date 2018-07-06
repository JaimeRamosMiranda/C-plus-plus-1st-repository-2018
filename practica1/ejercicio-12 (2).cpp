//inclusion de librerias
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{ // declaracion de variables e/s
 int ed1,ed2,ed3,mayor,medio,menor;
 //DATOS
 cout<<"INGRESE la edad 1"<<endl;
 cin>>ed1;
 cout<<"INGRESE la edad 2"<<endl;
 cin>>ed2;
 cout<<"INGRESE la edad 3"<<endl;
 cin>>ed3;	//
 //proceso
 if(ed1>0 && ed2 >0 && ed3>0)
 	{if(ed1>ed2)
 		{mayor=ed1;
 		menor=ed2;
		 }
	else
		{mayor=ed2;
		menor=ed1;
		}
	if(ed3>=mayor)
		mayor=ed3;
	if(ed3<menor)
		menor=ed3;
	medio=(ed1+ed2+ed3)-(mayor+menor);
	cout<<"Hijo mayor tiene  "<<mayor<<" Años "<<endl;
	cout<<"Hijo medio tiene  "<<medio<<" Años "<<endl;
	cout<<"Hijo menor tiene  "<<menor<<" Años "<<endl;
	}
	else cout<<"Existe error al ingresar alguna edad"<<endl;
	getche();
	return 0;
}
