#include <stdio.h>  // para printf y manejo de archivos
#include <conio.h>  // para colores
#include <ctype.h>  // para toupper
#include <string.h> // para strcmp
#include <iostream.h> // pa
#include <stdlib.h>
#define max 10

void leermatriz( char c[20],int M[][max],  int m, int n)
  {int i,j;
	 system ("cls");
	 cout<<"Ingrese elementos de la matriz "<<c<<endl;
	for (i=0;i<m;i++)
				for (j=0;j<n;j++)

		 {cout<<c<<"["<<(i+1)<<","<<(j+1)<<"]=";
		  cin>>M[i][j];
		  }
	}
	void vermatriz(char c[20], int M[][max], int m, int n)
  {int i,j;
	 system ("cls");
	cout<<" MATRIZ "<<c<<endl;
	for (i=0;i<m;i++)
				{for (j=0;j<n;j++)
		 cout<<M[i][j]<<"\t";
		 cout<<endl;
				}

	}

	void mt( int a[][max],int ta[][max], int m, int n)
  {int i,j;
	 for (i=0;i<m;i++)
				{for (j=0;j<n;j++)
			  ta[j][i]=a[i][j];

				}

 }
 void Suma(int a[][max],int b[][max],int S[][max],int m,int n)
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
  {int n,m,p,q,a[max][max],b[max][max],S[max][max],ta[max][max],prod[max][max];
	cout<<"ingrese el orden de la matriz A ==>";
	cin>>m>>n;
leermatriz("Matriz A ",a,m,n);
	 cout<<"ingrese el orden de la matriz B ==>";
	cin>>p>>q;
	leermatriz("Matriz B ",b,p,q);
	system ("cls");
	vermatriz("Matriz  A  ",a,m,n);getche();
	vermatriz("Matriz  B  ",b,p,q);getche();
	if(n==p)
	  {Promat(a,b,prod,m,n,q);
	  vermatriz("Prod A * B ",prod,m,q);getche();
	  }
	  else
	  {cout<<"Las Matrices no son multiplivables ";
       getche();
       }
	mt(a,ta,m,n);

	vermatriz("Matriz  tanspuesta A  ",ta,n,m);getch();
	Suma(a,b,S,m,n);
	vermatriz("SUma A + B",S,m,n);
	getch();
	return 0;
	}
