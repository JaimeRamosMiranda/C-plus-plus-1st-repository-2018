#include <stdio.h>  // para printf y manejo de archivos
#include <conio.h>  // para colores
#include <ctype.h>  // para toupper
#include <string.h> // para strcmp
#include <iostream.h>
#include <stdlib.h>  
#define max 10
int Menu()
{
		int OPC;
		do{
            system("cls"); 
			cout<<endl<<endl<<endl;
			cout<<"\tMENU :\n";
			cout<<"\t==== =\n\n";
			cout<<"\t1.- Llenar la Matriz\n\n";
			cout<<"\t2.- Mostrar la Matriz\n\n";
			cout<<"\t3.- Calcula Suma por Filas\n\n";  
			cout<<"\t4.- Calcula Suma por Columnas\n\n";
			cout<<"\t5.- Mostrar Suma por Filas\n\n";
			cout<<"\t6.- Mostrar Suma por Columnas\n\n";
			cout<<"\t7.- Mostrar Suma de todos los elementos de la Matriz\n\n";
			cout<<"\t8.- Mostrar Mayor elemento de la Matriz\n\n";
			cout<<"\t9.- salir\n\n";

			cout<<"\t-->Ingrese su opci%cn : ";
			cin>>OPC;

			system("cls"); 
			}while(OPC<1||OPC>9);
			return OPC;
		 }
int mayor( int M[][max],  int m, int n)
  {int i,j,may;
   
    may=-999;
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
 
		  if(M[i][j]>may)
		     may=M[i][j];
  return may;		     
		  
	}		 
		 
void leermatriz( char c[20],int M[max][max],  int &m, int &n)
  {int i,j;
  cout<<"ingrese el orden de la matriz "<<c<<endl;
	cin>>m>>n;
	 system("cls"); 

	for (i=0;i<m;i++)
		for (j=0;j<n;j++)

		 {cout<<c<<"["<<(i+1)<<","<<(j+1)<<"]=";
		  cin>>M[i][j];
		  }
	}
	void vermatriz(char c[20], int M[max][max], int m, int n)
  {int i,j;
	 system("cls"); 
     cout<<c<<endl;
	for (i=0;i<m;i++)
		{for (j=0;j<n;j++)
		 cout<<M[i][j]<<"\t";
		 cout<<endl;
		}

	}

void sumafila(int M[max][max], int F[max],int m,int n)
  {int i,j;
    
	 for (i=0;i<m;i++)
		{F[i]=0;
          for (j=0;j<n;j++)
		     F[i]=F[i]+M[i][j];
        }

 }
 void sumacolumna(int M[max][max],int C[max],int m,int n)
  {int i,j;
    
	 for (j=0;j<n;j++)
		{C[j]=0;
          for (i=0;i<m;i++)
		     C[j]=C[j]+M[i][j];
        }

 }
 void mostrarsumafilas(int F[max],int m)
  {int i,j;
    cout<<"SUMA POR FILAS"<<endl;
	 for (i=0;i<m;i++)
		cout<<"Fila [ "<<i+1<<"]="<<F[i]<<endl;
  }
void mostrarsumacolumnas(int C[max],int n)
  {int i;
    cout<<"SUMA POR COLUMNAS"<<endl;
	 for (i=0;i<n;i++)
		cout<<"Columna[ "<<i+1<<"]="<<C[i]<<endl;
  }
 int suma(int F[max],int m)
 {int s=0,i;
   for (i=0;i<m;i++)
      s=s+F[i];
    return s;
}  
int main()
  {int n,m,a[max][max],F[max],C[max];
	int op;
	do{
		op=	Menu();
			switch(op)
			{
					case 1   :     leermatriz(" A ",a,m,n);
								
									cout<<"\n\n\t-->Presione[ENTER]para regresar al men%c\n";
									getchar();getchar();break;

					case 2   :   system("cls"); 
									vermatriz("Matriz  A  ",a,m,n);getche();
									break;
									
    				  case 3   :     sumafila(a,F,m,n);
							    
									getchar();getchar();break;


					case 4   :    sumacolumna(a,C,m,n);
								    
									getchar();getchar();break;
                    case 5: mostrarsumafilas( F, m); getche();break;
				    case 6: mostrarsumacolumnas( C, n); getche();break;
				    case 7:int r;
				           r=suma(F,m);
				           cout<<"Suma de Todos los elementos de la matriz : "<<r<<endl;
				           getche();break;
                    case 8:int t;
				           t=mayor(a,m,n);
				           cout<<"Mayor elemento de la matriz : "<<t<<endl;
				           getche();break;
			}
		}while(op!=9);

	getch();
	}
