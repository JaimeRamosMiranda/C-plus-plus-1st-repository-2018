#include <conio.h>
#include <iostream.h>
#include <iomanip.h>
#include <stdio.h>
#include<string.h>
#define max 5


struct esc
{int cod;
 char nom[30];
 int nse;
 float sem[10];
 char car[20];
 };

 void ingreso(esc e[],int n)
  {int i,j;
	for (i=0;i<n;i++)
		 {	cout<<"INGRESE DATOS  DEL ALUMNOS : "<<(i+1)<<endl;
			cout<<" CODIGO	: ";
			cin>>e[i].cod;
			cout<<" Nombre	: ";
			cin>>e[i].nom;
			cout<<" NUMERP DE SEMESTRES : ";
			cin>>e[i].nse;
			for(j=1;j<=e[i].nse;j++)
			 {cout<<"Ingrese promedio del semestre : "<<j<<"====>  ";
			  cin>>e[i].sem[j];
			  }
			  cout<<" Ingrese Carrera	: ";
			cin>>e[i].car;
		  }

  }
	void mostrar(esc e[],int n)
  {int i,j;
   system("cls");
	 cout<<setw(10)<<"CODIGO "<<setw(30)<<"NOMBRES "<<setw(5)<<"NSE"<<setw(20)<<" CARRERA   "<<endl;

	 for(i=0;i<n;i++)
	 {cout<<setw(10)<<e[i].cod<<setw(30)<<e[i].nom<<setw(5)<<e[i].nse<<setw(20)<<e[i].car<<endl;
	  cout<<"PROMEDIOS POR SEMESTRE  "<<endl;
	  for(j=1;j<=e[i].nse;j++)
		  cout<<setw(15)<<e[i].sem[j]<<endl;
	 }
	}
	//***************
	void mayor10(esc e[],int n)
  {int i,j;
	float pro,suma=0;
	cout<<setw(10)<<"CODIGO "<<setw(30)<<"NOMBRES "<<endl;
	for(i=0;i<n;i++)
	 {suma = 0;
	 
	  for(j=1;j<=e[i].nse;j++)
		  suma = suma + e[i].sem[j];
		  pro=suma / e[i].nse;
          if (pro>10)
          
           cout<<setw(10)<<e[i].cod<<setw(30)<<e[i].nom<<endl;
          
       //   system ("pause");   	
	 }
	 
}

	void mayor10_eco(esc e[],int n)
  {int i,j;
   char c;
   system("cls"); 
	float pro,suma=0;
      cout<<"ALUMNOS DE ECONOMIA CON PROMEDIOS MAYOR A 10 EN TODOS LOS SEMESTRES "<<endl;
	  cout<<"=================================================================== "<<endl;
	  cout<<setw(10)<<"CODIGO "<<setw(30)<<"NOMBRES "<<endl;	
	 for(i=0;i<n;i++)
	 {c=strcmp(e[i].car,"eco");
	  if (c==0)
	     {j=1;
	    
	      while(j<=e[i].nse && e[i].sem[j]>10)
	      j=j+1;
	      
                   
	       if(j>e[i].nse)
	       {  	
             
                cout<<setw(10)<<e[i].cod<<setw(30)<<e[i].nom<<endl;
          }
	  
       }         
	     	
	 }
 
}
float mayorpro(esc e[],int n)
  {int i,j,pos;
    float suma, pro, ma=-1;
     char c;
   	
      cout<<"ALUMNO DE FISI CON  MAYOR PROMEDIO "<<endl;
	  cout<<"================================================="<<endl;
	  cout<<setw(10)<<"CODIGO "<<setw(30)<<"NOMBRES "<<endl;
	 for(i=0;i<n;i++)
	 {suma = 0;
      c=strcmp(e[i].car,"fisi");
	  if (c==0)
	     {for(j=1;j<=e[i].nse;j++)
	       suma=suma +e[i].sem[j];
	       pro=suma/e[i].nse;
	       
	       if(pro>ma)
	         {ma=pro;
              pos=i;
              }                  
          }
      } 
    
      cout<<setw(10)<<e[pos].cod<<setw(30)<<e[pos].nom<<endl;
    
    return ma;
 
}

	void mayorprovarios(esc e[],int n)
  {int i,j;
  float suma=0, pro,p;
   char c;
   system("cls"); 
   cout<<"ALUMNOS DE FISI CON MAYOR PROMEDIO "<<endl;
   cout<<"======================================="<<endl;
   cout<<setw(10)<<"CODIGO "<<setw(30)<<"NOMBRES "<<endl;
   p= mayorpro(e,n);
   
	 for(i=0;i<n;i++)
	 {c=strcmp(e[i].car,"fisi");
	  if (c==0)
	     {suma=0;
	      
           for(j=1;j<=e[i].nse;j++)
	        suma=suma +e[i].sem[j];
	       pro=suma/e[i].nse;
           
	       if(pro==p)      
	           
             cout<<setw(10)<<e[i].cod<<setw(30)<<e[i].nom<<endl;
             
             
          }
            
      }         
           
}
int menu()
{
int opcion;

		do{
		system("cls");
			cout<<"  Menu Principal  "<<endl;
			cout<<"  ==============  "<<endl;
			cout<<"Ingresar datos alumno .......................[1]"<<endl;
			cout<<"Mostrar datos alumno ........................[2]"<<endl;
			cout<<"Promedio General > 10 .......................[3]"<<endl;
			cout<<"Alumnos de Eco pro>10 en totos los sem ......[4]"<<endl;
			cout<<"Alumno con Mayor pro en fisi   ..............[5]"<<endl;
			cout<<"Alumnos con Mayor pro en fisi   .............[6]"<<endl;
			cout<<"Salir........................................[7]"<<endl;
			cout<<"Ingrese opcion : ";
			cin>>opcion;
		}while(opcion<1 || opcion>7);
	 return opcion;
  }
	
int main()
{ int m,op;
  float p;
 
	esc escuela[max];
	cout<<"Ingrese el numero de alumnos : "<<endl;
	cin>>m;
	do
	 {system("cls");

		op=menu();
			switch(op)
			{
			case 1: ingreso(escuela,m);
				break;
			case 2: mostrar(escuela,m);
			        system ("pause");
				break;
			case 3:  mayor10(escuela,m);
			       system ("pause");
				break;
			case 4:	mayor10_eco(escuela,m);
			        system ("pause");
				break;
			case 5: mayorpro(escuela,m);
			        system ("pause");
				break;
			case 6: mayorprovarios(escuela,m);
			      system ("pause");
				break;
           
           	case 7: system("cls");
           	        cout<<" Fin Proceso ::::::::";
				break;        	
			}
	 }while(op!=7);
		getch();
}
