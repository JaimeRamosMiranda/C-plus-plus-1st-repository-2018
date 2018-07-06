#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int nota,s,i;
 s=0;
 do
 {cout<<" Ingrese las notas [0 20] : "<<endl;
  cin>>nota;
  if(nota<0||nota>20)
    cout<<"Dato Errado "<<"\a\a\a";
}while(nota<0||nota>20);
cout<<"Nota correcta"<<endl;
getche();
return 0;
}

