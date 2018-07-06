#include <iostream>   // cin y cout 
#include <iomanip>    // setw() 
#include <conio.h>        // getch() 
#include <stdio.h>         // gets() 
#include <string.h>
using namespace std;        // strcmp() y strcpy() 
#define dim 15

int main() 

{    int totlib,canlib[dim],i,n,maxlib,minlib,indice;
     char area[dim][20];
     // lectura de los datos paralelos 
     cout<<"Ingrese el tamaño de los arreglos : ";
     cin>>n;
     for(i=0;i<n;i++)
       {cout<<"libros ["<<i+1<<"]= ";
        cin>>canlib[i];
        cout<<"AREA ["<<i+1<<"]= ";
        cin>>area[i];
        }
     totlib=0;
     for(i=0;i<n;i++)
      totlib=totlib+canlib[i];
      cout<<"Total de Libros : "<<totlib<<endl;
      cout<<"Ingrese el indice :";
      cin>>indice;
	  cout<<"total de libros en el area :"<<area[indice-1] <<" = "<<canlib[indice-1]<<endl;	
	  minlib=canlib[0];
	  for(i=1;i<n;i++)
	     if(canlib[i]<minlib)
	        minlib=canlib[i];
	 cout<<"Menor cantidad de libros "<<minlib<<endl;
	 for(i=0;i<n;i++) 
	   if(canlib[i]==minlib)
	      cout<<area[i]<<endl;
	  maxlib=canlib[0];
	  for(i=1;i<n;i++)
	     if(canlib[i]>maxlib)
	        maxlib=canlib[i];
	 cout<<"Mayor  cantidad de libros "<<maxlib<<endl;
	 for(i=0;i<n;i++) 
	   if(canlib[i]==maxlib)
	      cout<<area[i]<<endl;     
		        
   getche();
   return 0;
}     
