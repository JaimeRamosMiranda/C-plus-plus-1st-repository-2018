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


int main() 
{int a,b,d;
 
 cout<<"Ingrese dos numeros enteros : "<<endl;
 cin>>a>>b;
 d=mcd(a,b);
 cout<<"MCD = "<<d<<endl;
 system("pause");
            
 return 0;   
}
