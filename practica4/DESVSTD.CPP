
#include<iostream.h>
#include<conio.h>
#include<math.h>
#define max 10
int leerN()
{int n;
  do{
  cout<<"ingrese el numero de elementos : <= "<<max<<"===>";
  cin>>n;
  }while(n<0 ||n>max);
 return n;
}
void leervector(int m[], int n)
{int i;
 for(i=0;i<n;i++)
  {cout<<"m["<<(i+1)<<"] =";
	cin>>m[i];
	
	}
}
void vervector(int m[], int n)
{int i;
 for(i=0;i<n;i++)
  cout<<"l["<<(i+1)<<"] ="<<m[i]<<endl;
 	
}
int buslin(int m[], int n,int nb)
{int i,pos;
 pos=-1;
 for(i=0;i<n;i++)
   if(m[i]==nb)
     {pos=i;
      i=n;
      }
 return pos;
}     
double media (int m[], int n)
{int i;
double suma=0;
 for(i=0;i<n;i++)
  suma=suma + m[i];
  return suma/n;	
}
double desv (int m[], int n)
{int i;
double suma=0,pro;
 pro=media(m,n);
 for(i=0;i<n;i++)
  suma=suma + pow((m[i]-pro),2);
  return sqrt(suma/(n));	
}

int main()
{int a[max],n,ele,pos;
 n=leerN();
 leervector(a,n);
 cout<<"VECTOR INGRESADO A "<<endl;
 vervector(a,n);
 cout<<"Ingrese numero a buscar : "<<endl;
 cin>>ele;
 pos=buslin(a,n,ele);
 if(pos>=0)
 cout<<ele<<" se encontro en la posicion "<<pos+1<<endl;
 else
 cout<<ele<<"  No esta registrado en el arreglo"<<endl;
 
 
 cout<<"Media :"<<media(a,n)<<endl;
cout<<"Desviacion Estandar :"<<desv(a,n)<<endl;   
 
 getche();             
return 0;
}
