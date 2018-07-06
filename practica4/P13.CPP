#include <stdio.h>  
#include <conio.h>  // para colores
#include <ctype.h>  // para toupper
#include <string.h> // para strcmp
#include <iostream.h> // para cin cout
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
			cout<<"\t3.- Calcular Suma \n\n";
			cout<<"\t4.- Calcular Producto\n\n";
			cout<<"\t5.- Calcular Transpuesta\n\n";
			cout<<"\t6.- salir\n\n";

			cout<<"\t-->Ingrese su opci%cn : ";
			cin>>OPC;

			system("cls"); 
			}while(OPC<1||OPC>6);
			return OPC;
		 }
void leermatriz( int M[max][max],  int &m, int &n)
  {int i,j;
  cout<<"ingrese el orden de la matriz "<<endl;
	cin>>m>>n;
	 system("cls"); 

	for (i=0;i<m;i++)
		for (j=0;j<n;j++)

		 {cout<<"M["<<(i+1)<<","<<(j+1)<<"]=";
		  cin>>M[i][j];
		  }
	}
	void vermatriz( int M[max][max], int m, int n)
  {int i,j;
	 system("cls"); 
     cout<<endl;
	for (i=0;i<m;i++)
		{for (j=0;j<n;j++)
		 cout<<M[i][j]<<"\t";
		 cout<<endl;
		}

	}

	void mt( int a[max][max],int ta[max][max], int m, int n)
  {int i,j;
	 for (i=0;i<m;i++)
		{for (j=0;j<n;j++)
		  ta[j][i]=a[i][j];

				}

 }
 void Suma(int a[max][max],int b[max][max],int S[max][max],int m,int n)
 {int i,j;
  for(i=0;i<m;i++)
	  for(j=0;j<n;j++)
  S[i][j]=a[i][j]+b[i][j];

  }
 void Promat(int a[][max],int b[][max],int prod[][max],int m,int n,int q)
 {int c,f,k;
  for(f=0;f<m;f++)
	  for(k=0;k<q;k++)
	  {prod[f][k]=0;
		for(c=0;c<n;c++)
		 prod[f][k]=prod[f][k]+a[f][c]*b[c][k];
	  }


  }

int main()
  {int n,m,p,q,a[max][max],b[max][max],S[max][max],ta[max][max],prod[max][max],tb[max][max];
	int op;
	do{
		op=	Menu();
			switch(op)
			{
					case 1   :     leermatriz(a,m,n);
									leermatriz(b,p,q);
									cout<<"\n\n\t-->Presione[ENTER]para regresar al men%c\n";
									getchar();getchar();break;

					case 2   :   system("cls"); 
									vermatriz(a,m,n);getche();
									vermatriz(b,p,q);getche();
									printf("\n\n\t-->Presione[ENTER]para regresar al men%c\n",163);
									getchar();getchar();break;
				  case 3   :     Suma(a,b,S,m,n);
								    vermatriz(S,m,n);
									getchar();getchar();break;


					case 4   :     if(n==p)
									{Promat(a,b,prod,m,n,q);
									 vermatriz(prod,m,q);getche();
									}
									else
										cout<<"Las Matrices no son multiplivables ";

										printf("\n\n\t-->Presione[ENTER]para regresar al men%c\n");
										getchar();getchar();break;

					case 5   :    mt(a,ta,m,n);

									vermatriz(ta,n,m);getch();
									mt(b,tb,m,n);
									vermatriz(tb,n,m);getch();
									printf("\n\n\t-->Presione[ENTER]para regresar al men%c\n",163);
									getchar();getchar();break;
					case 6   :   system("cls");
                                 cout<<" Fin proceso......"<<endl;
                                 break;				
			}
		}while(op!=6);

	getch();
	}
