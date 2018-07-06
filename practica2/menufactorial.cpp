#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{ 
  long op,n,i,j;
  float f; 
  do
      {cout<<"Ingrese un numero >=0 ";
        cin>>n;
        }while(n<0); 
do
 {system ("cls");
     do
        {
          system("cls");
         cout<<endl<<endl<<endl;
         cout<<"\tMENU :\n";
         cout<<"\t==== =\n\n";
         cout<<"\t[1]: Factorial de un Numero\n\n";
         cout<<"\t[2]: Factorial de 1 a N\n\n";
         cout<<"\t[3]: Salir\n\n";
         
         cout<<"\t-->Ingrese su opci%cn : ";
         cin>>op;
         
      }while(op<1||op>3);
         
      switch(op)
       {case 1: f=1;
                 for(i=1;i<=n;i++)
                   f=f*i;
                cout<<"Factorial de "<<n<<"! ="<<f<<endl;
                break;
        case 2: cout<<"\tNumero\t\tFactorial "<<endl;
                cout<<"\t******\t\t********* "<<endl;
                 for(i=1;i<=n;i++)
                 { 
                   f=1;
                   for(j=1;j<=i;j++)
                      f=f*j;
                      cout<<"\t"<<i<<"\t\t"<<f<<endl; 
                    } break;                             
        case 3: break;
          }          
 system ("pause");                 
}while(op!=3);
system ("cls");
cout<<"Gracias por usar esta Aplicacion"<<endl;
system("pause");
return 0;
}     
