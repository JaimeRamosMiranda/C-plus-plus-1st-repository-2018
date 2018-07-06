#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int f,c,n; char car;
do { cout<<"Ingrese numero de filas: "<<endl;
     cin>>n;  
}while(n<=0); cout<<"Ingrese caracter: "<<endl; cin>>car;
for(f=1;f<=n;f=f+1)
{
	for(c=1;c<=f;c=c+1)
	{
		cout<<car<<"\t";
	}
 cout<<endl;
}

getche();
return 0;
}
