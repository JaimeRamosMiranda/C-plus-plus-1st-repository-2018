#include <iostream>
#include <conio.h>
#include <iomanip>

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
	for(i=0&&p==-1;i<n;i++)
	{
	if(alu[n].cod==codigo)
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
	int r,i;
	for(i=0;i<n;i++)
	{
	cout<<"Ingresar los datos del alumno: "<<i+1<<endl;
	cin>>alu[i].cod;
	
	r=buscarporcodigo(alu,n,alu[n].cod);
	if(r==-1)
	{
		cout<<"Ingresar el nombre del alumno :"<<i+1<<endl;
		gets(alu[i].nom);
		do{cout<<"Ingresar la mota del examen final";
		cin>>alu[i].ef;
		}while(alu[i].ef<0 || alu[i].ef>20);
	}
		
	}
}
int main()
{int opcion,n;
alumnos alu1[20];
	opcion=menu();
	switch(opcion)
	{
		case 1:
			ingresardatos(alu1,n);
			break;
	}
	alumnos al[max];
	int c;
	ingresardatos(al,c);
	getch();
	return 0;
}



