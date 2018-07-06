#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string.h>

using namespace std;
#define max 30

struct alumnos{
	int	cod;
	char nom[20];
	float ef, ep, pp, pl, pf;
	char obs[20];
};

int buscarporcodigo(alumnos alu[], int n,int codigo)
{int p,i;
	p=-1;
	for(i=0;i<n&&p==-1;i++)
	{
	if(alu[i].cod==codigo)
	p=i;
	}
	return p;
}

int menu()
{int op;
cout<<"\t\t\t MENU DE OPCIONES"<<endl;
  cout<<"\t\t[1] Carga Datos "<<endl;
  cout<<"\t\t[2] Mostrar Datos"<<endl;
  cout<<"\t\t[3] Busca por nombre "<<endl; 
  cout<<"\t\t[4] Busca por codig "<<endl;
  cout<<"\t\t[5] Ordena Alfabetico "<<endl;
  cout<<"\t\t[6] Ordena numerico "<<endl;
  cout<<"\t\t[7] Modificar "<<endl;
  cout<<"\t\t[8] Salir "<<endl;
  do
   {cout<<"Ingrese una opcion : ===>";
    cin>>op;
}while(op<1 || op >8);
return op;
}

void ingresardatos(alumnos alu[],int &n)
{
	int p,r,codigo;
	r=1;
	do
	{	cout<<"Ingrese codigo del alumno: "<<n+1<<endl;
		cin>>alu[n].cod;
	p=buscarporcodigo(alu,n,alu[n].cod);
	if(p==-1)
	{
	do{cout<<"examen final"<<endl;
	cin>>alu[n].ef;	
	}while(alu[n].ef<0 ||alu[n].ef>20);
	
	do{cout<<"examen parcial"<<endl;
	cin>>alu[n].ep;	
	}while(alu[n].ep<0 ||alu[n].ep>20);
	
	do{cout<<"promedio practicas"<<endl;
	cin>>alu[n].pp;	
	}while(alu[n].pp<0 ||alu[n].pp>20);
	
	do{cout<<"promedio laboratorio"<<endl;
	cin>>alu[n].pl;	
	}while(alu[n].pl<0 ||alu[n].pl>20);
	
	cout<<"promedio final"<<endl;
	alu[n].pf=(alu[n].ef+alu[n].ep+alu[n].pp+alu[n].pl)/4;
	cout<<alu[n].pf<<endl;
	
	if(alu[n].pf>10.5)
	strcpy(alu[n].obs,"aprobado");
	else
	strcpy(alu[n].obs,"desaprobado");
	n=n+1;
	}
	
	
	else
		{cout<<"el codigo ya existe"<<endl;}
	
	cout<<"Deseas ingresar otro alumno (1/0) "<<endl;
    cin>>r;
    }while(r==1);
    if(r!=1)
    menu();
}

void mostrar(alumnos alu[],int n)
{int i;
system("cls");
cout<<"           LISTADO DE ALUMNOS "<<endl;
cout<<"           ==================== "<<endl;
  cout<<setw(8)<<"ORDEN"<<setw(8)<<"CODIGO "<<setw(25)<<"  NOMBRES"<<setw(20)<<"EXAMEN FINAL"<<setw(10)<<"EXAMEN PARCIAL"<<setw(10)<<"PROMEDIO PRACTICAS"<<setw(10)<<"PROMEDIO LABORATORIO"<<"PROMEDIO FINAL"<<"OBSERVACION"<<endl;
  for(i=0;i<n;i++)
     cout<<setw(8)<<i+1<<setw(8)<<alu[i].cod<<setw(25)<<alu[i].nom<<setw(20)<<alu[i].ef<<setw(10)<<alu[i].ep<<setw(10)<<alu[i].pp<<setw(10)<<alu[i].pl<<setw(10)<<alu[i].pf<<setw(10)<<alu[i].obs<<endl;

}

int main()
{int opcion,n=0;
alumnos alu1[20];
	do{
	opcion=menu();
	switch(opcion)
	{
		case 1:
			ingresardatos(alu1,n);
			break;
			
		case 2:
			mostrar(alu1,n);
			break;
	}
	
}while(opcion<1 || opcion>8);
	

	getch();
	return 0;
}



