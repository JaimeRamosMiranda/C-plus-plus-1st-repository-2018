#include <iostream>
#include <iomanip> //setw()
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
using namespace std;
#define max 10
int codigo;
struct empleado
{int cod;
 char nom[20];
 char dep[20];
 int niv;
 float sue;
 };

//0 menu
int menu()
 {int op;
  cout<<"\t\t\t MENU DE OPCIONES"<<endl;
  cout<<"\t\t[1] Carga Datos "<<endl;
  cout<<"\t\t[2] Mostrar Datos "<<endl;
  cout<<"\t\t[3] Total Nomina "<<endl;
  cout<<"\t\t[4] Mostrar por Departamento "<<endl;
  cout<<"\t\t[5] Busca por codig "<<endl;
  cout<<"\t\t[6] Busca por nombre "<<endl;
  cout<<"\t\t[7] Modificar "<<endl;
  cout<<"\t\t[8] Ordena Alfabetico "<<endl;
  cout<<"\t\t[9] Ordena por codigo "<<endl;
  cout<<"\t\t[10] Eliminacion "<<endl;
  cout<<"\t\t[11] Salir "<<endl;
  do
   {cout<<"Ingrese una opcion : ===>";
    cin>>op;
}while(op<1 || op >11);
return op;
}

//5 buscar por codigo
int buscarxcodigo(empleado fijo[],int n,int codigo)
 {int p,i;
  p=-1;//interruptor p
  for(i=0;i<n;i++)//bucle para comparar el valor ingresado en fijo[ ].cod con el codigo
  					//codigo recoge el valor ingresado en //1 cargar, codigo = fijo[].cod
  					//para el primer codigo codigo = fijo[0].cod, porque n=0;
  					//como el bucle es for(i=0;i<0;i++) no se ejecuta para el primer valor
  					//para el siguiente n=1 sera for(i=0;i<1;i++), se compara for[1].cod con codigo=for[0].cod
  					//para los siguientes se comparara for[i].cod con los anteriores hasta i<n
      if(fijo[i].cod==codigo)
         p = i;// si se encuentra algun valor del array fijo[i].cod que coincida con el valor ingresado codigo=for[n].cod, se regresa un p diferente a -1
      return p;
} 

//6 buscar por nombre
int buscarxnombre(empleado fijo[],int n,char nomb[30])
 {int p,i;
  p=-1;
  for(i=0;i<n;i++)
   if(strcmp(fijo[i].nom,nomb)==0)
         p = i;
      return p;
} 

//1 cargar                 
void cargar(empleado fijo[],int &n)//se envio el array per y el tamaño n; se usa & antes de n para evitar duplicidad, se evitara la duplicidad de codigo
{int p,rep;//indica el resultado de buscar por codigo, rep indica si se repite o no el bucle
        for(;;)//toda la funcion es un bucle, que pregunta al final si desea ingresar otro empleado para volver a iniciar el bucle
          {system("cls");
           cout<<"Ingreso de datos"<<endl<<endl;
           cout<<"Codigo : ";
           cin>>fijo[n].cod;// se ingresa el array de la funcion "fijo" de indice [n] para el campo .cod de la estructura empleado
          					// se ingreso el valor de fijo[0].cod para el primero n=0, al final del bucle n=n+1
           p=buscarxcodigo(fijo,n,fijo[n].cod); //se usa la funcion 5 buscar por codigo si p== -1 el codigo no esta repetido
           										//se usa 3 argumentos: array fijo, tamaño [n], valor de fijo[0].cod para el primero
           										//luego se ingresara  array fijo, tamaño [n], valor de fijo[1].cod para el siguiemte luego n=n+1
            if(p==-1)// si p== -1 el codigo no esta repetido, si p=i i=0,1,2,... el codigo esta repetido: ya existe
             {cout<<"Nombre : ";
              
              fflush(stdin);//se limpia el buffer
              gets(fijo[n].nom);//se ingresa el la variable fijo con indice [n], para el primero sera n=0; para el campor .nom de la estructura
              cout<<"Departamento;  ";
              fflush(stdin);//se limpia el buffer
              gets(fijo[n].dep);//se ingresa el la variable fijo con indice [n], para el primero sera n=0; para el campor .dep de la estructura
               do
                { cout<<"Nivel;  ";
                  cin>>fijo[n].niv;//se ingresa el la variable fijo con indice [n], para el primero sera n=0; para el campor .niv de la estructura
                }while(fijo[n].niv<1 || fijo[n].niv >5);//se consistencia
              do
               { cout<<"Sueldo;  ";
                cin>>fijo[n].sue;//se ingresa el la variable fijo con indice [n], para el primero sera n=0; para el campor .sue de la estructura
               }while(fijo[n].sue <0); //se consistencia
               n=n+1;// en Principal se declaro n=0
          }
           else
                cout<<"­­ El codigo ya existe !!"<<endl;
          cout<<"Deseas ingresar otro empleado (1/0) "<<endl;
          cin>>rep;//toda la funcion es un bucle, que pregunta al final si desea ingresar otro empleado para volver a iniciar el bucle
          if(rep==0) break;      //se termina el bucle
       }       
}

//2 mostrar
void mostrar(empleado fijo[],int n)//se envio el array per y el tamaño n, en este caso no es necesario usar & antes de n
									//el valor de n aqui es el ultimo valor que tomó en la funcion 1 cargar, donde n=n+1
{int i;//i es el contador para le bucle
system("cls");
//titulo
cout<<"           LISTADO DE EMPLEADOS "<<endl;
cout<<"           ==================== "<<endl;
  cout<<setw(8)<<"ORDEN"<<setw(8)<<"CODIGO "<<setw(25)<<"  NOMBRES"<<setw(20)<<" DEPARTAMENTO"<<setw(10)<<"NIVEL"<<setw(10)<<"SUELDO"<<endl;
  for(i=0;i<n;i++)
     cout<<setw(8)<<i+1<<setw(8)<<fijo[i].cod<<setw(25)<<fijo[i].nom<<setw(20)<<fijo[i].dep<<setw(10)<<fijo[i].niv<<setw(10)<<fijo[i].sue<<endl;
	//se muestran todos los valores que se ingresó en 1 cargar con los indices i=0 hasta i<n, para cada campo de la estructura
}

void mostraruno(empleado f)
  {cout<<"Datos del Empleado"<<endl;
   cout<<"codigo : "<<f.cod<<endl;
   cout<<"nombre : "<<f.nom<<endl;
   cout<<"depend : "<<f.dep<<endl;
   cout<<"nivel  : "<<f.niv<<endl;
   cout<<"sueldo : "<<f.sue<<endl;
   }

//3 totalnomina
float totalnomina(empleado fijo[],int n)//se envio el array per y el tamaño n, en este caso no es necesario usar & antes de n
										//el valor de n aqui es el ultimo valor que tomó en la funcion 1 cargar, donde n=n+1
{int i;
system("cls");
 float total;//contador 
  total = 0;
   for(i=0;i<n;i++)//se suman todos los valores de la variable fijo del campo sue
       total = total + fijo[i].sue;
   return total;
}

//4 mostrar por departamento
void mostrarXdep(empleado fijo[],char d[],int n)//4 mostrar por departamento, 3 argumentos, array per, cadena depa, 
		 										//tamaño tamaño del array n toma el valor final de cargar: n=n+1
  {int i;
       for(i=0;i<n;i++)   
       if(strcmp(fijo[i].dep,d)==0)//strcmp compara cada valor de fijo[i].dep, con d :cadena depa; si la comparacion es 0 (verdad), se procede
          {cout<<"Nombre : "<<fijo[i].nom<<endl;//se imprimen todos los registros que coinciden con la busqueda
          cout<<"Sueldo : "<<fijo[i].sue<<endl;
          
          }
  } 
          

//7 modificacion
 void modificacion(empleado fijo[], int n)
  {int p,resp,op;
   int codigo;
   empleado f;
    do
      {system("cls");
       cout<<"Modificacion de Datos"<<endl<<endl;
       cout<<"Codigo a buscar : ";
       cin>>codigo;
       p=buscarxcodigo(fijo,n,codigo);
       if(p!=-1)
        {mostraruno(fijo[p]);
         do
        {cout<<"Que campos desea Modificar "<<endl;
        cout<<"[1] Codigo [2] nombre [3] dpto [4] nivel [5] sueldo [6] salir"<<endl;
        cout<<"Ingrese opcion (1-6)";
        cin>>op;
        switch(op)
          {case 1 : cout<<"Nuevo codigo :";
           cin>>fijo[p].cod; break;
           case 2 : cout<<"Nuevo nombre :";
           fflush(stdin);
           gets(fijo[p].nom); break;
           case 3 :
                  
                   cout<<"Nuevo departamento :";
                    fflush(stdin);
                       gets(fijo[p].dep); break;
                  
                    
           case 4 :
                  do
                   {cout<<"Nuevo nivel : ";
                     cin>>fijo[p].niv;
                     }while(fijo[p].niv<=0||fijo[p].niv>5);break;
              
           case 5 :
                  do
                   {cout<<"Nuevo sueldo : ";
                     cin>>fijo[p].sue;
                     }while(fijo[p].sue<=0);break;
         }    
        }while(op!=6);
   }
        else
         cout<<"el codigo del producto no existe"<<endl;
         cout<<"Deseas modificar otro producto(1/0) ";
         cin>>resp;
      }while(resp==1);
 } 

//8 ordena alfabetico
void ordenaalfabetico(empleado fijo[],int n)
   {int i,j;
    empleado t;
    for(i=0;i<n;i++)
       for(j=i+1;j<n;j++)
        if(strcmp(fijo[i].nom,fijo[j].nom)>0)
          {t=fijo[i];
           fijo[i]=fijo[j];
           fijo[j]=t;
           }
} 

//9 ordena por codigo
void ordenaxcodigo(empleado fijo[],int n)
   {int i,j;
    empleado t;
    for(i=0;i<n;i++)
       for(j=i+1;j<n;j++)
        if(fijo[i].cod>fijo[j].cod)
          {t=fijo[i];
           fijo[i]=fijo[j];
           fijo[j]=t;
           }
}   

//10 eliminacion
void eliminacion(empleado fijo[], int &n)
{int i,p;
  int codigo;
      char resp,preg;
      do 
       {system("cls");
        cout<<"Eliminacion de un registro "<<endl<<endl;
        cout<<"Codigo a buscar : ";
        cin>>codigo;
        p=buscarxcodigo(fijo,n,codigo);
        if(p!=-1)
          {mostraruno(fijo[p]);
           cout<<"Estas seguro de eliminarlo (s/n) :";
           cin>>preg;
           preg=toupper(preg);
           if(preg=='S')
             {for(i=p;i<n-1;i++)
                 fijo[i]=fijo[i+1];
                  n=n-1;
              }
           }
          else
           cout<<"el codigo del producto no existe"<<endl;
           cout<<"Deseas eliminar otro producto(s/n) ";
           cin>>resp;
           resp=toupper(resp);
       }while(resp=='S');
  }       
  
//Principal 
int main()
{empleado per[max];//variable tipo empleado, array per 
char depa[20],nb[max];//depa para ingresar el departamento a buscar case 4; nb para ingresar el nombre a buscar case 6
 int n,opcion,pos;//n tamaño del array per, opcion para capturar el resultado de menu, pos indice para usar la funcion mostrar uno
 n=0;   //se inicia n=0
 float total;

  do//se hace un do while para ingresar al menu y luego de hacer la seleccion regresar al menu hasta ingresar 11 = salir
    {system("cls");
     opcion=menu(); //0 menu
     switch(opcion) //0 menu tiene opciones del 1 al 11
     {case 1: cargar(per,n);break; //1 cargar usando 2 argumentos: array per, tamaño del array n=0
      case 2: mostrar(per,n);break; //2 mostrar tiene los mismos 2 argumentos array per, tamaño del array n toma el valor final de cargar: n=n+1
	  								// ya se tiene los valores cargados 
      case 3: total=totalnomina(per,n);//3 totalnomina tiene 2 argumentos array per, tamaño del array n toma el valor final de cargar: n=n+1
      cout<<"TOTAL NOMINA : "<<total<<" Nuevos Soles"<<endl;
     
     break;
      case 4: system("cls");
      cout<<"Ingrese el departamento que desea mostrar "<<endl;
      fflush(stdin);
       gets(depa);//se definio la variable depa [20] en main
        cout<<"Personal del Departamento de : "<<depa<<endl;
         mostrarXdep(per,depa,n);system("pause");break;//4 mostrar por departamento, 3 argumentos, array per, cadena depa, 
		 												//tamaño tamaño del array n toma el valor final de cargar: n=n+1
        case 5:system("cls"); 
          cout<<"Ingrese el codigo a buscar "<<endl;
          cin>>codigo;//se ingresa 
          pos=buscarxcodigo(per,n,codigo);
        if(pos>=0)
           mostraruno(per[pos]);
        else    
           cout<<"el codigo del producto no existe"<<endl; 
           break; 
 case 6: system("cls");
        
          cout<<"Ingrese el nombre a buscar "<<endl;
          fflush(stdin);
          gets(nb);
        pos=buscarxnombre(per,n,nb);
        if(pos>=0)
           mostraruno(per[pos]);
        else    
           cout<<"el codigo del producto no existe"<<endl; 
           break; 
 case 7 : modificacion(per,n);
     
         break;           
 case 8:ordenaalfabetico(per,n);break; 
 case 9:ordenaxcodigo(per,n);break;
 case 10:eliminacion(per,n);break;           
  
    }
    getche();
}while(opcion !=11);
 system("cls");
 cout<<"************FIN PROCESO ***************"<<endl;
 
 system("pause");
 return 0;
 }
