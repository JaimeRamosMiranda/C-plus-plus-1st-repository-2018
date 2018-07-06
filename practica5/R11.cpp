#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#define dim 1000

struct mercancia
{ char clave[10];
  char descrip[100];
  int exist;
  int stock;
  float preuni;
};

void ingresprod(mercancia P[], int n)
{ int i;
  for(i=0;i<n;i++)
  { cout<<endl;
    cout<<"     ~ Ingrese datos del producto "<<i+1<<": "<<endl;
    cout<<"       -----------------------------";
    cout<<"\n\n";
    cout<<"\t\tCodigo.........................: ";
    cin>>P[i].clave;
    cout<<"\t\tDescripcion....................: ";
    cin>>P[i].descrip;
    cout<<"\t\tExistencia en almacen..........: ";
    cin>>P[i].exist;
    cout<<"\t\tMinimo a mantener en existencia: ";
    cin>>P[i].stock;
    cout<<"\t\tPrecio unitario (S/.)..........: ";
    cin>>P[i].preuni;
    cout<<endl;
  }
}

void mostrarinv(mercancia P[], int n)
{ int i;
  cout<<"\n\n";
  cout<<"\t--------- INVENTARIO ACTUALIZADO ---------";

  for(i=0;i<n;i++)
   { cout<<"\n\n";
     cout<<"\t  Codigo.....................: "<<P[i].clave<<endl;
     cout<<"\t  Nombre.....................: "<<P[i].descrip<<endl;
     cout<<"\t  Existencia actual..........: "<<P[i].exist<<endl;
     cout<<"\t  Existencia minima requerida: "<<P[i].stock<<endl;
     cout<<"\t  Precio unitario............: "<<P[i].preuni<<endl;
     cout<<"\t-------------------------------------";
   }
   getch();
}
int buscar(mercancia P[],int n)
{ int i,pos;
  char codbus[10];
  pos=-1;
   cout<<"\n\n";
   cout<<"\tIngrese el codigo a buscar: ";
   cin>>codbus;
   for(i=0;i<n;i++)
    { if(strcmp(P[i].clave,codbus)==0)
       { pos=i;
         i=n;
       }
    }
  return pos;
}           
void ventaprod(mercancia P[],int n)
{ int i,pos,can;
  pos=buscar(P,n);
  if (pos>=0)
  {
    
         cout<<"\n\n";
         cout<<"\t--------- VENTA DE PRODUCTOS ---------";
         cout<<"\n\n";
         cout<<"\t  Ingrese la cantidad a vender: ";
         cin>>can;
        if(P[pos].exist-can>=P[pos].stock)
         { P[pos].exist=P[pos].exist-can;
           cout<<"\n\t\"La venta ha sido realizada\"!!\n";
         }
         else
          cout<<"\n\n\t\"no cuenta con la cantidad suficiente\"!!";
          
        
  }
  else
         cout<<"\n\n\tERROR: Codigo no registrado"<<endl;
        
     
}

void actprec(mercancia P[], int n)
{ int i,pos;
  float pau;
  pos=buscar(P,n);
   if (pos>=0)
     {
         cout<<"\n";
         cout<<"\tIngrese el porcentaje de aumento (%): ";
         cin>>pau;
          P[pos].preuni=P[pos].preuni + P[pos].preuni*(pau/100.0);
        }
       else
         cout<<"\n\n\tERROR: Codigo no registrado"<<endl;


}

void reabaspro(mercancia P[],int n)
{ int i,pos,compra;
  pos=buscar(P,n);
   if (pos>=0)
       { if(P[pos].stock>=P[pos].exist)
          { cout<<"Numero de productos a comprar: ";
            cin>>compra;
            if(compra>=(P[pos].stock - P[pos].exist))
              {P[pos].exist=P[pos].exist + compra;
               cout<<"\n\t\tLa operacion se hizo efectiva"<<endl;
               }
             else
               cout<<"\n\n\tEste monto no abastece el stock minimo";
              
          }
          else
            cout<<"\n\t\tno requiere reabastecimiento";
           
       }
       else
         cout<<"\n\n\tERROR: Codigo no registrado"<<endl;
        

}

void infopro(mercancia P[],int n)
{ int i,pos;
   pos=buscar(P,n);
   if (pos>=0)
       {  cout<<"\n\n";
         cout<<"\t--------- DATOS DE PRODUCTO ----------";
         cout<<"\n\n";
         cout<<"\t\tCodigo.........: "<<P[pos].clave<<endl;
         cout<<"\t\tDescripcion....: "<<P[pos].descrip<<endl;
         cout<<"\t\tExistencia.....: "<<P[pos].exist<<endl;
         cout<<"\t\tMinimo stock...: "<<P[pos].stock<<endl;
         cout<<"\t\tPrecio unitario: "<<P[pos].preuni<<endl;
         getch();
         }
       else
         cout<<"\n\n\tERROR: Codigo no registrado"<<endl;


}

void modificardatos(mercancia P[], int n)
{ int i,pos;
        pos=buscar(P,n);

         if(pos>=0)
         { cout<<"Nuevo nombre: ";
           cin>>P[pos].descrip;
           cout<<"Nuevo Existencia actual: ";
           cin>>P[pos].exist;
           cout<<"Nuevo stock: ";
           cin>>P[pos].stock;
           cout<<"Nuevo Precio unitario: ";
           cin>>P[pos].preuni;
         }
       else
         cout<<"\n\n\tERROR: Codigo no registrado"<<endl;


}


int menu()
{ int opcion;
  cout<<"\n\n\n";
  cout<<"\t********************* MENU PRINCIPAL *********************"<<endl;
  cout<<"\n\n\n\t\t[1]..............MOSTRAR INVENTARIO"<<endl;
  cout<<"\t\t[2]..............VENTA DE UN PRODUCTO"<<endl;
  cout<<"\t\t[3]..............REABASTECIMIENTO DE UN PRODUCTO"<<endl;
  cout<<"\t\t[4]..............ACTUALIZAR EL PRECIO DE UN PRODUCTO"<<endl;
  cout<<"\t\t[5]..............MODIFICAR DATOS"<<endl;
  cout<<"\t\t[6]..............INFORMAR SOBRE UN PRODUCTO"<<endl;
  cout<<"\t\t[7]..............SALIR"<<endl;
  do
  { cout<<"\n\n\n\n\t\t";
    cout<<"* Ingrese una opcion: ";
    cin>>opcion;
  }while(opcion<1 || opcion>7);
  return opcion;
}

int main()
{ int n,op;
  char resp;
  mercancia P[dim];
  
  do
  { cout<<"\n\n";
    cout<<"\t***********************************************************"<<endl;
    cout<<"\t----------------- INVENTARIO DE ALMACEN   -----------------"<<endl;
    cout<<"\t***********************************************************"<<endl;
    cout<<"\n\n";
    cout<<"     ~ Ingrese el numero de productos: ";
    cin>>n;
    cout<<endl;
    cout<<"   --------------------------------------------------------------------"<<endl;
  }while(n>dim);

  ingresprod(P,n);

  resp='s';
  while(resp=='s' || resp=='S')
  { system("cls");
    op=menu();
    switch(op)
    { case 1: system("cls");
              mostrarinv(P,n);
              break;
               
      case 2: system("cls");
              ventaprod(P,n);
              break;
              
      case 3: system("cls");
              reabaspro(P,n);
              break;
              
      case 4: system("cls");
              actprec(P,n);
              break;

      case 5: system("cls");
              modificardatos(P,n);
              break;

      case 6: system("cls");
              infopro(P,n);
              break;
              
      case 7: exit(1);
              break;
              
      default: system("cls");
               cout<<"OPCION NO DISPONIBLE"<<endl;
               break;
    }
    cout<<"\n\n\n\n\t\tDesea realizar otra operacion (s/n): ";
    cin>>resp;
  }
    getch();
    return 0;
}  

