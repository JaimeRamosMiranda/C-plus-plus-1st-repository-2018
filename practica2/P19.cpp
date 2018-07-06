/*
19.- Suponga que tiene usted una tienda y desea registrar las ventas en su computadora. 
Dise๑e un algoritmo que lea por cada cliente, el monto total de su compra. 
Al final del dํa que escriba la cantidad total de ventas y el n๚mero de clientes atendidos.    
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
  {
   int i,op,m;
   float monto,totalven;
   
  
   totalven=0;
   
   m=1;
   do
     {
      system("cls");
      cout<<"\n";
      cout<<"\n         ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
      cout<<"\n         บ                     :: T I E N D A ::                     บ";
      cout<<"\n         ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ";
       op=1; i=0;
      while(op==1)
        {
         cout<<"\n\n\n\tCliente :"<<i+1;
         cout<<"\n\n\tMonto de compra: ";
         cin>>monto;
         if(monto>0)
           {
            totalven=totalven+monto;
            i=i+1;
      
            cout<<"\n\nDesea registrar otro cliente: ";
            cout<<"\nSI ................ (1)";
            cout<<"\nNO ................ (0)";
            cout<<"\n\nEscriba su opcion --> ";
            cin>>op;
          } 
         else
            cout<<"\n\t Monto incorrecto (monto mayor a 0)";
         }
      system("cls");
      cout<<"\n\n*************************************************";
      cout<<"\n\nNumero de clientes atendidos : "<<i;
      cout<<"\nCantidad total de ventas : "<<totalven;
      totalven=0;
      cout<<"\n\n\n\tDesea realiza otra vez esta operacion: ";
      cout<<"\n\tSI ................ (1)";
      cout<<"\n\tNO ................ (0)";
      cout<<"\n\n\t\tEscriba su opcion --> ";
      cin>>m;
      
   }while(m==1);
   cout<<"\n\n\n***************** Fin Proceso *****************";
   getch();
   return 0;
}
      
