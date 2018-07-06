#include<iostream.h>
#include<conio.h>
#define max 10
void borrado(int t[],int &n,int pos)
  {int j;
     for(j=pos;j<n;j++)
      t[j]=t[j+1];
    
    n=n-1;
   }   
int main()
{int pos,l[max],n,elem,i;
 
  do{
  cout<<"ingrese el numero de elementos : <= "<<max<<"===>";
  cin>>n;
  }while(n<0 ||n>max);

for(i=0;i<n;i++)
  {cout<<"l["<<(i+1)<<"] =";
	cin>>l[i];
	}

	
do
 {
cout<<" que posicion desea Deletera .[0"<<","<<n-1<<"] ";
cin>>pos;
}while(pos<0 || pos >n);
	
borrado(l,n,pos);
	
for(i=0;i<n;i++)
  cout<<l[i]<<"\t";
  getche();
 
 

}
/*for(;;)
 {
   cout<<"Desea borrar otro elemento : si [1] no [0]  "<<endl;
 cin>>repite;
 if (repite == 0) break;
}
system("cls");
cout<<"************* Fin Proceso ************"<<endl;
getche();	
repite*/
