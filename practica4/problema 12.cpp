#include <iostream>
using namespace std;
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
}
