#include <stdio.h>  // para printf y manejo de archivos
#include <conio.h>  // para colores
#include <ctype.h>  // para toupper
#include <string.h> // para strcmp
#include <iostream> // pa
using namespace std;
#define max 10

void leermatriz( int M[][max],  int m, int n)
  {int i,j;
  	for (i=0;i<m;i++)
		for (j=0;j<n;j++)

		 {cout<<"["<<(i+1)<<","<<(j+1)<<"]=";
		  cin>>M[i][j];
		  }
	}
void vermatriz( int M[max][max], int m, int n)
  {int i,j;
	 	for (i=0;i<m;i++)
		{for (j=0;j<n;j++)
		 cout<<M[i][j]<<"\t";
		 cout<<endl;
		}

	}
void mt( int b[max][max],int tb[max][max], int n, int m)
  {int i,j;
	 for (i=0;i<n;i++)
		{for (j=0;j<m;j++)
		  tb[j][i]=b[i][j];

				}
}			
	
void Suma(int a[max][max],int tb[max][max],int S[max][max],int m,int n)
 {int i,j;
  for(i=0;i<m;i++)
	  for(j=0;j<n;j++)
  S[i][j]=a[i][j]+tb[i][j];

  }
				

int main()
  {int n,m,a[max][max],b[max][max],s[max][max],tb[max][max];
  cout<<"MATRIZ A"<<endl;
  cout<<"Ingrese el orden de la matriz A :";
  cin>>m>>n;  
	    leermatriz(a,m,n);
		system("cls");
		cout<<"MATRIZ A"<<endl;	
		vermatriz(a,m,n);
		getche();
		cout<<"Ingrese el orden de la matriz B :";
         cin>>n>>m;  
	
	    leermatriz(b,n,m);
	     cout<<"MATRIZ B"<<endl;	
		vermatriz(b,n,m);getche();
        mt(b,tb,n,m); 
		cout<<"MATRIZ TRANSPUESTA DE B"<<endl;	
		vermatriz(tb,m,n);getche();
		cout<<"MATRIZ B"<<endl;
  
		Suma(a,tb,s,m,n);
         cout<<"MATRIZ A + B"<<endl;	
		  vermatriz(s,m,n);getche();
      
      
	getch();
	return 0;
	}

