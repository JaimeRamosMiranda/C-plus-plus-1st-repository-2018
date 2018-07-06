/*
13.- .- Dadas dos matrices A y B de orden NxN. Si se sabe que todos los elementos son números enteros se pide que desarrolle lo siguiente:
1.	Ingreso (De dos matrices)
2.	Listado (Reporte de 2 matrices)
3.	Suma (de las dos matrices)
4.	Producto (multiplicación de matrices)
5.	Transpuesta (Transpuesta de A + Transpuesta de B)
6. 	Salir
Sean A matriz de orden MxN y matriz B de orden NxM; calcular A+tB y la matriz B.
*/

#include <iostream>
#include <conio.h>
#define dim 100
using namespace std;
int menu();


void leermatriz( int M[][dim],int &n)
  {int i,j;
 
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)

		 {cout<<"["<<(i+1)<<","<<(j+1)<<"]=";
		  cin>>M[i][j];
		  }
    
	}
	void vermatriz( int M[dim][dim],int n)
  {int i,j;
  
   		for (i=0;i<n;i++)
		{for (j=0;j<n;j++)
		 cout<<M[i][j]<<"\t";
		 cout<<endl;
	      }
	}
void summatriz(int M[][dim],int N[][dim] , int O[][dim],int n)
{
	int i,j;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		O[i][j]=M[i][j]+N[i][j];
	}
}

void tramatriz(int M[][dim],int N[][dim] , int O[][dim],int n)
{
	int i,j;
	for (i=0;i<n;i++)
	{
	 for (j=0;j<n;j++)
	  O[j][i]=M[i][j]+N[i][j];
	}
}

void promatriz(int M[][dim],int N[][dim],int O[][dim],int n)
 {int c,f,k;
  for(f=0;f<n;f++)
	  for(k=0;k<n;k++)
	  {O[f][k]=0;
		for(c=0;c<n;c++)
		 O[f][k]=O[f][k]+M[f][c]*N[c][k];
	  }
}

int menu()
{
	int opcion;
do
  {
	system("cls");
	
  cout<<"\t\t MENU PRINCIPAL"<<endl;
  cout<<"\t[1]: Ingreso de la matriz A"<<endl;
  cout<<"\t[2]: Ingreso de la matriz B"<<endl;
  cout<<"\t[3]: Listado de los elementos de la matriz A "<<endl;
  cout<<"\t[4]: Listado de los elementos de la matriz B "<<endl;
  cout<<"\t[5]: Suma (de las dos matrices)"<<endl;
  cout<<"\t[6]: Resultado de la suma de matrices"<<endl;
  cout<<"\t[7]: Producto (multiplicacion de matrices)"<<endl;
  cout<<"\t[8]: Resultado del producto de matrices"<<endl;
  cout<<"\t[9]: Transpuesta (Transpuesta de A + Transpuesta de B)"<<endl;
  cout<<"\t[10]: Resultado de la suma de transpuestas de matrices"<<endl;
  cout<<"\t[11]: Salir"<<endl;
  
  cout<<"Ingrese una opcion [1-6]"<<endl;
   cin>>opcion;
 if(opcion<1||opcion>11)
 cout<<"Opcion ingresada incorrecta"<<endl;
 system("cls");
  }while(opcion<1||opcion>11);
  
  return opcion;
 
	
}

int main()
{
int A[dim][dim],B[dim][dim],sum[dim][dim],pro[dim][dim],tra[dim][dim];
int n,op;
 do{
 	cout<<"ingrese el orden de las matrices cuadradas: "<<endl;
	cin>>n;

 }while(n<=0);

  	 do{
  	 	system("cls");
  	 	op=menu();
  	 	switch(op)
  	 	{
  	 		 case 1:
  	 		 cout<<"Matriz A: "<<endl;	 
             leermatriz(A,n);
             cout<<"Presione enter para regresar al menu"<<endl;
			 getche();break;             
             case 2:
			 cout<<"Matriz B: "<<endl;
             leermatriz(B,n);
			 cout<<"Presione enter para regresar al menu"<<endl;
			 getche();break;
			 case 3:
			 cout<<"Matriz A: "<<endl;
             vermatriz(A,n);
			 cout<<"Presione enter para regresar al menu"<<endl;
			 getche();break;
             case 4:
			 cout<<"Matriz B: "<<endl;
             vermatriz(B,n);
			 cout<<"Presione enter para regresar al menu"<<endl;
			 getche();break;
			 case 5:
			 cout<<"Se realizo la suma de matrices: "<<endl;
             summatriz(A,B,sum,n);
			 cout<<"Presione enter para regresar al menu"<<endl;
			 getche();break;
             case 6:
             cout<<"Suma de matrices: "<<endl;
             vermatriz(sum,n);
			 cout<<"Presione enter para regresar al menu"<<endl;
			 getche();break;
             case 7:
			 cout<<"Se realizo el producto de matrices: "<<endl;
             promatriz(A,B,pro,n);
			 cout<<"Presione enter para regresar al menu"<<endl;
			 getche();break;
             case 8:
             cout<<"Producto de matrices: "<<endl;	
	         vermatriz(pro,n);
			 cout<<"Presione enter para regresar al menu"<<endl;
			 getche();break;
			 case 9:
  	 		 cout<<"Se realizo la suma de las transpuestas de matrices: "<<endl;
             tramatriz(A,B,tra,n);
			 cout<<"Presione enter para regresar al menu"<<endl;
			 getche();break;
             case 10:
             cout<<"Suma de las transpuestas de matrices: "<<endl;
			 vermatriz(tra,n);
			 cout<<"Presione enter para regresar al menu"<<endl;
			 getche();break;
		   }
  	 	
	   } while(op!=11);
	system("cls");
	cout<<"***********FIN PROCESO *******"<<endl;


	
getche();
return 0;	
}

