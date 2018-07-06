
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <iomanip>
#define d 50
int main()
{int m,i,j,n,nota[d],f[21],v,ma;
  
  system ("cls");
  cout<<"Ingrese numero de alumnos ";
  cin>>n;
  for(j=0;j<21;j++)
    f[j]=0;
  for(i=0;i<n;i++)
    {cout<<"nota["<<(i+1)<<"]=";
     cin>>nota[i];
     }
   
     
  cout<<setw(10)<<"  NOTAS "<<setw(15)<<"  FRECUENCIAS "<<setw(15)<<"HISTOGRAMA"<<endl;
  cout<<"======================================================================"<<endl;  

    
           
 for(i=0;i<n;i++)   
    {
    f[nota[i]]=f[nota[i]]+1;
    
     }
  
  for(j=0;j<21;j++)
    {cout<<setw(10)<<j<<setw(15)<<f[j]<<setw(15);
     for(i=1;i<=f[j];i++)
         cout<<"*";
      cout<<endl;  
      }       
  
      
 ma=f[0];
   for(j=1;j<21;j++)
      if(f[j]>ma)
         {ma=f[j];
          m=j;
          }
     v=0;
      for(j=1;j<21;j++)
         if(ma==f[j])
            v=v+1;
     if(v==1)        
          
   cout<<"La Moda es ........."<<m<<endl; 
   else
   cout<<"No existe Moda ........."<<endl;
         
         getche();
    
getche();
return 0;
}     
