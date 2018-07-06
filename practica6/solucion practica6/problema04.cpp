#include<windows.h>
#include<math.h>
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
#include<ctype.h>
#include<iostream>
#define meses 12
struct data
{
       char nom[30];
       int produc[12];
       float prom;
};

data obrero;
FILE *P;
FILE *G;
FILE *temporal; 

void cargar();
void cargar2();
int menu();
void crear();
void ingresar();
void mostrar();
void modificar();
void baja_logica();
void baja_fisica();


void cargar()

{
 cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\tPresiona [Enter]\n";
 cout<<"\t\t\t\tอออออออออออออออ\n";getch();
 cout<<"\t\t\t\t";
 for(int i=0;i<14;i++)
   {Sleep(100);
    cout<<"ฏ";
   }
system("cls"); 
}
void cargar2()
{
 cout<<"\n\n\t\t\t       Loading...\n";
 cout<<"\t\t\t    อออออออออออออออ\n";
 cout<<"\t\t\t    ";
 for(int i=0;i<14;i++)
   {Sleep(100);
    cout<<"ฏ";
   }
system("cls"); 
}
int menu()
{
     int op;
     do{
         
         cout<<setw(50)<<"Elija una opcion\n\n";
         cout<<setw(45)<<"1)Crear archivo.\n";
         cout<<setw(50)<<"2)Ingresar los datos.\n";
         cout<<setw(39)<<"3)Mostrar.\n";
         cout<<setw(41)<<"4)Modificar.\n";
         cout<<setw(45)<<"5)Bajas logicas.\n";
          cout<<setw(45)<<"6)Bajas fisicas.\n";
          cout<<setw(37)<<"0)Salir.\n";
         cout<<"elija una opcion.\n";
         cin>>op;
          }while(op<0||op>6);
   
   return(op);
   
     }
void crear()
{
     P=fopen("prob4.txt","a+");
     if(P==NULL)
        {cout<<"el archivo no existe.\n";
         getch();
         exit(1);
        }
        else 
            {
              cout<<"se creo exitosamnte\n";
              fclose(P);
             }
     
     getch();
     
}
     
void ingresar()
{char resp;
int max=0,min;
        P=fopen("prob4.txt","a");
     
     if(P==NULL)
       {
          cout<<"ha ocurrido un error.\n";
          getch();
          exit(1);
                }
     do
     {          
                cout<<endl;
                cout<<"nombre del obrero: "; cin>>obrero.nom;
                for(int i=0;i<meses;i++)
                {
                cout<<"Produccion en el mes ["<<i+1<<"] ";cin>>obrero.produc[i];
               
                }
                for(int i=0;i<meses;i++)
                {
                     if(obrero.produc[i]>max)
                     {
                           max=obrero.produc[i];                  
                     }            
                                 
                 }
                min=obrero.produc[0];
                for(int i=0;i<meses;i++)
                {
                     if(min>obrero.produc[i])
                     {
                           min=obrero.produc[i];                  
                     }            
                                 
                }
                
                
                
                
                obrero.prom=(max-min)*1000;
                
                fwrite(&obrero,sizeof(obrero),1,P);
                if(ferror(P))
                  {
                 cout<<"hay errores de escritura con el archivo.\n";            
                 getch();
                 exit(1);
                   }
                  else
                     {
                        cout<<"ingresar nuevo registro[S/N].\n";
                        cin>>resp;
                        resp=toupper(resp);
                    }
     }while(resp!='N');
     
     
     
     fclose(P);
}

void mostrar()
{
          P=fopen("prob4.txt","r+");
          if(P==NULL)
            {
             cout<<"error.\n";
             getch();
             exit(1);
             } 
           
         
                    
          fread(&obrero,sizeof(obrero),1,P);
          
          while(!feof(P))
          {
          cout<<endl;
          cout<<"nombre: "<<obrero.nom<<endl;
          cout<<"produccion por mes:\n";
          for(int i=0;i<meses;i++)
             {
               cout<<"mes ["<<i+1<<"] "<<obrero.produc[i]<<endl;
             }
          cout<<"promedio: "<<obrero.prom;
          fread(&obrero,sizeof(obrero),1,P);
          cout<<endl;
          };
          fclose(P);
          
          getch();
}
          
void modificar()
{
     char nombre[30];
     int cont=0,max=0,min;
        cout<<"ingrese el nombre a modificar.\n";
        cin>>nombre;
        P=fopen("prob4.txt","r+");
          if(P==NULL)
             {
                cout<<"error al abrir.\n";
                getch();
                exit(1);
              }
    
     
     G=fopen("temporal.txt","a+");
     if(G==NULL)
        {
                cout<<"error en el archivo.\n";
                getch();
                exit(1);
        }
                
                
                fread(&obrero,sizeof(obrero),1,P);
                while(!feof(P))
                {
                               
                    if(strcmp(nombre,obrero.nom)==0)
                      {
                        cout<<"ingrese nuevo nombre.\n";
                        cin>>obrero.nom;
                        for(int i=0;i<meses;i++)
                        {
                          cout<<"produccion en el mes ["<<i+1<<"] ";cin>>obrero.produc[i];//cout<<endl;
               
                          }
                         for(int i=0;i<meses;i++)
                          {
                          if(obrero.produc[i]>max)
                          {
                           max=obrero.produc[i];                  
                                             }            
                                 
                                 }
                min=obrero.produc[0];
                for(int i=0;i<meses;i++)
                {
                     if(min>obrero.produc[i])
                     {
                           min=obrero.produc[i];                  
                                             }            
                                 
                                 }
                
                
                
                
                obrero.prom=(max-min)*1000;
           fwrite(&obrero,sizeof(obrero),1,G);  
             cont++;                       
                                                      }           
                                      
       else
            {                          
             fwrite(&obrero,sizeof(obrero),1,G);                        
                                      
                                      }
                                      fread(&obrero,sizeof(obrero),1,P);
                                      };
                                      
     
     fclose(P);
     fclose(G);     
     
     remove("prob4.txt");
     rename("temporal.txt","prob4.txt");
     if(cont==0)
     {
              cout<<"no existe ese nombre\n";
                }
                else 
                {
                cout<<"fin de la modificacion\n";
                }
      system("pause");
     }    
void baja_logica()
{
     char nombre[30];
     char resp;
     
     P=fopen("prob4.txt","r+");
     
     if(P==NULL)
     {
       cout<<"el archivo no existe.\n";
       getch();
       exit(1);          
                }
     cout<<"nombre del obrero.\n";
     cin>>nombre;
     fread(&obrero,sizeof(obrero),1,P);
     while(!feof(P))
     {
           if(strcmp(obrero.nom,nombre)==0) 
           {
                  cout<<"nombre: "<<obrero.nom<<endl;
          cout<<"produccion por mes:\n";
          for(int i=0;i<meses;i++)
          {
          cout<<"mes ["<<i+1<<"] "<<obrero.produc[i]<<endl;
          }
          cout<<"promedio: "<<obrero.prom;
          
          strcpy(obrero.nom,"");                          
          for(int i=0;i<meses;i++)
          {
         obrero.produc[i]=0;
          }
          obrero.prom=0;
                                            
             do
             {
                    cout<<endl<<"esta seguro que desea eliminarlo[S/N].\n";
                    resp=toupper(getche());                        
                                            
             }while((resp!='S')&&(resp!='N'));
             
             if(resp=='S')
             {
                          fseek(P,ftell(P)-sizeof(obrero),SEEK_SET);
                          fwrite(&obrero,sizeof(obrero),1,P);
                          cout<<endl<<"registro eliminado.\n";
                          }
             
             fclose(P);
      cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
      getch();
      return;                               
                                            }        
                    
                    
                    fread(&obrero,sizeof(obrero),1,P);
                    
                    
                    
                    
                    
                    }
     
     cout << "\n\rNo se encuentra ese registro !!!";
  fclose(P);
  cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
  getch();
  return;
     
     
     
     
     
     }             
void baja_fisica()
{

		
   system("cls");

  cout << "\n\rBAJAS FISICAS DE REGISTROS DE PRODUCTOS";
  P=fopen("prob4.txt","r");
				     
  if(P==NULL)  
  {
    cout << "\n\n\n\rNo existe el archivo !!!";
    cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
    getch();
    return;
  }

  temporal=fopen("temporal.txt","w"); 
  fread(&obrero,sizeof(obrero),1,P);
     
  while(!feof(P)) 
  {
    if(strcmp(obrero.nom,"")!=0)
	 fwrite(&obrero,sizeof(obrero),1,temporal);
    fread(&obrero,sizeof(obrero),1,P);
  }
  fclose(P); 
  fclose(temporal);
  remove("prob4.txt"); 
  rename("temporal.txt","prob4.txt");
  cout << "\n\n\n\rArchivo compactado !!!";
  cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
  getch();
  return;
}
using namespace std;
int main()

{ system ("color 1a");
int op;
cargar();
do{
    system("cls");
op=menu();
cargar2();
         switch(op)
         {
            case 1:            crear();
                                 break;
            case 2:         ingresar();
                                 break;       
            case 3:          mostrar();
                                 break;              
            case 4:        modificar();
                                 break;  
            case 5:      baja_logica();
                                 break;
            case 6:      baja_fisica();
                                 break;
            case 0:              break;   
                   
                   
                   }
}while(op!=0);      
 cout<<"fin del programa.\n";
	system ("pause");

	return (0);
}
