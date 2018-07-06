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
			cout<<"\t1.- Llenar Notas de N alumnos\n\n";
			cout<<"\t2.- Mostrar Notas de N alumnos\n\n";
			cout<<"\t3.- Calcula Promedio por Alumno\n\n";  
			cout<<"\t4.- Calcula Promedio por Curso\n\n";
			cout<<"\t5.- Mostrar Promedio por Alumno\n\n";
			cout<<"\t6.- Mostrar Promedio por Curso\n\n";
			cout<<"\t7.- Mostrar Mayor Nota\n\n";
			cout<<"\t8.- salir\n\n";

			cout<<"\t-->Ingrese su opci%cn : ";
			cin>>OPC;

			system("cls"); 
			}while(OPC<1||OPC>8);
			return OPC;
		 }
float mayor( float M[][max],  int m, int n)
  {int i,j;
   float may;
   
    may=-999;
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
 
		  if(M[i][j]>may)
		     may=M[i][j];
  return may;		     
		  
	}		 
		 
void leermatriz(float M[max][max],  int &m, int &n)
  {int i,j;
  cout<<"ingrese el Numero de alumnos y Cursos "<<endl;
	cin>>m>>n;
	 system("cls"); 

	for (i=0;i<m;i++)
		for (j=0;j<n;j++)

		 {cout<<"["<<(i+1)<<","<<(j+1)<<"]=";
		  cin>>M[i][j];
		  }
	}
	void vermatriz(float M[max][max], int m, int n)
  {int i,j;
	 system("cls"); 
     
	for (i=0;i<m;i++)
		{for (j=0;j<n;j++)
		 cout<<M[i][j]<<"\t";
		 cout<<endl;
		}

	}

void promxalumno(float M[max][max], float pxa[max],int m,int n)
  {int i,j;
   float s; 
	 for (i=0;i<m;i++)
		{s=0;
          for (j=0;j<n;j++)
		     s=s+M[i][j];
		     pxa[i]=s/n;
        }

 }
 void promxcurso(float M[max][max],float pxc[max],int m,int n)
  {int i,j;
   float s;
    
	 for (j=0;j<n;j++)
		{s=0;
          for (i=0;i<m;i++)
		     s=s+M[i][j];
		     pxc[i]=s/m;
		     
        }

 }
 void promediocurso(float pxc[max],int n)
  {int i,j;
    cout<<"PROMEDIO POR CURSO"<<endl;
	 for (i=0;i<n;i++)
		cout<<"Curso [ "<<i+1<<"]="<<pxc[i]<<endl;
  }
void promedioalumno(float pxa[max],int m)
  {int i;
    cout<<"PROMEDIO POR ALUMNO"<<endl;
	 for (i=0;i<m;i++)
		cout<<"Alumno[ "<<i+1<<"]="<<pxa[i]<<endl;
  }
 
int main()
  {int n,m;
  float nota[max][max],pc[max],pa[max];
	int op;
	do{
		op=	Menu();
			switch(op)
			{
					case 1   :     leermatriz(nota,m,n);
								
									cout<<"\n\n\t-->Presione[ENTER]para regresar al men%c\n";
									getchar();getchar();break;

					case 2   :   system("cls"); 
									vermatriz(nota,m,n);getche();
									break;
									
    				  case 3   :     promxalumno(nota,pa,m,n);
							    
									getchar();getchar();break;


					case 4   :    promxcurso(nota,pc,m,n);
								    
									getchar();getchar();break;
                    case 5: promedioalumno( pa, m); getche();break;
				    case 6: promediocurso( pc, n); getche();break;
				    
                    case 7:int t;
				           t=mayor(nota,m,n);
				           cout<<"Mayor Nota : "<<t<<endl;
				           getche();break;
			}
		}while(op!=8);

	getch();
	}
