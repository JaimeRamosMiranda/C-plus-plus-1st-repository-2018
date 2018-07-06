#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
int main()
{ //declaracion de variable de e/s
	float sn,sj,sa,sv,pn,pj,pa,pv,peso;
    int nn,nj,na,nv,n,i,ed;
  //datos
    do
     {
    cout<<"Ingrese el numero personas a encuestar :"<<endl;
	cin>>n;
    }while(n<1);
 //proceso
	sn=sj=sa=sv=nn=nj=na=nv=0;
    i = 1;
	while(i<=n)
	{cout<<"Ingrese datos de la persona : "<<i<<endl;
     do
      {
     cout<<"Peso : "<<endl;
     cin>>peso;
      }while(peso <0);
      do
       {
        cout<<"Edad : "<<endl;
        cin>>ed;
        }while(ed<0);
       if(ed>0 && ed <=12)
          {sn=sn+ed;
           nn=nn+1;
           }
          if(ed>=13 && ed <=29)
            { sj=sj+ed;
              nj=nj+1;
              }
             if(ed>=30 && ed <=59)
                {sa=sa+ed;
                 na=na+1;
                 }
                else
                {
                sv=sv+ed;
                nv=nv+1;
                }
      i=i+1;
 	}
  // calculo de promedios
     if(nn>0)
         {pn=sn/nn;
         cout<<"promedio de peso Niños : "<<pn<<endl;
        }
         else
         cout<<"No se han encuestado Niños "<<endl;

     if(sj>0)
        {pj=sj/nj;
        cout<<"promedio de peso Jovenes : "<<pj<<endl;
         }
        else
        cout<<"No se han encuestado Jovenes "<<endl;

     if(na>0)
        {pa=sa/na;
        cout<<"promedio de peso Adultos : "<<pa<<endl;
         }
        else
        cout<<"No se han encuestado adultos "<<endl;

     if(nv>0)
        {pv=sv/nv;
        cout<<"promedio de peso Viejos : "<<pv<<endl;
         }
        else
        cout<<"No se han encuestado Viejos "<<endl;
    system("pause");
	return 0;
}
