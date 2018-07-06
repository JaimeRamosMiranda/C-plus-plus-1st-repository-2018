
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define dim 20
struct fecha
{ 
 int dia;
 int mes; 
 int ano;
 };

struct persona
{int codigo;
 char ape[20];
 char nom[20];
 fecha fechanac;
 int edad;
 char sexo;
};
int main()
{int i,n,di,mi,ai,df,mf,af;
 persona p[dim];
cout<<"Ingrese Numero de personas ";
cin>>n;
for (i=0; i<n; i++)
{cout<<"Ingrese datos de la persona "<<i+1<<endl;
 cout<<"Codigo : ";
 cin>>p[i].codigo;
 cout<<"Apellidos ";
 fflush(stdin);
 gets(p[i].ape); 
 cout<<"Nombres ";
 fflush(stdin);
 gets(p[i].nom);
 cout<<"Ingresar fecha de nacimiento : ";
 cout<<"Dia : ";
 cin>>p[i].fechanac.dia;
 cout<<"Mes : ";
 cin>>p[i].fechanac.mes;
 cout<<"Año : ";
 cin>>p[i].fechanac.ano;
 cout<<"Edad : ";
 cin>>p[i].edad;
 cout<<"Sexo : ";
 cin>>p[i].sexo;
}
system("cls");
cout<<" datos de la persona "<<endl;
for (i=0; i<n; i++)
{
 cout<<"Codigo : "<<p[i].codigo<<endl;
 cout<<"Apellidos "<<p[i].ape<<endl;
 cout<<"Apellidos "<<p[i].nom<<endl;
 cout<<"Sexo "<<p[i].sexo<<endl;
}

 
cout<<"Ingrese fecha Inicial : ";
cout<<"dia : ";
cin>>di;
cout<<"Mrs : ";
cin>>mi;
cout<<"Año : ";
cin>>ai;
cout<<"Ingrese fecha Final : ";
cout<<"dia : ";
cin>>df;
cout<<"Mes : ";
cin>>mf;
cout<<"Año : ";
cin>>af;           

for (i=0; i<n; i++)
  {if(p[i].fechanac.ano>=ai && p[i].fechanac.ano<=af)
      if(p[i].fechanac.mes>=mi && p[i].fechanac.mes<=mf)  
         if( p[i].fechanac.dia>=di && p[i].fechanac.dia<=df)
                if( p[i].sexo=='v')
                {cout<<"Nombres : "<<p[i].nom<<endl;
                cout<<"Apellidos : "<<p[i].ape<<endl;
                cout<<"Edad "<<p[i].edad<<endl;
                }
                
  }
getche();
return 0;
}
