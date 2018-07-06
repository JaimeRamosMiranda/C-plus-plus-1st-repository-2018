#include <iostream.h>
#include <conio.h>
#include <iomanip.h> 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define max 20
struct profesor
{char nom[20];
 int sex;// 0=mujer 1=varon
 int eda;
 float prom;
 };
 
void cargar(profesor a[],int n)
{int i;
 for(i=0;i<n;i++)
   {cout<<"Ingrese datos del profesor"<<i+1<<endl;
      cout<<"Nombre :  ";
      fflush(stdin);
      gets(a[i].nom);
      do
      {cout<<"Sexo :  ";
      cin>>a[i].sex;
      }while(a[i].sex<0 || a[i].sex>1);
     do
     { cout<<"Edad :  ";
       cin>>a[i].eda;
      }while(a[i].eda<1 || a[i].eda >100);
   }
}
void mostrar(profesor a[],int n)
{int i;
cout<<setw(20)<<"Nombre "<<setw(15)<<"sexo"<<setw(20)<<"edad "<<endl;
   for(i=0;i<n;i++)
{cout<<setw(20)<<a[i].nom<<setw(15)<<a[i].sex<<setw(20)<<a[i].eda;
      cout<<endl;
   }
    getche();
}
float calculaprom(profesor a[], int n)
{int i;
float s=0,m; 
 for(i=0;i<n;i++)
{s=s+a[i].eda;
}	       
m=s/n;
return m;        
}
int profjov(profesor a[],int n)
{int i,jmenor;
float menor;
menor=a[0].eda;
jmenor=0;
for(i=0;i<n;i++)
{if(a[i].eda<menor)
{menor=a[i].eda;
jmenor=i;
}
}
return jmenor;
}
int profvie(profesor a[],int n)
{int i,imayor;
float mayor;
mayor=a[0].eda;
imayor=0;
for(i=0;i<n;i++)
{if (a[i].eda>mayor)
{mayor=a[i].eda;
imayor=i;
}
}
return imayor;
}
int supprom(profesor a[],int n)
{int i,c=0;
float m; 
 for(i=0;i<n;i++)
{if(a[i].eda>m)
c=c+1;
}
cout<<"profesores con edad mayor al promedio : "<<c<<endl;
}
int infprom(profesor a[],int n)
{int i,c1=0;
float m; 
for(int i=0;i<n;i++)
{if(a[i].eda<m)
c1=c1+1;
}
cout<<"profesores con edad menor al promedio : "<<c1<<endl;
}
int menu()
{int opcion;
do{system("cls");
 cout<<"\t\t\tMENU PRINCIPAL"<<endl;
 cout<<"\t\t\t=============="<<endl;
 cout<<"[1]:Captura datos"<<endl;
 cout<<"[2]:mostrar datos"<<endl;
 cout<<"[3]:Edad promedio de los profesores"<<endl;
 cout<<"[4]:Mostrar nombre del profesor mas joven "<<endl;
 cout<<"[5]:Mostrar nombre del profesor mas viejo "<<endl;
 cout<<"[6]:Numero de profesores con edad mayor al promedio"<<endl;
 cout<<"[7]:Numero de profesores con edad menor al promedio"<<endl;
 cout<<"[8]:salir"<<endl;
 cout<<"Ingrese Una Opcion "<<endl;
  cin>>opcion;
 }while(opcion<1 || opcion>8);
 return opcion;
}
int main()
 {profesor a[max];
 float t;
  int n,op,j;
  do
{cout<<"ingresar numero de profesores : ";
cin>>n;
}while(n<0 || n>max);
 do
 {system("cls");
  op=menu();
  switch(op)
   {case 1: cargar(a,n);break;
   case 2: mostrar(a,n);break;
    case 3:t=calculaprom(a,n);
         cout<<"Promedio de edad de profesores"<<t<<endl;
          getche();break;
    case 4:j=profjov(a,n); 
	       cout<<"El profesor con la menor edad es :"<<a[j].nom<<endl;
           getche(); break;
   case 5:j=profvie(a,n) ;
          cout<<"El profesor con la mayor edad es :"<<a[j].nom<<endl;
            getche();break;
    case 6:  supprom(a,n);
			 getche();break;
   case 7:   infprom(a,n);    
			 getche(); break;
    }
}while(op!=8);
system("cls");
cout<<"***************** FIN PROCESO ********************";
getche();
return 0;
}



