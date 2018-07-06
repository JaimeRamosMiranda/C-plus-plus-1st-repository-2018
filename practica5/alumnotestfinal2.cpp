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
	do
	{cout<<endl<<"\t\tMENU DE OPCIONES"<<endl;
	cout<<"\t\t=============="<<endl;
	cout<<"\t\t[1]: Leer datos"<<endl;
	cout<<"\t\t[2]: Mostrar datos"<<endl;
	cout<<"\t\t[3]: Buscar por codigo"<<endl;
	cout<<"\t\t[4]: Buscar por nombre"<<endl;
	cout<<"\t\t[5]: Ordenar alfabeticamente"<<endl;
	cout<<"\t\t[6]: Orden de merito"<<endl;
	cout<<"\t\t[7]: Modificar"<<endl;
	cout<<"\t\t[8]: Eliminar registro de alumno"<<endl;
	cout<<"\t\t[9]: Salir"<<endl;
	cout<<"Escoger una opcion [ ]"<<"\b\b";
	cin>>opc;
	}while(opc<1 || opc>9);
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

int buscarcodigo(alumno al[],int n,int codigo)
{int p,i;
	p=-1;
	for(i=0;i<n;i++)
	if(al[i].cod==codigo)
	p=i;
	return p;
}

int buscarnombre(alumno al[],int n, char busnom2[30])
{int i,b;
b=-1;
	for(i=0;i<n;i++)
	if(strcmp(al[i].nom,busnom2)==0)
	b=i;
	return b;
}

void ordenlab(float nlab[])
{int i,j;
float temp;
for(i=0;i<5;i++)
for(j=i+1;j<5;j++)
if(nlab[i]>nlab[j])
{temp=nlab[i];
nlab[i]=nlab[j];
nlab[j]=temp;
}

}

float promediolab()
{float nlab[5],prlab;
int i,s;
cout<<"ingresar las 5 notas de laboratorio: "<<endl;
for(i=0;i<5;i++)
	cin>>nlab[i];
	
	ordenlab(nlab);
	
	s=0;
	for(i=1;i<5;i++)
	s=s+nlab[i];
	
	prlab=s/4;
	return prlab;
}

void leer(alumno al[],int &n)
{int leerrep,c;
	do{
	cout<<"Ingresar el numero de codigo del alumno : "<<n+1<<endl;
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
	
   al[n].promlab=promediolab();
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
		{nomtemp=al[i];
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

void modificar(alumno al[],int n)
{float codigo;
int opmod,repmod,ind;
	cout<<"ingresar el codigo del alumno que quiere modificar datos"<<endl;
	cin>>codigo;
	ind=buscarcodigo(al,n,codigo);
	if(ind!=-1)
	{mostraruno(al[ind]);
		do{	cout<<"indicar el campo que desea modificar: "<<endl;
		cout<<"[1]codigo, [2]nombre, [3]examen parcial, [4]examen final, [5]promedio de practicas, [6]salir: "<<endl;
		cin>>opmod;
			switch(opmod)
			{
			case 1: cout<<"codigo"<<endl;
					cin>>al[ind].cod; break;
			case 2: cout<<"nombre"<<endl;
					cin>>al[ind].nom; break;
			case 3: cout<<"examen parcial"<<endl;
					cin>>al[ind].examparc; break;
			case 4:cout<<"examen final"<<endl;
					cin>>al[ind].examfin; break;
			case 5:cout<<"promedio de practicas"<<endl;
					cin>>al[ind].promprac; break;   		 		 	    
			}
		}while(opmod!=6);
	
	al[ind].promfin=(al[ind].examparc+al[ind].examfin+al[ind].promprac+al[ind].promlab)/4;
	
	if(al[ind].promfin>10.5)
	strcpy(al[ind].obs,"aprobado");
	else
    strcpy(al[ind].obs,"desapronado");
}
else
cout<<"el codigo no existe"<<endl;
}

void eliminar(alumno al[],int &n)
{int codelim,e,confelim,respelim,i;
	do
	{cout<<"ingrese el codigo del registro a eliminar"<<endl;
	cin>>codelim;
	e=buscarcodigo(al,n,codelim);
	if(e!=-1)
	{mostraruno(al[e]);
		cout<<"confirmar eliminacion (1)Si /(0)No"<<endl;
		cin>>confelim;
		if(confelim==1)
		{
       		for(i=e;i<n-1;i++)
      		al[i]=al[i+1];
       
       		n=n-1;		
		}
	}
	else
	cout<<"el codigo no existe"<<endl;
	
	
		cout<<"desea eliminar otro registro (1)Si / (0)No? "<<endl;
		cin>>respelim;
	
	}while(respelim==1);
	
}

int main()
{int opc1,cod2,ind,ind2;
char busnom[30];
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
		if(ind>=0)
			mostraruno(alum[ind]);
		else
			cout<<"el codigo buscado no esta registrado"<<endl;
		break;
	case 4: 
		cout<<"Ingresar el nombre a buscar"<<endl;
		fflush(stdin);
		gets(busnom);
		ind2=buscarnombre(alum,n,busnom);
		if(ind2>=0)
			mostraruno(alum[ind2]);
		else
			cout<<"el nombre ingresado no esta registrado"<<endl;	
		break;
	case 5:	ordenaralf(alum,n); break;
	case 6: ordenmerito(alum,n);break;
	case 7: modificar(alum,n); break;
	case 8: eliminar(alum,n); break;
	case 9: system ("cls");
               cout<<"********* Gracias ***********"<<endl;
               getch();break;
	}
	
	}while(opc1!=9);
	
	getch ();
	return 0;
}
