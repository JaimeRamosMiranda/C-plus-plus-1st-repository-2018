#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define max 100
#define libre 0
#define ocupado 1
struct departamento
{char clave[10];
long ext;
int ubi;
float prec;
int disp;
};
int buscarclave(departamento D[],int n,char clave[10])
{int i;
for(i=0;i<n;i++)
if(strcmp(D[i].clave,clave)==0)
return i;
return -1;
}
char continuar(char mensaje[])
  {char cont;
    do
     {cout<<mensaje;
       cin>>cont;
       cont=toupper(cont);
      }while(cont!='S' && cont!='N');
   return cont;
 }
void ingreso(departamento D[max],int &n)
{int p;
char resp;
do{system("cls");
cout<<"ingresar datos del departamento "<<endl<<endl;
cout<<"clave : ";
cin>>D[n].clave;
p=buscarclave(D,n,D[n].clave);
if(p==-1)
{do
{cout<<"extencion : ";
cin>>D[n].ext;
}while(D[n].ext<=0);
do
{cout<<"ubicacion (E) o (B) o (R) o (M) : ";
cin>>D[n].ubi;
}while(D[n].ubi<1 || D[n].ubi>4);//1=E 2=B 3=R 4=M
do
{cout<<"precio : ";
cin>>D[n].prec;
}while(D[n].prec<=0);
do
{cout<<"ocupacion : ";
cin>>D[n].disp;
}while(D[n].disp<0 || D[n].disp>1);
n++;
}
else
cout<<"la clave ya existe!!"<<endl;
  resp=continuar("Deseas ingresar otro Producto (s/n) :");
  }while(resp=='S');
}

void mostrar(departamento D[max],int n)
{int i;
cout<<setw(10)<<"clave"<<setw(20)<<"extencion"<<setw(10)<<"ubicacion"<<setw(15)<<"precio"<<setw(10)<<"ocupacion"<<endl;
for(i=0;i<n;i++)
{cout<<setw(10)<<D[i].clave<<setw(20)<<D[i].ext<<setw(10)<<D[i].ubi<<setw(15)<<D[i].prec<<setw(10)<<D[i].disp<<endl;
}
getche();
}
void mostrarocupacion(departamento D[max],int n)
{int i;
for(i=0;i<n;i++)
  {cout<<setw(10)<<"departamento"<<setw(10)<<i+1<<endl;
    if(D[i].disp==libre)
       cout<<libre<<"   ";
    else 
       cout<<ocupado<<"   ";
   }
  cout<<endl;     
}
float precio(departamento D[max],int n)
{int i;
float pr;
cout<<"ingresar precio cualquiera : ";
cin>>pr;
for(i=0;i<n;i++)
{if(D[i].prec<=pr)
cout<<setw(10)<<D[i].clave<<setw(20)<<D[i].ext<<setw(10)<<D[i].ubi<<setw(15)<<D[i].prec<<setw(10)<<D[i].disp<<endl;
}
getche();
}
long extencion(departamento D[max],int n)
{int i;
long exten;
cout<<"ingresar una extencion cualquiera : ";
cin>>exten;
for(i=0;i<n;i++)
{if(D[i].ext>=exten)
if(D[i].ubi==1)
cout<<setw(10)<<D[i].clave<<setw(20)<<D[i].ext<<setw(10)<<D[i].ubi<<setw(15)<<D[i].prec<<setw(10)<<D[i].disp<<endl;
}
getche();
}
float rentatotal(departamento D[max],int n)
{int i;
float tot=0,renta;
for(i=0;i<n;i++)
{if(D[i].disp==ocupado)
tot=tot+D[i].prec;
}
return tot;
}
int menu()
{int op;
do
{system("cls");
cout<<"[1]: ingresar datos"<<endl;
cout<<"[2]: mostrar dato"<<endl;
cout<<"[3]: mostrar departamentos libres u ocupados"<<endl;
cout<<"[4]: ingrese precio a desear"<<endl;
cout<<"[5]: ingrese extencion a desear"<<endl;
cout<<"[6]: renta total"<<endl;
cout<<"[7]: salir"<<endl;
cout<<"elegir una opcion ==>";
cin>>op;
}while(op<1 || op>7);
return op;
} 
int main()
{int op,n=0;
float total;
departamento D[max];
do
{system("cls");
op=menu();
switch(op)
{case 1: ingreso(D,n);getche();break;
case 2: mostrar(D,n);getche();break;
case 3:mostrarocupacion(D,n);getche();break;
case 4: precio(D,n);
getche();break;
case 5: extencion(D,n);
getche();break;
case 6: total=rentatotal(D,n);
cout<<"renta total a cobrar "<<setw(10)<<total<<endl;
getche();break;
case 7: system("cls");
cout<<"bye bye"<<endl;
getche();break;
}
}while(op!=7);
getche();
}
// Integrantes: Cotrina Paucar,John
//              Alvarado Cifuentes,Marco
