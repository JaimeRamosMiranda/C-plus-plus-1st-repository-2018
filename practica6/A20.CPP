#include<iostream.h>
 #include<string.h>
 #include<conio.h>
 #include<stdio.h>
 #include<windows.h>
 #include<iomanip.h>
 struct alum
 {
 int cod;
 char nom[20];
 int au;
 int gra;
 char tur;
 };
void cargar()
{
 cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\tPresiona [Enter]\n";
 cout<<"\t\t\t\t様様様様様様様�\n";getch();
 cout<<"\t\t\t\t";
 for(int i=0;i<14;i++)
   {Sleep(100);
    cout<<"�";
   }
system("cls"); 
}
void cargar2()
{
 cout<<"n\n\t\t\t       Loading...\n";
 cout<<"\t\t\t    様様様様様様様�\n";
 cout<<"\t\t\t    ";
 for(int i=0;i<14;i++)
   {Sleep(100);
    cout<<"�";
   }
system("cls"); 
}
int men()//********************************
 {int op;
 do{system("cls");system("color 9f");
  cout<<"\n\n\n\t\t\t    浜様様様様様様融"<<endl;
  cout<<"\t\t\t    �MENU PRINCIPAL�"<<endl;
  cout<<"\t\t\t浜様瞥様様様様様様擁様�"<<endl;
  cout<<"\t\t\t�1.INGRESO DE ALUMNOS �"<<endl;
  cout<<"\t\t\t麺様様様様様様様様様様�"<<endl;
  cout<<"\t\t\t�2.LISTADO GENERAL    �"<<endl;
  cout<<"\t\t\t麺様様様様様様様様様様�"<<endl;
  cout<<"\t\t\t�3.BUSCAR POR CODIGO  �"<<endl;
  cout<<"\t\t\t麺様様様様様様様様様様�"<<endl;
  cout<<"\t\t\t�4.BUSCAR POR NOMBRE  �"<<endl;
  cout<<"\t\t\t麺様様様様様様様様様様�"<<endl;
  cout<<"\t\t\t�5.SALIR              �"<<endl;
  cout<<"\t\t\t藩様様様様様様様様様様�"<<endl;
  cout<<"\n\t\t\tIngrese la opcion:";cin>>op;cin.ignore();
  return op;}while(op<0||op>5);
  }
 void ing()//****************
{system("cls");system("color 0f");
 FILE *f;
 alum r;
 //duplicados
 int codb;
 f=fopen("H:\\algo.txt","a+");
if(f==NULL)
   { cout<<"\t\t\tError al intentar abrir el archivo\n";
     getche();
     exit(1);
     }  

 cout<<"\n Ingrese el codigo a registrar ==> ";
 cin>>codb;
 fread(&r,sizeof(r),1,f);
    while(!feof(f))
       {if(r.cod==codb)
          {cout<<" eL CODIGO YA ESTA REGISTRADO DUPLICADO   ...";
           getche();
           return;
           }
         fread(&r,sizeof(r),1,f);  
         }   
   
 //fin duplicados
//cout<<"\n\n\t\t\tCodigo:";cin>>r.cod;
cin.ignore();
r.cod=codb;
 cout<<"\t\t\tNombre:";cin.getline(r.nom,20);
 cout<<"\t\t\tAula:";cin>>r.au;
 do{cout<<"\t\t\tCiclo:";cin>>r.gra;}while(r.gra<0||r.gra>10);
do{ cout<<"\t\t\tTurno:";
   r.tur=toupper(getche());}while(r.tur!='M'&&r.tur!='T'&&r.tur!='N');

   fwrite(&r,sizeof(r),1,f);
    cout<<"\n\t\t\tAlumno Registrado con exito";
   
fclose(f);
getch();
}
void mos()//********************************
{system("cls");system("color bc");
 FILE *f;
 alum r;
 cout<<"\n"<<setiosflags(ios::left)<<setw(10)<<"CODIGO"<<setw(20)<<"NOMBRE"<<setw(5)<<"AULA"<<setw(6)<<"CICLO"<<setw(6)<<"TURNO"<<endl;
 cout<<setiosflags(ios::left)<<setw(10)<<"様様様"<<setw(20)<<"様様様"<<setw(5)<<"様様"<<setw(6)<<"様様�"<<setw(6)<<"様様�"<<endl;
f=fopen("H:\\algo.txt","r");
if(f==NULL)
   cout<<"\t\t\tEl archivo no existe\n";
else
   {fread(&r,sizeof(r),1,f);
    while(!feof(f))
       {cout<<setw(10)<<r.cod<<setw(20)<<r.nom<<setw(5)<<r.au<<setw(6)<<r.gra<<setw(6)<<r.tur<<endl;
        fread(&r,sizeof(r),1,f);
       }
    fclose(f);
   }

getch();
}
void concod()//***********************
{system("cls");system("color 0f");
 FILE *f;
 alum r;
 int codbus,i=0;
 cout<<"\n\n\tIngrese el codigo a buscar:";cin>>codbus;cin.ignore();
 cout<<endl;
 f=fopen("H:\\algo.txt","r");
if(f==NULL)
   cout<<"\t\t\tEl archivo no existe\n";
else
   {cout<<setw(10)<<"CODIGO"<<setw(20)<<"NOMBRE"<<setw(5)<<"AULA"<<setw(6)<<"CICLO"<<setw(6)<<"TURNO"<<endl;
    cout<<setw(10)<<"様様様"<<setw(20)<<"様様様"<<setw(5)<<"様様"<<setw(6)<<"様様�"<<setw(6)<<"様様�"<<endl;
    fread(&r,sizeof(r),1,f);
    while(!feof(f))
       {if(r.cod==codbus)
          {i++;
           cout<<setw(10)<<r.cod<<setw(20)<<r.nom<<setw(5)<<r.au<<setw(6)<<r.gra<<setw(6)<<r.tur<<endl;
          }
        fread(&r,sizeof(r),1,f);
       }
    fclose(f);
    if(i==0)
       cout<<"\n\nEl codigo no existe\n";
    else
       cout<<"\n\nSe encontro "<<i<<" Alumno(s)\n";
   }
getch();
}

void connom()//***********************
{system("cls");system("color 0f");
 FILE *f;
 alum r;
 char nombus[20];
 int i=0;
 cout<<"\n\n\tIngrese el nombre a buscar:";cin.getline(nombus,20);
 cout<<endl;
 f=fopen("H:\\algo.txt","r");
if(f==NULL)
   cout<<"\n\n\t\t\tEl archivo no existe\n";
else
   {cout<<setw(10)<<"CODIGO"<<setw(20)<<"NOMBRE"<<setw(5)<<"AULA"<<setw(6)<<"CICLO"<<setw(6)<<"TURNO"<<endl;
    cout<<setw(10)<<"様様様"<<setw(20)<<"様様様"<<setw(5)<<"様様"<<setw(6)<<"様様�"<<setw(6)<<"様様�"<<endl;
    fread(&r,sizeof(r),1,f);
    while(!feof(f))
       {if(strcmp(r.nom,nombus)==0)
          {i++;
           cout<<setw(10)<<r.cod<<setw(20)<<r.nom<<setw(5)<<r.au<<setw(6)<<r.gra<<setw(6)<<r.tur<<endl;
          }
        fread(&r,sizeof(r),1,f);
       }
    fclose(f);
    if(i==0)
       cout<<"\n\nEl nombre no existe\n";
    else
       cout<<"\n\nSe encontro "<<i<<" Alumno(s)\n";
   }
getch();
}
int main(){
    
    int op;
    cargar();
    do{op=men();
    cargar2();
       switch(op)
          {case 1:ing();getch();break;
           case 2:mos();getch();break;
           case 3:concod();getch();break;
           case 4:connom();getch();break;
          }
          }while(op!=5);
    
    return 0;
          }
    
