#include<iostream>
#include<conio.h>
#define max 20
using namespace std;
int main()
{float talla[max],n,suma,pro,ma,me;
int i,cma,cme;
cma=cme=0;
 do
  {cout<<"Ingrese el tamaño del vector :"<<endl;
    cin>>n;
	}while(n<1||n>max);
  //lectura
  for(i=0;i<n;i++)
    { do
       {cout<<"tala["<<i+1<<"] = ";
        cin>>talla[i];
       }while(talla[i]<=0);
	}
//salida
  system("cls");
  cout<<"tallas ingresadas"<<endl;
  for(i=0;i<n;i++)
    cout<<"tala["<<i+1<<"]="<<talla[i]<<endl;
//promedio de tallas
  suma=0;
 for(i=0;i<n;i++)
     suma=suma+talla[i];
 pro=suma/n;
 cout<<"Prmeduio dce tallas :"<<pro<<endl; 
 //mayor talla
   ma=talla[0];
  for(i=1;i<n;i++)
      if(talla[i]>ma)
        ma=talla[i]; 
//menor talla
me = talla[0];
for(i=1;i<n;i++)
      if(talla[i]<me)
        me=talla[i];
 cout<<"mayor talla :"<<ma<<endl;
 cout<<"Menor talla :"<<me<<endl;       
//igualdad de tallas
for(i=0;i<n;i++)
      if(talla[i]==ma)
        cout<<"talla["<<i<<"]="<<talla[i]<<endl;  
for(i=0;i<n;i++)
      if(talla[i]==me)
        cout<<"talla["<<i<<"]="<<talla[i]<<endl;
//contadores superio al promedio e inferior al promedio        
 for(i=0;i<n;i++)
      if(talla[i]>pro)
	     cma=cma+1;
	   else
	     cme=cme+1; 	        
cout<<cma<<"  superan al promedio"<<endl;	     
cout<<cme<<"  son inferiores al promedio"<<endl;		  
	      
getche();
return 0;	
}
