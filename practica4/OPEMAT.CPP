#include <stdio.h>  // para printf y manejo de archivos
#include <conio.h>  // para colores
#include <ctype.h>  // para toupper
#include <string.h> // para strcmp
#include <iostream> // pa
#define max 10
using namespace std;

void leermatriz( int M[][max],  int &m, int &n)
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
	
	for (i=0;i<m;i++)
		{for (j=0;j<n;j++)
		 cout<<M[i][j]<<"\t";
		 cout<<endl;
		}

	}
void Suma(int a[max][max],int b[max][max],int S[max][max],int m,int n)
 {int i,j;
  for(i=0;i<m;i++)
	  for(j=0;j<n;j++)
  S[i][j]=a[i][j]+b[i][j];

  }
	void mt( int a[max][max],int ta[max][max], int m, int n)
  {int i,j;
	 for (i=0;i<m;i++)
		{for (j=0;j<n;j++)
		  ta[j][i]=a[i][j];

				}
}			
				

int main()
  {int n,m,a[max][max],b[max][max],s[max][max],tra[max][max],p,q;
  cout<<"MATRIZ A"<<endl;
	    leermatriz(a,m,n);
		
		cout<<"MATRIZ A"<<endl;	
		vermatriz(a,m,n);
        getche();
		mt(a,tra,m,n);
		cout<<"MATRIZ TRANSPUESTA DE A"<<endl;	
		vermatriz(tra,n,m);
        getche();
		cout<<"MATRIZ B"<<endl;
	    leermatriz(b,p,q);
	
  
        cout<<"MATRIZ B"<<endl;	
		vermatriz(b,p,q);getche();
		
		mt(b,tra,p,q);
		cout<<"MATRIZ TRANSPUESTA DE B"<<endl;	
		vermatriz(tra,q,p);getche();
	    if (m==p && n==q)     
		{Suma(a,b,s,m,n);
         cout<<"MATRIZ A + B"<<endl;	
		  vermatriz(s,m,n);getche();
       }
       else 
         cout<<"Las matrices no se pueden sumar "<<endl;
	
	getch();
	return 0;
	}
/*
 void Promat(int a[][max],int b[][max],int prod[][max],int m,int n,int q)
 {int c,f,k;
  for(f=0;f<m;f++)
	  for(k=0;k<q;k++)
	  {prod[f][k]=0;
		for(c=0;c<n;c++)
		 prod[f][k]=prod[f][k]+a[f][c]*b[c][k];
	  }


  }
*/
