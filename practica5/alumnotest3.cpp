#include <iostream>
#include <conio.h>
#include <string.h>
#include <iomanip>
using namespace std;

struct alumno
{
	int cod;
	char nom[30];
	float examparc,examfin,promprac,promlab,promfin;
	char obs[30];
};

int menu()
{int opc;	
	cout<<endl<<"\t\tMENU DE OPCIONES"<<endl;
	cout<<"\t\t=============="<<endl;
	cout<<"\t\t[1]: Leer datos"<<endl;
	cout<<"\t\t[2]: Mostrar datos"<<endl;
	cout<<"\t\t[3]: Buscar por codigo"<<endl;
	cout<<"\t\t[4]: Ordenar alfabeticamente"<<endl;
	cout<<"\t\t[5]: Orden de merito"<<endl;
	cout<<"\t\t[6]: Salir"<<endl;
	cout<<"Escoger una opcion [ ]"<<"\b\b";
	cin>>opc;
	return opc;
};

void mostraruno(alumno al)
{
	cout<<"Datos del alumno"<<endl;
	cout<<"Codigo: "<<al.cod<<endl;
	cout<<"Nombre: "<<al.nom<<endl;
	cout<<"Examen final: "<<al.examfin<<endl;
	cout<<"Examen parcial: "<<al.examparc<<endl;
	cout<<"Promedio de practicas: "<<al.promprac<<endl;
	cout<<"Promedio de laboratorio: "<<al.promlab<<endl;
	cout<<"Promedio final: "<<al.promfin<<endl;
	cout<<"Observacion: "<<al.obs<<endl;
}

//void leer(al,n);
//void mostrar(al,n);
//int buscarcodigo(al,n,codigo);

int buscarcodigo(alumno al[],int n,int codigo)
{int p,i;
	p=-1;
	for(i=0;i<n;i++)
	if(al[i].cod==codigo)
	p=i;
	return p;
}


void leer(alumno al[],int &n)
{int leerrep,c;
	do{
	cout<<"Ingresar el codigo del alumno : "<<n+1<<endl;
	cin>>al[n].cod;
	c=buscarcodigo(al,n,al[n].cod);
	
	if(c==-1)
	{
	cout<<"Ingresar el nombre del alumno :"<<n+1<<endl;
	fflush(stdin);
	gets(al[n].nom);
	
	do
	{cout<<"Ingresar la nota del examen parcial del alumno :"<<n+1<<endl;
	cin>>al[n].examparc;
	}while(al[n].examparc<0 || al[n].examparc>20);
	
	do
	{cout<<"Ingresar la nota del examen final del alumno :"<<n+1<<endl;
	cin>>al[n].examfin;
	}while(al[n].examfin<0 || al[n].examfin>20);
	
	do
	{cout<<"Ingresar la nota del promedio de practicas del alumno :"<<n+1<<endl;
	cin>>al[n].promprac;
	}while(al[n].promprac<0 || al[n].promprac>20);
	
	do
	{cout<<"Ingresar la nota del promedio de laboratorio del alumno :"<<n+1<<endl;
	cin>>al[n].promlab;
	}while(al[n].promlab<0 || al[n].promlab>20);

	al[n].promfin=(al[n].examparc+al[n].examfin+al[n].promprac+al[n].promlab)/4;
	
	if(al[n].promfin>10.5)
	strcpy(al[n].obs,"aprobado");
	else
	strcpy(al[n].obs,"desaprobado");
	
	n=n+1;
	}
	
	else
	cout<<"El codigo ya fue ingresado"<<endl;
	
	cout<<"Desea ingresar los datos de otro alumno?(1)Si / (0)No:"<<endl;
	cin>>leerrep;
	}while(leerrep==1);
	
}


void mostrar(alumno al[],int n)
{int i;
	cout<<"Orden"<<setw(10)<<"codigo"<<setw(20)<<"nombre"<<setw(20)<<"promedio final"<<setw(20)<<"observacion"<<endl;
	for(i=0;i<n;i++)
	cout<<i+1<<setw(10)<<al[i].cod<<setw(20)<<al[i].nom<<setw(20)<<al[i].promfin<<setw(20)<<al[i].obs<<endl;
}

void ordenaralf(alumno al[],int n)
{int i,j;
alumno nomtemp;
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	if(strcmp(al[i].nom,al[j].nom)>0)
		{nomtemp,al[i];
		al[i]=al[j];
		al[j]=nomtemp;
		}
}

void ordenmerito(alumno al[],int n)
{int i,j;
alumno pftemp;
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	if(al[i].promfin<al[j].promfin)
	{pftemp=al[i];
	al[i]=al[j];
	al[j]=pftemp;
	}
}

int main()
{int opc1,cod2,ind;
	alumno alum[30];
	int n;
	n=0;
	do{
	opc1=menu();
	switch(opc1)
	{
	case 1: leer(alum,n); break;
	case 2: mostrar(alum,n); break;
	case 3:
		cout<<"Ingresar el codigo a buscar"<<endl;
		cin>>cod2;
		ind=buscarcodigo(alum,n,cod2);
		mostraruno(alum[ind]);
		break;
	case 4:	ordenaralf(alum,n); break;
	case 5: ordenmerito(alum,n);break;
	}
	
	}while(opc1!=6);
	
	getch ();
	return 0;
}
