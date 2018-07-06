/*
1.- Escribir un algoritmo que defina  una tabla de proveedores teniendo cada proveedor 
los siguientes datos: nombre, cantidad vendida, precio unitario (introducidos por teclado) e importe (calculado).
Visualizar los datos de cada proveedor, el importe total de compra así como el nombre del proveedor Más barato y el del Más caro.
*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

#define dim 10


struct proveedor
   {
   char nom[20];
   
   int can;
   
   float pu,imp;
   };
void ingresar(proveedor p[dim], int c)//se usa &c si se quiere evitar la duplicidad al modificar el c
  {
   int i;
   
   for(i=0;i<c;i++)
     {cout<< "Ingrese datos del proveedeor : "<<(i+1)<<endl;
      cout<<"Nombre : ";
      fflush(stdin);
      gets(p[i].nom);
      do{
	  cout<<"Cantidad Vendida : ";
      cin>>p[i].can;
  		}while(p[i].can<0);
      do{
         cout<<"Precio Unitario ";
         cin>>p[i].pu;
        }while(p[i].pu<=0);
        p[i].imp=p[i].can * p[i].pu;
      cout<<endl<<endl;
   }
}
void mostrar(proveedor p[dim], int c)
  {
   int i;
   cout<<setw(20)<<"Nombre "<<setw(15)<<"Cantidad Vendida"<<setw(20)<<"Precio Unitario "<<setw(10)<<"Importe"<<endl;
   cout<<endl;
   for(i=0;i<c;i++){
      cout<<setw(20)<<p[i].nom<<setw(15)<<p[i].can<<setw(20)<<p[i].pu<<setw(10)<<p[i].imp;
      cout<<endl;
   }
    getch();
}
//p nombre del arreglo y c numero de datos
float imptotal(proveedor p[dim],int c)
{int i;
 float tot=0;
 for(i=0;i<c;i++)
  tot=tot + p[i].imp;
  return tot;
} 
int mayor(proveedor p[], int c)
  {
   int i,indma;//indice del mayor proveeedor
     float ma;//mayor elemento
   ma=p[0].imp;//supuesto que el mayor es el primero se inicializa 2 valores
   indma=0;
   for(i=1;i<c;i++)
    {if(p[i].imp>ma)
      {ma=p[i].imp;
       indma=i;//retorna el mayor
       }
       }  
   
  return indma;      
} 
int menor(proveedor p[], int c)
  {
   int i,indme;
     float me;
   me=p[0].imp;//supuesto que el menor es el primero
   indme=0;
   for(i=1;i<c;i++)
    if(p[i].imp<me)
      {me=p[i].imp;
       indme=i;//retorna el indice del menor
       }
  return indme;      
} 
int menu()
   {
       int op;
   
      do{
         system ("cls");
         cout<<"MENU \n";
         cout<<"Ingresar proveedores................[1] \n";
         cout<<"Mostrar  proveedores................[2] \n";
         cout<<"Calcula Importe total de compra.....[3] \n";
         cout<<"Proveedor mas caro .................[4] \n";
         cout<<"Proveedor mas barato ...............[5] \n";
         cout<<"Salir............... ...............[6] \n";
         cout<<"Ingrese su opcion :";
         cin>>op;
      }while(op<1 || op>6);
      return op;
      } 
int main()
{int n,j,op;
proveedor p[dim];
float total;
do{
      cout<<"Cuantos provedores tiene :";
      cin>>n;
   }while(n<=0||n>dim);
  
  do
  {
    system ("cls");
    op=menu();
      switch(op){
         case 1:
            ingresar(p,n);
         break;
         case 2:
            mostrar(p,n);
         break;
         case 3:
            total=imptotal(p,n);
            cout<<setw(55)<<"  El Importe Total Es : "<<setw(10)<<total<<endl;
            getche();
         break;
         case 4:
               j=mayor(p,n);//j es el indice del mayor
               
               cout<<"Proveedor mas caro : "<<p[j].nom<<endl;
               cout<<"La cantidad vendida del proveedor mas caro : "<<p[j].can<<endl;
               cout<<"El precio unitario del proveedor mas caro : "<<p[j].pu<<endl;
               getche();           
         break;
        case 5: j=menor(p,n);
          cout<<"Proveedor mas barato : "<<p[j].nom<<endl; 
          cout<<"La cantidad vendida del proveedor mas barato : "<<p[j].can<<endl;
          cout<<"El precio unitario del proveedor mas barato : "<<p[j].pu<<endl;
       getche();
       break;
       case 6: system ("cls");
               cout<<" fin proceso ";
               getch();break;
      }
   }while(op!=6);

   
 
      getch();
}

