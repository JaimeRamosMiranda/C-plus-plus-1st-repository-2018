#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <iomanip>
#define max 20
using namespace std;

struct dom
{char calle[10];
 int num;
 char ciud[10];
};

struct hospital
{int cod;
 char nom[20];
 int edad;
 char sexo;
 dom g;
 int seg;
};

int menu()
{int op;
	do{system("cls");
		cout<<"*******HOSPITAL FISI S.A.*******"<<endl;
		cout<<"=================================="<<endl;
		cout<<"[1]: captura de datos"<<endl;
		cout<<"[2]: Mostrar reporte desun formato"<<endl;
		cout<<"[3]: Busqueda  por nombre"<<endl;
		cout<<"[4]: Ordenar alfabeticamente"<<endl;
		cout<<"[5]: Modificar campos"<<endl;
		cout<<"[6]; Clcula porcentaje de los pacientes con seguro"<<endl;
		cout<<"[7]: Salir"<<endl;
		
		cout<<"Ingrese una opcion: [  ]\b\b\b ";
		cin>>op;
	}while(op<1 || op>7);
return op;
}

int busxcod ( hospital f[], int n, int dato)
{int i,pos;
 pos=-1;
	for(i=0;i<n;i++)
		if(f[i].cod==dato)
			{pos=i;
			 i=n;
			}
return pos;
}

int busxnom ( hospital f[], int n, char dato[])
{int i,pos;
 pos=-1;
	for(i=0;i<n;i++)
		if(strcmp(f[i].nom,dato)==0)
			{pos=i;
			 i=n;
			}
return pos;
}

char continuar(char m[])
{char r;
	do{cout<<m;
		cin>>r;
		r=toupper(r);
	}while(r!='S' && r!='N');
return r;
}

void leerdatos(hospital f[], int &n)
{int i,p;
  char resp;
	do{system("cls");
		cout<<"Ingrese datos del pasiente "<<n+1<<endl;
		cout<<"==================================="<<endl;
		cout<<"Codigo: ";
		cin>>f[n].cod;
		p=busxcod(f,n,f[n].cod);
		if(p==-1)
			{cout<<endl;
			 cout<<"Nombre: ";
			 fflush(stdin);
			 gets(f[n].nom);
			do{cout<<"Edad: ";
			   cin>>f[n].edad;
			  }while(f[n].edad<0);
			do{cout<<"Sexo (F/M)): ";
			   cin>>f[n].sexo;
			   f[n].sexo=toupper(f[n].sexo);
			  }while(f[n].sexo!='M' && f[n].sexo!='F');
			 cout<<"Domicilio"<<endl;
			 cout<<"\tcalle: ";
			 cin>>f[n].g.calle;
			 do{cout<<"\tnumero: ";
			   cin>>f[n].g.num;
			  }while(f[n].g.num<0);
			 cout<<"\tciudad: ";
			 cin>>f[n].g.ciud;
			 do{cout<<"Seguro: ";
			   cin>>f[n].seg;
			  }while(f[n].seg<0 || f[n].seg>1);
				n=n+1;
			}
		else
			cout<<"El paciente ya se encuentra registrado"<<endl;
			resp=continuar("Desea segir ingresando? (s/n)");
	}while(resp!='N');
}	

void mostrarrep(hospital f[], int n)
{int i;
	cout<<setw(10)<<"Codigo"<<setw(20)<<"Nombre"<<setw(5)<<"Edad"<<setw(5)<<"Sexo"<<setw(22)<<"Domicilio"<<setw(15)<<"seguro"<<endl;
	cout<<"\t\t\t\t\t"<<setw(10)<<"Calle"<<setw(8)<<"num"<<setw(10)<<"ciudad"<<endl;
	cout<<"=============================================================================="<<endl;
	for(i=0;i<n;i++)
		cout<<setw(10)<<f[i].cod<<setw(20)<<f[i].nom<<setw(5)<<f[i].edad<<setw(5)<<f[i].sexo<<setw(10)<<f[i].g.calle<<setw(8)<<f[i].g.num<<setw(10)<<f[i].g.ciud<<setw(5)<<f[i].seg<<endl;	
	getch();
}

void mostraruno(hospital f)
{cout<<"Datos del paciente: "<<endl;
 cout<<"==================================="<<endl;
 cout<<"Codigo: "<<f.cod<<endl;
 cout<<"Nonbre: "<<f.nom<<endl;
 cout<<"Edad: "<<f.edad<<endl;
 cout<<"Sexo: "<<f.sexo<<endl;
 cout<<"Domicilio: "<<endl;
 cout<<"\tCalle: "<<f.g.calle<<endl;
 cout<<"\tnumero: "<<f.g.num<<endl;
cout<<"\tCiudad: "<<f.g.ciud<<endl;
getch();
 
}

int buscarnom(hospital f[], int n)
{int i,pos;
 char resp,bus[20];
	do{system("cls");
		cout<<"Funcion busqueda"<<endl;
		cout<<"Ingrese nombre a buscar: ";
		fflush(stdin);
		gets(bus);
		pos=busxnom(f,n,bus);
		if(pos!=-1)
			mostraruno(f[pos]);
		else
			cout<<"El paciente no sta registrado"<<endl;
		resp=continuar("Desea seguir buscando? (s/n)");
	}while(resp!='N');	
}

void ordalf(hospital f[], int n)
{int i,j;
 hospital d;
		cout<<"Funcion ordenar"<<endl;
		for(i=0;i<n;i++)	
			for(j=i+1;j<n;j++)
				if(strcmp(f[i].nom,f[j].nom)>0)
					{d=f[i];
					 f[i]=f[j];
					 f[j]=d;
					}
	mostrarrep(f,n);
}

void modificar (hospital f[],int n)
{int i,op,bus,pos;
char resp;
		cout<<"Funcion modificar"<<endl;
		cout<<"Busque codigo del paciente a modificar: ";
		cin>>bus;
		pos=busxcod(f,n,bus);
		if(pos!=-1)
			do{system("cls");
			mostraruno(f[pos]);
			cout<<"modificar: [1].cod. [2].nombre. [3].edad. [4].sexo [5].domicilio [6].seguro [7].salir "<<endl;
			cin>>op;
			switch(op)
				{case 1:cout<<"Codigo: ";
			 			cin>>f[pos].nom; 
			 			break;
				 case 2:cout<<"Nombre: ";
			 			cin>>f[pos].nom; 
			 			break;
				 case 3: do{cout<<"Edad: ";
			   			cin>>f[pos].edad;
			  			 }while(f[pos].edad<0);
			  			 break;
			  	 case 4: do{cout<<"Sexo (F/M)): ";
						   cin>>f[pos].sexo;
						   f[pos].sexo=toupper(f[pos].sexo);
						  }while(f[pos].sexo!='M' && f[pos].sexo!='F');
			 			 break;
			 	 case 5: cout<<"Domicilio";
						 cout<<"\tcalle: ";
						 cin>>f[pos].g.calle;
						 do{cout<<"\tnumero: ";
						   cin>>f[pos].g.num;
						  }while(f[pos].g.num<0);
						 cout<<"\tciudad: ";
						 cin>>f[pos].g.ciud;
						 break;
				 case 6: do{cout<<"Seguro: ";
						    cin>>f[pos].seg;
						  }while(f[pos].seg<0 || f[pos].seg>1);
						  break;
				}
			}while(op!=7);
		else
			{cout<<"El paciente no sta registrado"<<endl;
			 getch();
			}
}

void paspor (hospital f[],int n)
{int i,m,por;
 m=0;
	for(i=0;i<n;i++)
		if(f[i].seg==1)
			m=m+1;
 por=(100*m)/n;
 cout<<"Porcentaje de pacientes con seguro es: "<<por<<" % "<<endl;
 getch();	
}

int main(){
hospital f[max];
int op,n;
	n=0;
	do{system("cls");
		op=menu();
		switch(op)
			{case 1: system("cls");
					 leerdatos(f,n);
					 break;
			 case 2: system("cls");
					mostrarrep(f,n);
					break;
			 case 3: system("cls");
			 		 buscarnom(f,n);
			 		 break;
			 case 4: system("cls");
			 		 ordalf(f,n);
			 		 break;
			 case 5: system("cls");
			 		 modificar(f,n);
			 		 break;
			 case 6: system("cls");
			 		 paspor(f,n);
			 		 break; 		 
			}
	}while(op!=7);
system("cls");
cout<<"FIN DEL PROGRAMA";
getch();
return 0;
}


