
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;
#define max 10
int main()
{ int n;   
char nombre[max][20];
	  char nomB[20];
     char op;
    do
    {
     cout<<"Ingrese el tamaño del arreglo "<<endl;
     cin>>n;
     }while(n<1 || n>max);
      
	  int encontrado = 0;
	  
	  int i,pos,v;
	  cout<<"Ingreso de Nombres "<<endl;
	  for (i=0;i<n;i++)
			{cout<<"Nombre["<<(i+1)<<"]= ";
			fflush(stdin);
			 gets(nombre[i]);
			 }
 for(;;)
     {system ("cls");
      int encontrado = 0;
     
	  cout<<"nombre a buscar : "<<endl;
	  fflush(stdin);
	  gets(nomB);
	  for(i=0;i<n;i++)
		 {v = strcmp(nomB,nombre[i]);
			if(v==0)
			{encontrado = 1;
			 pos = i;
			}
		  }

	  if (encontrado ==1)

		    cout<<nomB<<"    se encuentra en la posicion..."<<pos+1<<endl;
	  else

		    cout<<nomB<<"  No esta registrado en la tabla"<<endl;
       
	  getch();
	  cout<<"Desea Realizar Otra Busqueda (S/N)";
	  cin>>op;
	  if (op=='N' || op=='n') break;
   }
   system("cls");cout<< "....................... FIN BUSQUEDA .................";
   getche();
   return 0;
}




