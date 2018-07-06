#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>
#include<iomanip.h>
#define MAX 150
int main()
{
int peso[MAX],i,c1=0,c2=0,c3=0,c4=0,n,j;
do
{cout<<"Ingrese el tamaño del vector : "<<endl;
 cin>>n;
}while(n<1 || n>MAX);
for (i=0;i<n;i++)
{
cout<<"Ingrese peso "<<i+1<<endl;
cin>>peso[i];
}
system("cls");
cout<<"MOSTRANDO NUMEROS "<<endl;;
for (i=0;i<n;i++)

cout<<"Numero "<<i+1<<"  "<<peso[i]<<endl;
getche();
system("cls");
printf("\n Mostrando estadisticas de los alumnos\n");
cout<<setw(10)<<"RANGO "<<setw(20)<<"Numero de Alumnos"<<setw(15)<<"Histograma"<<endl;
cout<<setw(45)<<"=============================================================="<<endl<<endl;
for (i=0;i<n;i++)
{
if(peso[i]<40)
c1=c1+1;
if(peso[i]>=40 && peso[i]<=50)
c2=c2+1;
if(peso[i]>50 && peso[i]<60)
c3=c3+1;
if(peso[i]>=60)
c4=c4+1;
}

//for(i=0;i<n;i++)


cout<<setw(10)<<"[0 -  < 40]: "<<setw(15)<<c1<<setw(10);

for(j=1;j<=c1;j++)
     cout<<"*";
cout<<endl; 
     
cout<<setw(10)<<"[40 - < 50]: "<<setw(15)<<c2<<setw(10);

for(j=1;j<=c2;j++)
      cout<<"*";
cout<<endl;
   
cout<<setw(10)<<"[50 - < 60]: "<<setw(15)<<c3<<setw(10);

for(j=1;j<=c3;j++)
      cout<<"*";
cout<<endl;
   
cout<<setw(10)<<"[     >=60]: "<<setw(15)<<c4<<setw(10);

for(j=1;j<=c4;j++)
      cout<<"*";
cout<<endl;
  

system("pause");
return 0;
}
