
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{int n,s,i;
 s=0;
 cout<<" Ingrese numero a generar : "<<endl;
 cin>>n;
 if(n>0)
{i=1;
cout<<"NUMEROS"<<endl;
cout<<"========="<<endl;

while(i<=n)
{if(i%3==0&&i%6!=0  )
   {cout<<"   "<<setw(4)<<i<<endl;
    s=s+i;
   }
i=i+1;
}
cout<<"----------"<<endl;
cout<<"   "<<s<<endl;
}
else
cout <<"Dato Eerrado "<<endl;
getche();
return 0;
}
