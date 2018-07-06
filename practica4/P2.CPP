/*
2.- Realizar las siguientes operaciones con vectores utilice funciones y/o procedimientos:
  	 1.  ingresar orden del arreglo  
 	 2.  Crear  
  	 3.  Mostrar;
 	 4.  Búsqueda Lineal 
     5.  Búsqueda Binaria 
  	 6.  Ordena en Forma Descendente;
  	 7.  Ordena en Forma Ascendente 
  	 8.  Insertar por Posición 
 	 9.  Insertar en arreglo desordenado;
 	 10.  Eliminar por Posición 
  	 11.  TERMINAR 

*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define dim 100
using namespace std;


//t Menu();
void LeerVector(int M[], int d);
void MostrarVector(int M[], int d);
void buslin(int A[],int d);
void busbin(int A[],int d);
void ordes(int A[],int d);
void ordas(int A[],int d);
int orden ();
void InsertaVector(int A[dim], int &d);
void InsertarxPos(int A[dim], int &d, int &Posi, int NValor);
void EliminarxPos(int A[dim], int &d, int &Posi);
int Menu();

int pos;

int main()
{system("cls");

   int N,A[dim],i,Pos,Nv,Opcion,val;
   //
   
   
   do{
      Opcion = Menu();
      switch(Opcion)
      {  case 1:system("cls");
                cout<<"Ingrese el tamaño del vector : "<<endl; 
              N=orden();
              break;
         case 2 : system("cls");
               cout <<"RUTINA DE CREACION \n";
               LeerVector(A, N);
               break;
         case 3 : 
               cout <<"RUTINA DE VIZUALIZACION \n\n";
               MostrarVector(A, N);
               break;
         case 4 : 
               cout <<"RUTINA DE BUSQUEDA LINEAL \n\n";
               buslin(A, N);
               break; 
         case 5 :  
               cout <<"RUTINA DE ORDENAMIENTO DESCENDENTE \n\n";
               ordes(A, N);
               break; 
         case 6 :  
               cout <<"RUTINA DE ORDENAMIENTO ASCENDENTE \n\n";
               ordas(A, N);
               break; 
         case 7 : system("cls");
               cout <<"RUTINA DE BUSQUEDA BINARIA \n\n";
               busbin(A, N);
               break;       
                           
         case 8 : 
               cout <<"\n\nRUTINA INSERTA POR POSICION \n\n";
               MostrarVector(A, N);
               cout <<"\nIngrese  la  POSICION  ---> ";
               cin >>Pos;
               Pos = Pos-1;//Los Vectores en C empiezan en CERO
               cout <<"\nIngrese el nuevo VALOR  ---> ";
               cin >>Nv;
               InsertarxPos(A, N, Pos, Nv);
               break;
         case 9 :       
               cout <<"\n\nRUTINA INSERTA EN UN ARREGLO DESORDENADO \n\n";
               MostrarVector(A, N);
               InsertaVector( A, N);
               break;
                     
         case 10 : 
              
               cout <<"\n\nRUTINA ELIMINA POR POSICION \n\n";
               cout <<"\nIngrese la POSICION  ---> ";
               cin >>Pos;
               EliminarxPos(A, N, Pos);
               break;
        
         case 11 : system("cls");
                   cout<<"Fin proceso .............."<<endl;
                  system("PAUSE");  
         exit(1);
      }
   }while(Opcion!=0);
   
  cout<<"\n";
  system("PAUSE");
  return(0);
}

int Menu()
{
   int op;
   
   cout<<"    OPERACIONES CON VECTORES \n\n";
   cout<<"1.  ingresar orden del arreglo  \n";
   cout<<"2.  Crear  \n";
   cout<<"3.  Mostrar \n";
   cout<<"4.  Busqueda Lineal \n";
   cout<<"5.  Ordena en Forma Descendente \n";
   cout<<"6.  Ordena en Forma Ascendente \n";
   cout<<"7.  Busqueda Binaria \n";
   cout<<"8.  Insertar por Posicion \n";
   cout<<"9.  Insertar en arreglo desordenado \n";
   cout<<"10.  Eliminar por Posicion \n";
   
   cout<<"11.  TERMINAR \n\n";
   do{
      cout<<"Digite su opcion ---> ";
      cin>>op;
  }while(op<1 || op>11);
  return(op);
}

  void LeerVector(int M[dim], int d) 
  {int i;
   for(i=0;i<d;i++)
   {cout<<"M["<<(i+1)<<"]=";
    cin>>M[i];
   }
  }
  
  
  void MostrarVector(int M[dim], int d)  
  {int i;
    
   for(i=0;i<d;i++)
   cout<<"M["<<(i+1)<<"]====>"<<M[i]<<endl;
   
    cout <<"\n\n";
   system("pause");       
    
   } 
   
   int orden ()
   { int n;
       do
      {cout<<"Ingrese numro de elementos del vector : "<<endl;
       cin>>n;
       }while(n>dim);
       return n;
   } 
   
   
   void ordes(int A[dim], int d)
   {int i,j,tem;
    for(i=0;i<d;i++)
    
      for(j=i+1;j<d;j++)
          if(A [i]<A[j])
             {tem=A[i];
              A[i]=A[j];
              A[j]=tem;
              }
               
   }
    
    void ordas(int A[dim], int d)
   {int i,j,tem;
    for(i=0;i<d;i++)
    
      for(j=i+1;j<d;j++)
          if(A [i]>A[j])
             {tem=A[i];
              A[i]=A[j];
              A[j]=tem;
              }
               
   }
  
 void buslin(int A[dim],int d)
 
 {int i,sw=0,nbus;
  cout<<"Ingrse el numero  a buscar : "<<endl;
  cin>>nbus;
  for(i=0;i<d;i++)
   if( A [i]==nbus)
      {sw=1;
        pos=i;
        }
        
  if(sw==1)
     cout<<nbus<<" se encuentra en pa posicion "<<(pos+1)<<endl;
   else
     cout<<nbus<<" no esta registrado en el arreglo"<<endl;
     system("pause"); 
}           
 
 void busbin(int A[dim],int d)
  {int i,sw=0,nbus,li,ls,c;
    li=0;
    ls=d;
    
  cout<<"Ingrse el numero  a buscar : "<<endl;
  cin>>nbus;

  while((li<=ls && sw!=1))
  {c=(li+ls)/2;
   if( A [c]==nbus)
      sw=1;
   else   
      if(nbus> A [c])
         li=c+1;
       else
          ls=c-1;
   }
  if(sw==1)
     cout<<nbus<<" se encuentra en pa posicion "<<(c+1)<<endl;
   else
     cout<<nbus<<" no esta registrado en el arreglo"<<endl;          
       
   system("pause");      
  }
  
  void InsertaVector(int A[dim], int &d)
  {
   int val;
     if(d<dim)
       {
      
         cout<<endl<<endl<<endl;
         cout<<"\t Ingrese el Valor a insertar :"<<endl;
         cin>>val;
         d=d+1;
         //cout<<d;
         A [d-1]=val;
         //cout<< A [d];
         MostrarVector(A,d);
         } 
   else
   
      cout<<"\n\n\n--> No hay espacio suficiente.....VECTOR LLENO!!!!!\\n"<<endl;
      system("pause"); 
   
}        
void InsertarxPos(int A[dim], int &d, int &Posi, int NValor)
{
   int i;
  
   i = d;
    
  
   if(i < dim && Posi<dim)
   {
      for(i=d-1;i>=Posi;i--)
         A[i+1] = A[i];
       A[Posi] = NValor;
      d=d+1;
      cout<<"\n  INSERTADO en posicion  \n\n "<<NValor<<"  "<<Posi+1<<endl;
      MostrarVector(A, d);
   }
   else
   {
      printf("Dimension o Posicion fuera de Rango\n");
      system("pause");
   }
}
void EliminarxPos(int A[dim], int &d, int &Posi)
{
   int i, N;
   MostrarVector(A, d);
  
   i = Posi-1;
   while(i<d)
   {         
      A[i] = A[i+1];
      i = i + 1;
   }
   
   d = d-1;
   MostrarVector(A, d); 
}
