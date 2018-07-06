
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int n,s,i;
 s=0;
 do
 {cout<<" Ingrese numero > 0 a generar : "<<endl;
  cin>>n;
  if(n<=0)
    cout<<"Dato Errado "<<"\a\a\a";
}while(n<=0);
 
 
i=1;
cout<<"NUMEROS"<<endl;
cout<<"========="<<endl;

while(i<=n)
{cout<<"   "<<i<<endl;
s=s+i;
i=i+1;
}
cout<<"----------"<<endl;
cout<<"   "<<s<<endl;

getche();
return 0;
}
