#include<iostream>
#include<conio.h>
#define max 20
using namespace std;
void leervector( float t[],int n)
{int i;
 for(i=0;i<n;i++)
    { do
       {cout<<"t["<<i+1<<"] = ";
        cin>>t[i];
        if(t[i]<=0)
        cout<<"DATO ERRADO!!!!!"<<endl;
       }while(t[i]<=0);
	}
}
void vervector(float t[],int n)
 {int i;
  //system("cls");
  //cout<<"vectores ingresadas"<<endl;
  for(i=0;i<n;i++)
    cout<<"t["<<i+1<<"]="<<t[i]<<endl;
 }
 //Ordenamiento - metodo de la burbuja
 void ascendente(float t[],int n)
 {  int i,j;
 	float tem;
 	
 	for(i=0;i<n;i++)
 	 {for(j=i+1;j<n;j++)
		 if(t[i]>t[j])
		 { tem=t[i];
		   t[i]=t[j];
		   t[j]=tem;	
		 }		
	  } 	
 }
 
void descendente(float t[],int n)
 {  int i,j;
 	float tem;
 	
 	for(i=0;i<n;i++)
 	 {for(j=i+1;j<n;j++)
		 if(t[i]<t[j])
		 { tem=t[i];
		   t[i]=t[j];
		   t[j]=tem;	
		 }		
	  } 	
 }
  //BUSQUEDA LINEAL 
 int busli(float t[], int n,float dabus)
 { int i,pos;
    pos=-1;//porq no existe un indice negativo, partimos del supuesto q el elemento no esta en el vector
     for(i=0;i<n&&pos==-1;i++)
        if(t[i]==dabus) 	
		pos=i;
    return pos;
} 
 //BUSQUEDA BINARIA 
 int busbin(float t[],int n,float tbus)
  {int encontrado=0,li,ls,c;
    li=0;
    ls=n;
  while((li<=ls && encontrado!=1))
  {c=(li+ls)/2;
   if( t[c]==tbus)
      encontrado=1;
   else   
      if(tbus> t [c])
         li=c+1;
       else
          ls=c-1;
   }
  if(encontrado==1)
     return c;
   else
    return -1;       
     }
 // insertar por posicion    
void insertaxposicion(float t[],int &n,float dato,int pos)
{int i;
 for(i=n-1;i>=pos;i--)
     t[i+1]=t[i];
     t[pos-1]=dato;
     n=n+1;
} 
//eliminar por posicion
void eliminarxposicion(float t[],int &n,int pos)
 {int i;
   for(i=pos;i<n;i++)
      t[i]=t[i+1];
      n=n-1;
} 
// modificar
void modificar(float t[],int n,int pos,float val)
{
 
   t[pos]=val;
} 

 int menu()
   {int op;
   do
	 { system("cls");
	 cout<<"\t\t\t\t\tMENU PRINCIPAL"<<endl;
       cout<<"\t\t\t\t\t=============="<<endl;
	   cout<<"\t\t[1]:Leer vector"<<endl;
	   cout<<"\t\t[2]:Mostrar Vector"<<endl;
	   cout<<"\t\t[3]:Orden Ascendente"<<endl;
	   cout<<"\t\t[4]:Orden Descendente"<<endl;
	   cout<<"\t\t[5]:Talla mayor y menor"<<endl;
	   cout<<"\t\t[6]:Busqueda Lineal"<<endl;
	   cout<<"\t\t[7]:Busqueda Binaria"<<endl;
	   cout<<"\t\t[8]:Inserta por Posicion"<<endl;
	   cout<<"\t\t[9]:Elimina por posicion"<<endl;
	   cout<<"\t\t[10]:Modifiva campos"<<endl;
	   cout<<"\t\t[11]:salir"<<endl;
	   cout<<"Ingrese una Opcion "<<endl;
	   cin>>op;
	   if(op<1 ||op>11)   
	   cout<<"Ingrese una opcion valida"<<endl,
	   getche();
     }while(op<1 ||op>11);
   return op;
}


		
 int main()
 {float talla[max],dato;
   int opcion,n,pos,repite;
    do
    {system("cls");
      opcion=menu();
      
      switch(opcion)
      {case 1: do
               {cout<<"Ingrese el tamaño del vector talla :"<<endl;
                cin>>n;
	           }while(n<1||n>max);
	            leervector(talla,n);break;
	    case 2:	cout<<"VECTOR talla"<<endl;
	             vervector(talla,n);getche();break;
	    case 3: cout<<"Orden ascendente del vector talla"<<endl;
	            ascendente(talla,n);break;
	    case 4: cout<<"Orden descendente del vector talla"<<endl;
	            descendente(talla,n);break;
		case 5: cout<<"Talla menor : "<<talla[0]<<endl;
		        cout<<"Talla mayor : "<<talla[n-1]<<endl;getche();break;
		case 6: cout<<"Ingrese Elemento a buscar "<<endl;
		        cin>>dato;
		        pos=busli(talla,n,dato);
		        cout<<""<<endl;
				if(pos>=0)
				cout<<"\t"<<dato<<" esta en la posicion "<<pos+1<<endl;
				else 
		        cout<<"\t"<<dato<<" dato no encontrado"<<endl;getche();
				break;
		case 7: cout<<"Ingrese Elemenbto a buscar"<<endl;
		        cin>>dato;
		        pos=busbin(talla,n,dato);
		        cout<<""<<endl;
				if(pos>=0)
				cout<<"\t"<<dato<<" esta en la posicion "<<pos+1<<endl;
				else 
		        cout<<"\t"<<dato<<" dato no encontrado"<<endl;getche();
				break; 
		case 8: do
		          {cout<<"Ingrese en que posicion desea Insertar [ 0,"<<max<<"]"<<endl;
		            cin>>pos;
		            }while (pos<0 ||pos>max);
			      cout<<"Ingrese el nuevo valor "<<endl;
				  cin>>dato;
				  insertaxposicion(talla,n,dato,pos);
				  break;
		case 9: do
		          {cout<<"Ingrese en que posicion desea Eliminar [ 0,"<<max<<"]"<<endl;
		            cin>>pos;
		            }while (pos<0 ||pos>max);
			     
				  eliminarxposicion(talla,n,pos);
				  break;
		case 10:for(;;)
		      {   
		        do
		          {cout<<"Ingrese en que posicion desea Insertar [ 0,"<<max<<"]"<<endl;
		            cin>>pos;
		            }while (pos<0 ||pos>max);
			      cout<<"Ingrese el nuevo valor "<<endl;
				  cin>>dato;
				  modificar(talla,n,pos,dato);
				  cout<<"Desea modificar otros datos Si 1 No 0 "<<endl;
				  cin>>repite;
				  if(repite == 0)break;
			}
				  break;		  
				  		  
			}		        
	  }while(opcion!=11);
   system("cls");
   cout<<"*************** FIN PROCESO **************"<<endl;
getche();	
	return 0;
}
