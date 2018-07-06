/*
6.- Dado un número entero, determinar la suma de sus dígitos, 
el número de dígitos que tiene y el número que resulta de invertir sus dígitos. 
Presentar un menú de opciones para elegir el proceso que se desea desarrollar.
 Utilice funciones sin variables globales en su solución:

*/

// librerias

#include <iostream>
#include <conio.h>
#include <math.h>       // para usar pow()
using namespace std;

// prototipos

int menu();
int leeNumero();
int sumaDigitos(int n);
int numeroDigitos(int n);
int invierte(int n);
int mayordigito(int n);
// funcion principal

int main(){
      int opcion, n;
      do {system("cls");
            opcion=menu();
            switch(opcion){
            case 1: 
                  n=leeNumero();
                  cout<<"La suma de digitos es: "<<sumaDigitos(n)<<endl;
                  break;
            case 2:
                  n=leeNumero();
                  cout<<"Numero de digitos: "<<numeroDigitos(n)<<endl;
                  break;

            case 3:
                  n=leeNumero();
                  cout<<"Numero invertido es: "<<invierte(n)<<endl;
                  break;
            case 4:
                  n=leeNumero();
                  cout<<"Mayor Digito es: "<<mayordigito(n)<<endl;
                  break;      
            }
            system("pause");

      } while(opcion!=0);
    system("cls");
    cout<<" Fin proceso "<<endl;
    getche();  

}

//--------------desarrollo de funciones propias--------------

int menu(){
      int opcion;
            cout<<"----------------------------"<<endl;
            cout<<"[1] suma digitos"<<endl;
            cout<<"[2] cuantos digitos"<<endl;
            cout<<"[3] invierte numero"<<endl;
            cout<<"[4] mayor digito"<<endl;
            cout<<"[5] Decimal a binario"<<endl;
            cout<<"[0] fin"<<endl;
             do{
            cout<<"OPCION: ";
            cin>>opcion;
            }while(opcion<0 || opcion>5);
            cout<<"----------------------------"<<endl;
            return opcion;
}

//-------------

int leeNumero(){
      int n;
      cout<<"ingresa un numero entero: "; cin>>n;
      return n;
}

//------------

int sumaDigitos(int n){
      int suma=0, digito;
      while(n>0){
            digito=n%10;
            suma += digito;
            n /= 10;
      }

      return suma;
}
//------------
int numeroDigitos(int n){
      int cont=0;
      while(n>0){
            cont++;
            n /= 10;
      }
      return cont;
}
//------------
int invierte(int n){
      int ninv;
        ninv=0;
     while(n>0)
     {ninv=ninv*10+n%10;
      n=n/10; 
       }
      return ninv;
}
//-------------
int mayordigito(int n)
{int dig,may=-999;
 while(n>0)
  {
    dig=n%10;
    if (dig>may)
     may=dig;
    n=n/10;
  }
  return may;
}   
     
