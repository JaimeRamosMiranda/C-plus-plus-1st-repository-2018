#include <stdio.h>  // para printf y manejo de archivos
#include <conio.h>  // para colores
#include <ctype.h>  // para toupper
#include <string.h> // para strcmp
#include <iostream> // pa
#include <stdlib.h>
#define max 10
using namespace std;
int main()
  {int n,m,i,j,a[max][max],ta[max][max];
  do
  {
  	cout<<"ingrese el orden de la matriz A ==>";
	cin>>m>>n;
  }while(m<1 || m>max || n<1 || n>max); 
  for (i=0;i<m;i++)
     for (j=0;j<n;j++)

		 {cout<<"A["<<(i+1)<<","<<(j+1)<<"]=";
		  cin>>a[i][j];
    }
    // salida
    system("cls");
    cout<<"MATRIZ A"<<endl;
    for (i=0;i<m;i++)
		{for (j=0;j<n;j++)
		 cout<<a[i][j]<<"\t";
		 cout<<endl;
		}

	getch();
	return 0;
	}
