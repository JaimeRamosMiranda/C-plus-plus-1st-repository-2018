#include<iostream>
#include<iomanip>
#include<String.h>
#include<conio.h>
using namespace std;
#define max 10
int main()
{
	int n,peso[max],rango[5]={0},i,j;
	do 
	{cout<<"n= ";
	 cin>>n;
  }while(n<0 || n>max);
	
    	for ( i=0; i<n; i++)
     	{
		cout << "peso[" << i+1 << "] = ";
         cin >> peso[i];
  	     }
 // calculo del vector rango
  	   for ( i=0; i<n; i++)
         {if (peso[i]>50 && peso[i]<=60)
           rango[0]=rango[0]+1;
           if (peso[i]>60 && peso[i]<=70)
           rango[1]=rango[1]+1;
           if (peso[i]>70 && peso[i]<=80)
           rango[2]=rango[2]+1;
           if (peso[i]>80 && peso[i]<=90)
           rango[3]=rango[3]+1;
           if (peso[i]>90)
           rango[4]=rango[4]+1;
           }  
  	 system("cls");
       cout<<"\t\t\t\t RESULTADOS "<<endl;
       cout<<setw(10)<<"RANGO "<<setw(10)<<"FRECUENCIA"<<setw(15)<<"HISTOGRAMA"<<endl;
       cout<<"------------------------------------------------------------------"<<endl; 
    for(i=0;i<5;i++)
  	 {  switch (i)
  	     {case 0 : cout<<setw(10)<<"  51 - 60  "<<setw(10)<<rango[0]<<setw(15);break;
  	      case 1 : cout<<setw(10)<<"  61 - 70  "<<setw(10)<<rango[1]<<setw(15);break;
  	      case 2 : cout<<setw(10)<<"  71 - 80  "<<setw(10)<<rango[2]<<setw(15);break;
  	      case 3 : cout<<setw(10)<<"  81 - 90  "<<setw(10)<<rango[3]<<setw(15);break;
  	      case 4 : cout<<setw(10)<<"  90 a mas "<<setw(10)<<rango[4]<<setw(15);break;
         }
      for ( j=1; j<=rango[i]; j++)
           cout<<"*";
       cout<<endl;
     }      
system("pause");getche();
return 0;
}         

