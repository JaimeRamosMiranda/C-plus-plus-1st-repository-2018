

#include <conio.h>
#include <iomanip.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>
#define N_FILAS 25
#define N_COLUMNAS 4
#define LIBRE 0
#define OCUPADO 1
 
/* Función que muestra el menú del programa y retorna
el número de menú elegido por el usuario */
int mostrarMenu();
void reservarAsiento(int a[][N_COLUMNAS]); 
void cancelarAsiento(int a[][N_COLUMNAS]);
void mostrarOcupacion(int a[][N_COLUMNAS]);
 
int main()
{
/* Los asientos inicialmente están libres*/
int asiento[N_FILAS][N_COLUMNAS]={0},resp;
do
{system("cls");
  resp=mostrarMenu();
  switch(resp)
  {
   case 1:
        reservarAsiento(asiento);getche();
        break;
   case 2:
        cancelarAsiento(asiento);getche();
        break;
  case 3:
        mostrarOcupacion(asiento);getche();
       break;
}
}while (resp!=4);
return 0;
getch();
}
 
int mostrarMenu()
{
  int resp;
  cout<<"\n\n";
  cout<<"[1]: Reservar Asiento\n";
  cout<<"[2]: RCancelar Asiento\n";
  cout<<"[3]: Mostrar Ocupacion\n";
  cout<<"[4]: Salir\n";
  do
  {cout<<"Ingrese una opcion : ";
   cin>>resp;
  }while(resp<1 || resp>4);
return resp;
}
 
void reservarAsiento(int a[][N_COLUMNAS])
{ int fila, col;
 cout<<"Escriba la fila del asiento a reservar: ";
 cin>>fila;
 cout<<"Escriba la columna del asiento a reservar: ";
 cin>>col;

if(a[fila][col]==OCUPADO)
   cout<<"Ese asiento ya está reservado\n";
else 
{
a[fila][col]=OCUPADO;
cout<<"Reserva realizada\n";
}
}
 
void cancelarAsiento(int a[][N_COLUMNAS])
{
  int fila, col;
 
cout<<"Escriba la fila del asiento a cancelar: ";
cin>>fila;
cout<<"Escriba la columna del asiento a cancelar: ";
cin>>col;

if(a[fila][col]==LIBRE)
  cout<<"Ese asiento no está ocupado\n";
else 
{
 a[fila][col]=LIBRE;
printf("Cancelación realizada\n");
}
}
 
void mostrarOcupacion(int a[][N_COLUMNAS])
{
  int i,j;

for(i=0;i<N_FILAS;i++)
{for(j=0;j<N_COLUMNAS;j++)
  {cout<<"Asiento["<<setw(2)<<i+1<<","<<setw(2)<<j+1<<"]= ";
    if(a[i][j]==LIBRE)
       cout<<LIBRE<<"   ";
    else 
       cout<<OCUPADO<<"   ";
   }
  cout<<endl;     
}
 
}

