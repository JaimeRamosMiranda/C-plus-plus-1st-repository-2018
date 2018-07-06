/*
Tabla de multiplicar
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int n,f,c;
 
 int op;
 for(;;)
 {  
 do
 {cout<<"Ingrese >0 y <= 10 :";
  cin>>n;
 }while(n<0||n>10);
 
 for(f=1;f<=n;f++)
   {
   for(c=1;c<=n;c++)
     cout<<f*c<<"\t";
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
