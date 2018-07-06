#include <iostream>
#include <conio.h>
using namespace std;

void leer(int cand[],int n)
{
	int i,j;
	for(i=1;i<=12;i++)
	{
		cout<<"Ingresar el numero de votos del candidato "<<i<<":"<<endl;
		for(j=1;j<=n;j++)
		cin>>cand[j];
	}
}

void suma(int vot[], int n)
{	
	int i,j,sum;
	sum=0;
	for(i=1;i<=12;i++)
		for(j=1;j<=n;j++)
		{sum=sum+vot[j];
		cout<<"El total de votos del candidato : "<<i<<" es "<<sum<<endl;
		}
}
/*
void ganador(int n)
{
	votacion cand[30];
	int i,j;

for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		if(cand[j].votos>cand[i].votos)
		{maxc=lib[j].cantidad;
		
		}
	}
	cout<<"La cantidad maxima es : "<<maxcant<<" libro(s) en "<<maxarea<<endl;
    
}*/

int main()
{	int candidato[30];
	int votos[30];
	int nvot;
	do{
	cout<<"Ingresar el numero de votos que tendra cada candidato :"<<endl;
	cin>>nvot;
	}while(nvot<0);
	leer(candidato,nvot);
	suma(votos,nvot);
	
	/*int votos[];
	for(i=1;i<=12;i++)
	cout<<"Ingrese el número de votos del candidato : "<<i<<endl;
	for(j=1;j<=13;j++)
	cin>>votos[i];
*/
}


/*
int main(void){
	//declaracion de variables
	int candid[12]={1,2,3,4,5,6,7,8,9,10,11,12};
	int voto[14]={1,5,7,5,1,12,10,7,1,7,5,8,5,-1};
	int cantVotos[12];
	int canGanador;
	int mayor=0;
	double porcentaje;
	
	//siempre se llena un array cuando se utiliza para contar ya que los array tiene almacenado algunos numeros y puede alterar el resultado
	for(int i=0;i<12;i++){
		cantVotos[i]=0;
	}
	
	//for para contar la cantidad de votos
	for(int i=0;i<12;i++){
		for(int j=0;j<14;j++){
			if(candid[i]==voto[j]){
				cantVotos[i]++;
			}
		}
	}
	
	//se muestra los datos
	cout<<"         numero de votos de cada candidato"<<endl;
	for(int i=0;i<12;i++){
		cout<<"Candidato "<<i+1<<" : "<<cantVotos[i]<<endl;
	}
	
	//forpara halar el ganador y con cuantos votos
	for(int i=0;i<12;i++){
		
		if(cantVotos[i]>mayor){
			mayor=cantVotos[i];
			canGanador=candid[i];
		}	
	}
	
	//para calcular elporcentaje de votos
	porcentaje=(1.0*mayor*100)/12;
	
	//imprimir en pantalla
	cout<<endl<<"el candidato ganador es "<<canGanador<<" con un total de "<<mayor<<" votos y con un porcentaje de "<<porcentaje<<"%"<<endl;
}*/
