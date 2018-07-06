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
			cout<<"\t1.- Carga matriz tallas x colores\n\n";
			cout<<"\t2.- Mostrar polos x tallas y colores\n\n";
			cout<<"\t3.- Calcula Polos por Tallas\n\n";
			cout<<"\t4.- Calcula Polos por Colores\n\n";
			cout<<"\t5.- Mostrar Pols por Tallas\n\n";
			cout<<"\t6.- Mostrar Polos por Colores\n\n";
			cout<<"\t7.- Carga Precio Unitario por tallas\n\n";
			cout<<"\t8.- Genera Capital Invertido por Tallas\n\n";
			cout<<"\t9.- Mostrar Precio Unitario por tallas\n\n";
            cout<<"\t10.- Mostrar Capital Invertido por tallas\n\n";
			cout<<"\t11.- salir\n\n";

			cout<<"\t-->Ingrese su opci%cn : ";
			cin>>OPC;

			system("cls"); 
			}while(OPC<1||OPC>11);
			return OPC;
		 }
int total(int ci[max],int m)
    {int s,i;
     s=0;
     for (i=0;i<m;i++)
       s=s+ci[i];
   return s;
}
void leerpreuni( int pu[max],  int m)
  {int i;
  
	 system("cls"); 

	for (i=0;i<m;i++)
  		 {cout<<"precio["<<(i+1)<<"]=";
		  cin>>pu[i];
		  }
	}
void generacapinv( int pu[max],int pxt[max],int ci[max],  int m)
  {int i;
 
	for (i=0;i<m;i++)
         ci[i] = pu[i]*pxt[i];


	}
 void verprecio(int pu[max],  int m)
{int i;
 for (i=0;i<m;i++)
  		 {cout<<"pu ["<<(i+1)<<"]="<<pu[i]<<endl;
		  }
}
void verinver(int ci[max],  int m)
{int i;
 for (i=0;i<m;i++)
  		 {cout<<"ci["<<(i+1)<<"]="<<ci[i]<<endl;
		  }
}
void leermatriz( int M[max][max],  int m, int n)
  {int i,j;
  	for (i=0;i<m;i++)
		for (j=0;j<n;j++)

		 {cout<<"M["<<(i+1)<<","<<(j+1)<<"]=";
		  cin>>M[i][j];
		  }
	}
	void vermatriz(int M[max][max], int m, int n)
  {int i,j;
	 system("cls"); 
    
	for (i=0;i<m;i++)
		{for (j=0;j<n;j++)
		 cout<<M[i][j]<<"\t";
		 cout<<endl;
		}

	}

void cpt(int M[max][max], int pxt[max],int m,int n)
  {int i,j;
    
	 for (i=0;i<m;i++)
		{pxt[i]=0;
          for (j=0;j<n;j++)
		     pxt[i]=pxt[i]+M[i][j];

        }

 }
void cpc(int M[max][max], int pxc[max],int m,int n)
  {int i,j;
    
	 for (j=0;j<n;j++)
		{pxc[j]=0;
          for (i=0;i<m;i++)
		     pxc[j]=pxc[j]+M[i][j];

        }

 }

 void mostrarpxt(int pxt[max],int m)
  {int i;
    cout<<"CANTIDAD DE POLOS POR TALLAS"<<endl;
	 for (i=0;i<m;i++)
		cout<<"Talla [ "<<i+1<<"]="<<pxt[i]<<endl;
  }
void mostrarpxc(int pxc[max],int n)
  {int i;
    cout<<"CALTIDAD DE POLOS POR COLORES"<<endl;
	 for (i=0;i<n;i++)
		cout<<"Color[ "<<i+1<<"]="<<pxc[i]<<endl;
  }
 
int main()
  {int n,m,cant[max][max],pxt[max],pxc[max],mayor,posi,posj,preuni[max],capinv[max];
   cout<<"ingrese Numero tallas "<<endl;
	cin>>m;
 cout<<"ingrese Numero Colores "<<endl;
	cin>>n;
	 system("cls"); 	
	 
	int op;
	do{
		op=	Menu();
			switch(op)
			{
					case 1   :     leermatriz(cant,m,n);
								
									cout<<"\n\n\t-->Presione[ENTER]para regresar al men%c\n";
									getchar();getchar();break;

					case 2   :   system("cls"); 
									vermatriz(cant,m,n);getche();
									break;
									
    			    case 3   :     cpt(cant,pxt,m,n);
							    
									getchar();getchar();break;


					case 4   :    cpc(cant,pxc,m,n);
								    
									getchar();getchar();break;
                    case 5: mostrarpxt( pxt, m); getche();break;
				    case 6: mostrarpxc( pxc, n); getche();break;
                    case 7: leerpreuni( preuni, m); getche();break;
                    case 8: generacapinv(preuni,pxt,capinv,m); getche();break;
				   case 9: verprecio(preuni, m); getche();break;
                   case 10: verinver(capinv, m); getche();break;
                     
			}
		}while(op!=11);

	getch();
	}


