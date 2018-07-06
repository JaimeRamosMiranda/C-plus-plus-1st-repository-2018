#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
#define max 10
int leerN()
{int n;
  do{
  cout<<"ingrese el numero de elementos : <= "<<max<<"===>";
  cin>>n;
  }while(n<2 ||n>max);
 return n;
}

void leervector(int m[], int x)
{int i;
 for(i=0;i<x;i++)
  {cout<<"m["<<(i+1)<<"] =";
	cin>>m[i];
	
	}
}

void vervector(int m[], int n)
{int i,j;
cout<<" ELEMENTO        VALOR           HISTOGRAMA "<<endl;
cout<<" ******************************************* "<<endl;

 for(i=0;i<n;i++)
  {cout<<setw(10)<<i+1<<setw(10)<<m[i]<<setw(10);
   for(j=1;j<=m[i];j++)
   cout<<"*";
   cout<<endl;
}	
}
void suma(int a[],int b[],int s[],int n)
{int i;
 for(i=0;i<n;i++)
  s[i]=a[i]+b[i];
}
int menu()
{int op;
 cout<<"MENU PRINCIPAL"<<endl;
 cout<<"[1]: tamano del vector"<<endl;
 cout<<"[2]: crea ve4ctor"<<endl;
 cout<<"[3]: ver vector"<<endl;
 cout<<"[4]: suma vectores"<<endl;
 cout<<"[5]: ascendente "<<endl;
 cout<<"[6]: descendente "<<endl;
 cout<<"[7]: busqueda lineal"<<endl;
 cout<<"[8]: salr"<<endl;
 do
 {cout<<"Ingrese una opcion [1 8]"<<endl;
  cin>>op; 
 }while(op<1||op>8);
 return op;
}
void ascendente(int m[],int n)
 {int i,j,tem;
   for(i=0;i<n;i++)
       for(j=i+1;j<n;j++)
          if(m[i]>m[j])
          {tem=m[i];
           m[i]=m[j];
           m[j]=tem;
		  }
  }
void descendente(int m[],int n)
 {int i,j,tem;
   for(i=0;i<n;i++)
       for(j=i+1;j<n;j++)
          if(m[i]<m[j])
          {tem=m[i];
           m[i]=m[j];
           m[j]=tem;
		  }
  }
int buslin(int m[],int n,int nbus)
{int i,pos;
 pos=-1;
 for(i=0;i<n&&pos==-1;i++)
    if(m[i]==nbus)
	   pos=i;
 return pos;	    
  }  
int main()
{int a[max],n,b[max],s[max],opcion,pos,elem;
 do
 {system("cls");
  opcion=menu();
  switch(opcion)
   {case 1:  n=leerN();break;
    case 2:cout<<"vector A"<<endl;
	      leervector(a,n);
	      cout<<"vector B"<<endl;
	      leervector(b,n);break;
	case 3:cout<<"VECTOR INGRESADO A "<<endl;
 				vervector(a,n);
           cout<<"VECTOR INGRESADO B "<<endl;
           vervector(b,n);break;
    case 4:suma(a,b,s,n);
           cout<<"SUMA DE VECTORES A + B "<<endl;
           vervector(s,n);break;
    case 5:ascendente(a,n);
	        ascendente(b,n); break;
     case 6:descendente(a,n);
	        descendente(b,n); break;
	case 7: cout<<"Busqueda lineal"<<endl;
	         cout<<"Ingrese el valor a buscar "<<endl;
	         cin>>elem;
	        pos=buslin(a,n,elem); 
			if(pos>=0)
			  cout<<elem<<" se encontro en la posicio "<<pos+1<<endl;
			 else
			   cout<<elem<<" no esta registrado"<<endl;break;		    			         
 }        
 getche();
}while(opcion!=8);
system("cls");
cout<<"************** FIN PROCESO *******"<<endl;
getche();
 return 0;
}
