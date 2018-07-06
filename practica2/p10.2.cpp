/*
10.- Escribir un algoritmo que permita realizar una encuesta a 6 personas preguntando 
por su bebida favorita (Pepsi Cola, Coca Cola, Kolareal), 
el algoritmo debe determinar la bebida de mayor preferencia. 
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{int i,p,c,k,op;
 int repite;
  p=c=k=0;
 
  {system("cls");
  
  cout<<" menu de preferencia"<<endl;
  cout<<" ==================="<<endl;
  cout<<" [1]: Pepsi Cola"<<endl;
  cout<<" [2]: Coca Cola"<<endl;
  cout<<" [3]: Kola Real"<<endl;
  do
  {cout<<"Sr(a). cual es su bebida de preferencia ?";
  cin>>op;
  }while((op!=1&&op!=2&&op!=3)&&(op!=9));
  while(op!=9)
  {switch(op)
   {case 1: p=p+1;break;
    case 2: c=c+1;break;
    case 3: k=k+1;break;
   }
  cout<<" menu de preferencia"<<endl;
  cout<<" ==================="<<endl;
  cout<<" [1]: Pepsi Cola"<<endl;
  cout<<" [2]: Coca Cola"<<endl;
  cout<<" [3]: Kola Real"<<endl;
  do
  {cout<<"Sr(a). cual es su bebida de preferencia ? final ";
  cin>>op;
  }while((op!=1&&op!=2&&op!=3)&&(op==9));
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
return 0;
}
}
