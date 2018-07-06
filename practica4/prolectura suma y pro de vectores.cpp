#include<iostream>
#include<conio.h>
#define max 20
using namespace std;
void leervector(float t[],int n)
{int i;
 for(i=0;i<n;i++)
    { do
       {cout<<"t["<<i+1<<"] = ";
        cin>>t[i];
       }while(t[i]<=0);
	}
}
void vervector(float t[],int n)
 {int i;
  //system("cls");
  //cout<<"vectores ingresadas"<<endl;
  for(i=0;i<n;i++)
    cout<<"t["<<i+1<<"]="<<t[i]<<endl;
 }
 void sumavector(float x[],float y[],int n,float s[])
 {int i;
    for(i=0;i<n;i++)
    s[i]=x[i]+y[i];
 }
 float promedio(float t[],int n)
    {float suma,pro;
     int i;
      suma=0;
       for(i=0;i<n;i++)
         suma=suma+t[i];
         pro=suma/n;
       return pro;
	}
 int menu()
   {int op;
   do
     
	 {cout<<"\t\t\t\t\tMENU PRINCIPAL"<<endl;
       cout<<"\t\t\t\t\t=============="<<endl;
	   cout<<"\t\t[1]:Leer vector"<<endl;
	   cout<<"\t\t[2]:Mostrar Vector"<<endl;
	   cout<<"\t\t[3]:Suma vector"<<endl;
	   cout<<"\t\t[4]:Promedio de vectores"<<endl;
	   cout<<"\t\t[5]:salir"<<endl;
	   cout<<"Ingrese una Opcion "<<endl;
	   cin>>op;   
     }while(op<1 ||op>5);
   return op;
}
 int main()
 {float a[max],b[max],n,suma[max];
   int opcion;
    do
    {system("cls");
      opcion=menu();
      
      switch(opcion)
      {case 1: do
               {cout<<"Ingrese el tamaño del vector a :"<<endl;
                cin>>n;
	           }while(n<1||n>max);
	            leervector(a,n);
              	do
                 {cout<<"Ingrese el tamaño del vector b :"<<endl;
                  cin>>n;
	              }while(n<1||n>max);
	              leervector(b,n);
	              break;
	    case 2:	cout<<"VECTOR A"<<endl;
	             vervector(a,n);
	             getche();
	             cout<<"VECTOR B"<<endl;
	              vervector(b,n);
	              getche();
	              break;
	    case 3:sumavector(a,b,n,suma);
	           cout<<"SUMA DE VECTORES"<<endl;
	           vervector(suma,n);
	           getche();
	           break;
	    case 4:cout<<"Promedio del vector a  "<<promedio(a,n)<<endl;getche();       
	           cout<<"Promedio del vector b  "<<promedio(b,n)<<endl; getche();
			   break; 
	   }        
   }while(opcion!=5);
   system("cls");
   cout<<"*************** FIN PROCESO **************"<<endl;
getche();	
	return 0;
}
 
