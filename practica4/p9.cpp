#include <iostream>   // cin y cout 
#include <iomanip>    // setw() 
#include <conio.h>        // getch() 
#include <stdio.h>         // gets() 
#include <string.h>        // strcmp() y strcpy() 
using namespace std;
#define dim 10
int main() 

{    
      float pro[dim],tem;
	  int cod[dim],cat[dim],tcod,tcat;
      int i,j,v,k,n;
      do
     {
      cout<<"Ingrese numero de alumnos : "<<endl;
      cin>>n;
      }while(n<0 || n>dim);
       // LEE Elos ARRAYs 
	              
        for(i=0;i< n;i++)
            { cout<<"Ingrese datos del alumno : "<<i+1<<"==>";
               cout<<"CODIGO : ";
               cin>>cod[i];
               do
               {cout<<"Promedio : ";
                cin>>pro[i];
				}while(pro[i]<0||pro[i]>20);
				do
               {cout<<"Categoria : ";
                cin>>cat[i];
				}while(cat[i]<1||cat[i]>5);
             }
  cout<<setw(8)<<"codigo"<<setw(10)<<"promedio"<<setw(8)<<"cate"<<endl;	       
for(i=0;i< n;i++)            
cout<<setw(8)<<cod[i]<<setw(10)<<pro[i]<<setw(8)<<cat[i]<<endl;           
      //ordenamiento
      for(i=0;i< n;i++)
         for(j=i+1;j< n;j++)
           if(pro[i]<pro[j])
              {tem=pro[i];
               pro[i]=pro[j];
			   pro[j]=tem;
			  tcod=cod[i];
			   cod[i]=cod[j];
			   cod[j]=tcod;
			   tcat=cat[i];
			   cat[i]=cat[j];
			   cat[j]=tcat;
			  }
//salida
cout<<setw(8)<<"codigo"<<setw(10)<<"promedio"<<setw(8)<<"cate"<<endl;	       
for(i=0;i< n;i++)            
cout<<setw(8)<<cod[i]<<setw(10)<<pro[i]<<setw(8)<<cat[i]<<endl;
cout<<"PRIMER LUGAR"<<endl;
cout<<"Codigo    :"<<cod[0]<<endl;
cout<<"Promedio  :"<<pro[0]<<endl;
cout<<"Categoria :"<<cat[0]<<endl;
cout<<"ULTIMO LUGAR"<<endl;
cout<<"Codigo    :"<<cod[n-1]<<endl;
cout<<"Promedio  :"<<pro[n-1]<<endl;
cout<<"Categoria :"<<cat[n-1]<<endl;

getche();
return 0;
}   

