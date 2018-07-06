/*
10.- Escribir un algoritmo que permita realizar una encuesta a 6 personas 
preguntando por su bebida favorita (Pepsi Cola, Coca Cola, Kolareal), 
el algoritmo debe determinar la bebida de mayor preferencia. 
*/

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int n,op,gaseosa,i,coca,pepsi,kola;
int repite;

repite=1;
while(repite==1)
{
i=1;
coca=0;
pepsi=0;
kola=0;
system("cls");
do{
cout<<"\t\t\t\t\t\t Eliga el numero de personas a encuestar: [ ] "<<"\b\b\b";
cin>>n;
if(n<=0)
cout<<"Error al ingresar el dato."<<endl;
}while( n<=0);
while(i<=n)
{
cout<<"Eliga la gaseosa de su preferencia: "<<endl;
cout<<"\t\t[1]:Pepsi"<<endl;
cout<<"\t\t[2]:Coca Cola"<<endl;
cout<<"\t\t[3]:Kola Real"<<endl;
do
{
cout<<"\t\t\t\t\t\t ingrese el numero correspondiente: [ ] "<<"\b\b\b";
cin>>op;
if(op<1 || op>3)
cout<<"Error al ingresar la opcion."<<endl;
}while(op<1 || op>3);	

switch(op)
	{
		case 1: pepsi=pepsi+1;break;
		case 2: coca=coca+1;break;
		case 3: kola=kola+1;break;
	}
	
	i=i+1;
}
if((pepsi==coca)&&(pepsi==kola)&&(coca==kola))
cout<<"Las 3 bebidas tiene igual preferencia."<<endl;
else
 if((pepsi==coca)||(pepsi==kola)||(coca==kola))
    if(pepsi==coca)
    cout<<"Pepsi y Coca Cola tienen igual preferencia."<<endl;
	else
	   if(pepsi==kola)
	   cout<<"Pepsi y Kola Real tienen igual preferencia."<<endl;
	   else
	   if (coca==kola)
	   cout<<"Kola Real y Coca Cola tienen igual preferencia."<<endl;  
if(pepsi>coca && pepsi>kola)
cout<<"Pepsi es de mayor preferencia."<<endl;
else
 if(coca>pepsi && coca>kola)
cout<<"Coca Cola es de mayor preferencia."<<endl;
 else
 if(kola>coca && kola>pepsi)
 cout<<"Kola Real es de mayor preferencia."<<endl;


cout<<"Pepsi : "<<pepsi<<endl;
cout<<"Coca Cola : "<<coca<<endl;
cout<<"Kola Real : "<<kola<<endl;

	
getche();

cout<<"Hay mas personas a encuestar Si[1] No [0]"<<endl;
cin>>repite;
}

system("cls");
cout<<"FIN DEL PROCESO"<<endl;

getche();
return 0;
}


