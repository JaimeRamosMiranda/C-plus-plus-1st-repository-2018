#include<iostream.h>
#include<conio.h>
#define max 10
int leerN()
{int n;
  do{
  cout<<"ingrese el numero de elementos : <= "<<max<<"===>";
  cin>>n;
  }while(n<0 ||n>max);
 return n;
}
void leervector(int m[], int n)
{int i;
 for(i=0;i<n;i++)
  {cout<<"m["<<(i+1)<<"] =";
	cin>>m[i];
	}
}

void vervector(int m[], int n)
{int i;
 for(i=0;i<n;i++)
  cout<<"l["<<(i+1)<<"] ="<<m[i]<<endl;
	
} 
void inserta(int t[],int &n,int pos, int elem)
  {int j;
   for(j=n;j>=pos;j--)
      t[j+1]=t[j];
    t[pos]=elem;
    getche();
    n=n+1;
   } 
void EliminaXPos(int t[],int &n, int &pos)
{
   int i;
   
   do{
       system("cls");
      cout<<endl<<endl<<endl;
      cout<<"\t--> Ingrese el valor de la posicion a eliminar [0"<<","<< n<<"] ";
      cin>>pos;
   }while(pos <0 ||pos>n);

   for(i=pos+1;i<=n;i++)
   {
      t[i-1]=t[i];
   }
   n=n-1;
   
   vervector(t,n);
  
} 
int main()
{int pos,l[max],n,elem,i,p;
 n=leerN();
 leervector(l,n);
 cout<<"VECTOR INGRESADO "<<endl;
 vervector(l,n);
  

do
 {
cout<<"En que posicion desea insertar .[0"<<","<< n<<"] ";
cin>>pos;
}while(pos<0 || pos >n);
cout<<"Ingrese el elemento a insertar : ";
cin>>elem;	
inserta(l,n,pos,elem);
vervector(l,n);
getche();
EliminaXPos(l,n,p);
getche();
return 0;
}


