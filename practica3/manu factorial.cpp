           
#include <iostream>
#include <stdlib.h> 
#include <math.h>
#define pi 3.1416 
using namespace std;  
long factorial(int  r);
int menu();
int main()
     { int n,fac,i,op;
       do
       {cout<<"Ingrese un numero >=0 "<<endl;
        cin>>n;
	   }while(n<0);
	   do
	   {system("cls");
	    op=menu();
	    switch(op)
	     {case 1:fac=factorial(n);
	       cout<<n<<" != "<<fac<<endl;
	       break;
	       case 2 :cout<<"Numeros    factorial"<<endl;
                  for(i=0;i<=n;i++)
                   {fac=factorial(i);
	                cout<<"   "<<i<<"      "<<fac<<endl;
                    }
                    break;
		 }
	    system("pause");
	}while(op!=3);
	system("cls");
	cout<<"***********FIN PROCESO *******"<<endl;
	system("pause");
        return 0;
    }
long factorial(int  r)
{int f,i;
  f=1;
  for(i=1;i<=r;i++)
    f=f*i;
  return f;
    
}
int menu()
 {int opcion;
  cout<<"\t\t MENU PRINCIPAL"<<endl;
  cout<<"\t[1]: calcula el factorial de un numero"<<endl;
  cout<<"\t[2]: calcula el factorial de 0 a n "<<endl;
  cout<<"\t[3]: Salir"<<endl;
  do
  {cout<<"Ingrese una opcion [1 3]"<<endl;
   cin>>opcion;
  }while(opcion<1||opcion>3);
  return opcion;
 }

