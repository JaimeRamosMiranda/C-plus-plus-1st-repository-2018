/*
13.- Escribir un programa para simular una calculadora de fracciones. 
Se debe presentar un menú con las siguientes opciones:
			CALCULADORA DE FRACCIONES
		[1] : Suma
		[2] : Resta
		[3] : Multiplicación
		[4] : División
		[5] : Salir
				Ingrese Una Opción. [ ]
*/

#include <iostream>
#include <conio.h>
using namespace std;
// declaracion de funciones y procedimientos como prototipos

void leerque(int &num,int &den);
int mcd(int a, int b);
void reducirque(int &num, int &den);
void sumarque(int &nums,int &dens, int &num1,int &den1,int &num2,int &den2);
void restarque(int &nums,int &dens, int &num1,int &den1,int &num2,int &den2);
void multiplicarque(int &nums,int &dens, int &num1,int &den1,int &num2,int &den2);
void dividirque(int &nums,int &dens, int &num1,int &den1,int &num2,int &den2);
void escribirque(int num,int den);

int main()
{
    /* Declaración de variables */
    char op;
    for(;;)
    {system ("cls");
    
    int seleccion;
    int num1,den1;
    int num2,den2;
    int dens,nums;
    
    /* Entrada de datos */
    
    cout<<"             MENU DE LA CALCULADORA DE QUEBRADOS"<<endl<<endl;
    cout<<"----------------------------------------------------------------"<<endl;
    cout<<"                    1. Sumar"<<endl;
    cout<<"                    2. Restar"<<endl;
    cout<<"                    3. Multiplicar"<<endl;
    cout<<"                    4. Dividir"<<endl;
    cout<<"                    5. Salir"<<endl;
    cout<<endl<<endl;
    
    /* Procedimiento */
    
    cout<<"Seleccione una opcion:";
    cin>>seleccion;
    
    switch(seleccion)
    {
           case 1:
           
           sumarque(nums,dens,num1,den1,num2,den2);
           escribirque(num1,den1);
           cout<<" + ";
           escribirque(num2,den2);
           cout<<" = ";
           reducirque(nums,dens);
           escribirque(nums,dens);
           cout<<endl;                
           
           break;
           
           case 2:
           
           restarque(nums,dens,num1,den1,num2,den2);
           escribirque(num1,den1);
           cout<<" - ";
           escribirque(num2,den2);
           cout<<" = ";
           reducirque(nums,dens);
           escribirque(nums,dens);
           cout<<endl;      
          
           break;
           
           case 3:
           
           multiplicarque(nums,dens,num1,den1,num2,den2);
           escribirque(num1,den1);
           cout<<" * ";
           escribirque(num2,den2);
           cout<<" = ";
           reducirque(nums,dens);
           escribirque(nums,dens);
           cout<<endl;      
          
           break;
           
           case 4:
           
           dividirque(nums,dens,num1,den1,num2,den2);
           escribirque(num1,den1);
           cout<<" : ";
           escribirque(num2,den2);
           cout<<" = ";
           reducirque(nums,dens);
           escribirque(nums,dens);
           cout<<endl;      
           
           break;
           
           case 5:
           return 0;

           }
    
    /* Salida de resultados */
           
    system("PAUSE");
    cout<<"desea realizar otra operacion (S/n)... ";
    cin>>op;
    if (op=='N' || op == 'n')
        break;
  }
  system ("cls");
  cout<<"........................... FIN CALCULADORA .............";
  getche();     
    return 0;
}

void leerque(int &num,int &den)
{
    /* Declaración de variables */
    
    char l;
    
    /* Entrada de datos */
    
    cin>>num>>l>>den;
    
}

void escribirque(int num,int den)
{
     /*Salida de resultados*/
     
     if (num%den==0)
     {
        if (num==0)
           cout<<"0";
        else
            cout<<num/den;
     }
     else
     cout<<num<<"/"<<den;
}

void sumarque(int &nums,int &dens, int &num1,int &den1,int &num2,int &den2)
{
     /*Procedimiento*/
     
     cout<<"Introduzca el primer operando:";
     leerque(num1,den1);
     cout<<"Introduzca el segundo operando:";
     leerque(num2,den2);
     
     nums=num1*den2+num2*den1;
     dens=den1*den2;  
}

void restarque(int &nums,int &dens, int &num1,int &den1,int &num2,int &den2)
{
     /*Procedimiento*/
     
     cout<<"Introduzca el primer operando:";
     leerque(num1,den1);
     cout<<"Introduzca el segundo operando:";
     leerque(num2,den2);
     
     nums=num1*den2-num2*den1;
     dens=den1*den2;  
}

void multiplicarque(int &nums,int &dens, int &num1,int &den1,int &num2,int &den2)
{
     /*Procedimiento*/
     
     cout<<"Introduzca el primer operando:";
     leerque(num1,den1);
     cout<<"Introduzca el segundo operando:";
     leerque(num2,den2);
     
     nums=num1*num2;
     dens=den1*den2;  
}

void dividirque(int &nums,int &dens, int &num1,int &den1,int &num2,int &den2)
{
     /*Procedimiento*/
     
     cout<<"Introduzca el primer operando:";
     leerque(num1,den1);
     cout<<"Introduzca el segundo operando:";
     leerque(num2,den2);
     
     nums=num1*den2;
     dens=num2*den1;  
}

void reducirque(int &num,int &den)
{
     int aux;
     
     aux=den;
     den=den/mcd(num,den);
     num=num/mcd(num,aux);
}

int mcd(int a,int b)
{
        int r;
        while (b!=0)
        {
              r=(a%b);
              a=b;
              b=r;  
        }
        return a;
}     
