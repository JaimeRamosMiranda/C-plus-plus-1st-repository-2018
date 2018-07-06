
 #include<iostream>
 #include<string.h>
 #include<ctype.h>
 using namespace std;
 #define MAX 20
 struct Producto
 {char codigo[10];
  char nombre[30];
  float precio;
  int stock;
  };
 char continuar(char mensaje[]);
 int buscarCodigo(Producto X[], int n,char codigo[10]);
 void mostrarProducto(Producto P);
 void modificarProducto(Producto &P);
 void ingreso(Producto X[], int &n);
 void consulta(Producto X[], int n);
 void modificacion(Producto X[], int n);
 void eliminacion(Producto X[], int &n);
 void reporte(Producto X[], int n);
 int menu()
  {int op;
   cout<<"Mantenimiento de Productos "<<endl;
       cout<<"[1] Ingreso"<<endl;
       cout<<"[2] Consulta"<<endl;
       cout<<"[3] Modificacion"<<endl;
       cout<<"[4] Eliminacion"<<endl;
       cout<<"[5] Reporte"<<endl;
       cout<<"[6] Salir "<<endl;
       do
        {cout<<"Ingrese opcion (1-6) : ";
         cin>>op;
         }while(op<1 || op>6);
         return op;
         }
    
 int main()
  { int op,n=0;
     Producto X[MAX];
      do
      {system("cls");
       op=menu();
        switch(op)
        {case 1 : ingreso(X,n);break;
         case 2 : consulta(X,n);break;
         case 3 : modificacion(X,n);break;
         case 4 : eliminacion(X,n);break;
         case 5 : reporte(X,n);break;
          }
        }while(op!=6);
    }  
 char continuar(char mensaje[])
  {char tecla;
    do
     {cout<<mensaje;
       cin>>tecla;
       tecla=toupper(tecla);
      }while(tecla!='S' && tecla!='N');
   return tecla;
 }
int buscarCodigo(Producto X[], int n,char codigo[10])
 {int i;
     for(i=0;i<n;i++)
       if(stricmp(X[i].codigo,codigo)==0)
         return i;
           return -1; 
   } 
 void mostrarProducto(Producto P)
  {cout<<"Datos del Producto"<<endl;
   cout<<"codigo : "<<P.codigo<<endl;
   cout<<"nombre : "<<P.nombre<<endl;
   cout<<"precio : "<<P.precio<<endl;
   cout<<"stock : "<<P.stock<<endl;
   }
 void modificarProducto(Producto &P)
  {int op;
     do
     {cout<<"Que deseas Modificar "<<endl;
      cout<<"[1] Codigo [2] nombre [3] precio [4] stock [5] salir"<<endl;
      cout<<"Ingrese opcion (1-5)";
       cin>>op;
        switch(op)
          {case 1 : cout<<"Nuevo codigo :";
           cin>>P.codigo; break;
           case 2 : cout<<"Nuevo nombre :";
           fflush(stdin);
           gets(P.nombre); break;
           case 3 :
                  do
                   {cout<<"Nuevo precio :";
                     cin>>P.precio;
                     }while(P.precio<=0); break;
           case 4 :
                  do
                   {cout<<"Nuevo stock : ";
                     cin>>P.stock;
                     }while(P.stock<=0);break;
              }
        }while(op!=5);
   } 
 void ingreso(Producto X[], int &n)
  {char resp, codigo[10];
     int p;
        do
          {system("cls");
           cout<<"Ingreso de datos"<<endl<<endl;
           cout<<"Datos del Producto "<<endl;
           cout<<"Codigo : ";
           cin>>codigo;
           p=buscarCodigo(X,n,codigo); 
            if(p==-1)
             {cout<<"Nombre : ";
               fflush(stdin);
               gets(X[n].nombre);
                  do
                    {cout<<"Precio : ";
                     cin>>X[n].precio;
                     }while(X[n].precio<=0);
                  do
                    {cout<<"Stock : ";
                     cin>>X[n].stock;
                     }while(X[n].stock<=0);
                    strcpy(X[n].codigo,codigo); 
                     n++;
               }
               else
                cout<<"нн El codigo ya existe !!"<<endl;
                 resp=continuar("Deseas ingresar otro Producto (s/n) :");
           }while(resp=='S');
     }
  void consulta(Producto X[], int n)
   {int i,p;
    char codigo[10],resp;
      do
       {system("cls");
        cout<<"Consulta de Datos"<<endl<<endl;
        cout<<"Codigo a buscar : ";
        cin>>codigo;
        p=buscarCodigo(X,n,codigo);
        if(p!=-1)
          mostrarProducto(X[p]);
         else
          cout<<"el codigo del producto no existe"<<endl;
          resp=continuar("Deseas consultar otro producto(s/n) ");
      }while(resp=='S');
   } 
 void modificacion(Producto X[], int n)
  {int i,p;
   char codigo[10],resp;
    do
      {system("cls");
       cout<<"Modificacion de Datos"<<endl<<endl;
       cout<<"Codigo a buscar : ";
       cin>>codigo;
       p=buscarCodigo(X,n,codigo);
       if(p!=-1)
         {mostrarProducto(X[p]);
          modificarProducto(X[p]);
          }
        else
         cout<<"el codigo del producto no existe"<<endl;
         resp=continuar("Deseas modificar otro producto(s/n) ");
      }while(resp=='S');
 } 
void eliminacion(Producto X[], int &n)
 {int i,p;
  char codigo[10],resp,preg;
      do 
       {system("cls");
        cout<<"Eliminacion de un Producto"<<endl<<endl;
        cout<<"Codigo a buscar : ";
        cin>>codigo;
        p=buscarCodigo(X,n,codigo);
        if(p!=-1)
          {mostrarProducto(X[p]);
           preg=continuar("Estas seguro de eliminarlo (S/N) :");
           if(preg=='S')
             {for(i=p;i<n-1;i++)
                 X[i]=X[i+1];
                  n=n-1;
              }
           }
          else
           cout<<"el codigo del producto no existe"<<endl;
           resp=continuar("Deseas eliminar otro producto(s/n) ");
       }while(resp=='S');
  } 
void reporte(Producto X[], int n)
 {int i;
  system("cls");
  cout<<"Listado de Productos "<<endl;
  cout<<"codigo\t\tnombre\t\tprecio\t\tstock"<<endl;
     for(i=0;i<n;i++)
       cout<<X[i].codigo<<"\t\t"<<X[i].nombre<<"\t\t"<<X[i].precio<<"\t\t"<<X[i].stock<<endl;
          system("pause");
   } 

