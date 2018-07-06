#include <iostream>   // cin y cout 
#include <iomanip>    // setw() 
#include <conio.h>        // getch() 
#include <stdio.h>         // gets() 
#include <string.h>
using namespace std;        // strcmp() y strcpy() 
#define dim 15

int main() 

{    int totmed,invact[dim],i,estockmin[dim],n;
     // lectura de los datos paralelos 
     cout<<"Ingrese el tamaño de los arreglos : ";
     cin>>n;
     for(i=0;i<n;i++)
       {cout<<"Inv ["<<i+1<<"]= ";
        cin>>invact[i];
        cout<<"stockmin ["<<i+1<<"]= ";
        cin>>estockmin[i];
        }
     //calculo del pedido de medicamentos
	 for(i=0;i<n;i++)
	   if(invact[i]<estockmin[i])
	     {totmed=estockmin[i]-invact[i];
	      cout<<"Medicamento "<<i+1<<"requiere un pedido de "<<totmed<<" Medicinas"<<endl;
	     } 		        
   getche();
   return 0;
}     
