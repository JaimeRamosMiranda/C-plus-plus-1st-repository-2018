#include<iostream.h>
#include<conio.h>
int main()
  {//Declracion de variables
   int i,n;
   float s,a,ns,ts,ta,tns;
   char repite;
   repite='S';
   while(repite=='S' || repite == 's')
   {system("cls");// limpia la pantalla 
   //Datos
   cout<<"Ingrese el numero de empleados >0 : ";
   cin>>n;
   //Proceso
   
   if(n>0)
      {ts=ta=tns=0;//inicializa acumuladores
       i=1;
       while(i<=n)
        {cout<<"Ingrese sueldo del empleado : "<<i<<" ==>";
         cin>>s;
           if(s>0)
              {if(s<=1000)
                  a=s*0.12;
                  
                else
                    if(s>1000&&s<=2500)
                       a=s*0.1;
                     else
                       a=s*0.08;
                
                ts=ts+s;
                ta=ta+a;
                tns=tns+ns;
                cout<<"Sueldo : "<<s<<endl;             
                cout<<"Aumento: "<<a<<endl;
                cout<<"Nuevo Sueldo : "<<ns<<endl;
                }
              else
                 cout<<"Sueldo errado debe ser >0 "<<endl;   
           i=i+1;
          }
          cout<<"\n\n\n TOTALES ACUMULADOS "<<endl;
          cout<<"Total sueldo        : "<<ts<<endl;
          cout<<"Total Aumento       : "<<ta<<endl;
          cout<<"Total Nuevo  sueldo : "<<tns<<endl;
          
      }
      
     else
        cout<<"Numero de empleados Errado "<<endl;
        getche();
    cout<<"Desea continuar (s/n) ";
    cin>>repite;
    
   }
  cout<<"********FIN PROCESO *****"<<endl;            
   getche();
   return 0;
}
