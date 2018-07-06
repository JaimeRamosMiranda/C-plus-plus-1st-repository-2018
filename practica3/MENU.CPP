#include <iostream.h>
#include <stdlib.h>
#include <math.h>
int mcd(int a,int b)
{
        int r;
        r=a%b;
        while (r!=0)
        {
              
              a=b;
              b=r;
              r=a%b;  
        }
        return b;
} 
void reducirque(int &num,int &den)
{
     int aux;
     
     aux=den;
     den=den/mcd(num,den);
     num=num/mcd(num,aux);
}
int menu()
 {int op;
  cout<<"\t\t\t\tMENU PRINCIPAL"<<endl;
  cout<<"\t\t\t\t**************"<<endl;
  cout<<"\t\t[1] : Calcula el Maximo Comun Divisor "<<endl; 
  cout<<"\t\t[2] : Reduce una Fraccion "<<endl;
  cout<<"\t\t[3] : Salir "<<endl; 
  do
   {
     cout<<"Ingrese Una Opcion ===> [ ]"<<"\b\b";
     cin>>op;
     }while(op<1 || op>3);
  return op;
}
int main() 
{int a,b,m,n,d,opcion;
 do
  {system("cls");

   opcion=menu();
   switch(opcion)
     {case 1:
             cout<<"Ingrese dos numeros enteros : "<<endl;
             cin>>a>>b;
             m=mcd(a,b);
             cout<<"MCD = "<<m<<endl;
             system("pause");
             break;
      case 2:       
             cout<<"Ingrese Numerador : "<<endl;
             cin>>n;
             cout<<"Ingrese Denominador : "<<endl;
             cin>>d;
             reducirque(n,d);
             cout<<"La Fraccion Simplificada es : "<<n<<"/"<<d<<endl;
             system("pause");
             break;
             }     
             }while(opcion!=3);
      system("cls");
      cout<<"************** FIN PROCESO *************"<<endl;       
                     
 system("pause");
 return 0;   
}
