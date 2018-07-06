#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int i,p,c,k,op;
 int repite;
 for(;;)
 {system("cls");
 
 p=c=k=0;
 i=1;
// while(i<=n)
 {cout<<" menu de preferencia"<<endl;
  cout<<" ==================="<<endl;
  cout<<" [1]: Pepsi Cola"<<endl;
  cout<<" [2]: Coca Cola"<<endl;
  cout<<" [3]: Kola Real"<<endl;
  do
  {cout<<"Sr(a). cual es su bebida de preferencia ?";
  cin>>op;
  }while(op!=1&&op!=2&&op!=3);
  switch(op)
   {case 1: p=p+1;break;
    case 2: c=c+1;break;
    case 3: k=k+1;break;
   }
//   i=i+1;
    }
if((p==c)&&(p==k)&&(k==c))
   cout<<"Las 3 bibidas tiene igual preferenci"<<endl;
 else
    if((p==c)||(p==k)||(k==c)) 
	   {
	   if(p==c)
	      cout<<"Pesi Y coca cola tienen igual preferenci"<<endl;
	     else
	      if(p==k)
	      cout<<"Pesi Y cola real tienen igual preferenci"<<endl; 
		  else
		    if(c==k)
	      cout<<"oca cola y kola real tienen igual preferenci"<<endl;
	   }
	   if(p>c &&p>k)
	      cout<<"Pepsi cola es de mayor preferencia"<<endl;
	    else
	      if(c>p &&c>k)
	      cout<<"Coca cola es de mayor preferencia"<<endl;
	        else
			   if(k>c &&k>p)
	      cout<<"cola real es de mayor preferencia"<<endl;  
        getche();
  cout<<"Hay mas personas a encuestar Si [1] No [0]"<<endl;
  cin>>repite;
  if(repite==0)break;
}
system("cls");
cout<<"***** Fin de la encuesta ****"<<endl;
getche();
return 0;
}
