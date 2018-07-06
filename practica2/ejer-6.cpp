#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
	int cantdea,cantdeb,cantdec;
	float pun,puna,punb,punc;
	int i;
	
	cantdea=cantdeb=cantdec=puna=punb=punc=pun=0;
	i=0;
	 do
     {
         cout<<"Ingrese el puntaje del estudiante numero: "<<i+1<<endl;
	     cin>>pun;
	     if((pun<0 || pun >100) && pun != -1 )
	     cout<<"Error al ingresar el puntaje"<<endl;
    }while((pun<0 || pun >100) && pun != -1 );
    
    while(pun!=-1)
    {
    	 if(pun>=0 && pun<=29)
		 {
		     cantdec=cantdec+1;
		     punc=punc+pun;
		 }
		else
		     if(pun>=30 && pun<=69)
		     {
		 	 cantdeb=cantdeb+1;
		 	 punb=punb+pun;
		     }
		     else
		     {
		 	 cantdea=cantdea+1;
		 	 puna=puna+pun;
		     }
		i=i+1;
	 do
	 {
	 	 cout<<"Ingrese el puntaje del estudiante numero: "<<i+1<<"  Para finalizar Ingrese -1 "<<endl;
	     cin>>pun;
	     if((pun<0 || pun >100) && pun != -1 )
	     cout<<"Error al ingresar el puntaje"<<endl;
	 }while((pun<0 || pun >100) && pun != -1 );
	 
	}

	cout<<"Numero de estudiantes con calificacion A: "<<cantdea<<endl;
    cout<<"Numero de estudiantes con calificacion B: "<<cantdeb<<endl;
    cout<<"Numero de estudiantes con calificacion C: "<<cantdec<<endl;
    

 
getche();
return 0;	
}
