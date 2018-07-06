/*
12.- Dado un vector con los votos de 12 candidato (con identificadores 1,2,3,4,5,….12), 
por otra parte, los votos para cada candidato se teclean de manera desorganizada como se muestra a continuación:
	1 5 7 5 1 12 10 7 1 7 5 8 5 -1
Escriba un algoritmo para  proporcionar la siguiente información:
"	El numero de votos de cada candidato al final de la elección.
"	El candidato ganador, el número de votos que obtuvo y el porcentaje correspondiente del total de la elección.
(Suponga que el ganador no empato en numero de votos con otro candidato)
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int numcand[12]={1,2,3,4,5,6,7,8,9,10,11,12}, votos[12]={1,5,7,5,1,12,10,7,1,7,5,8,}, ganar,maximo,i;
	float por,suma;
	maximo=0;
	
	cout<<"\tcantidad de votos: "<<endl;
	for(int i=0;i<12;i++){
		cout<<"Candidato "<<i+1<<" : "<<votos[i]<<endl;
	}
	
	for(int i=0;i<12;i++){
		
		if(votos[i]>maximo){
			maximo=votos[i];
			ganar=numcand[i];
		}	
	}
	
	suma=0;
	for(i=0;i<12;i++)
	{suma=suma+votos[i];}
	
	por=float(maximo/suma)*100;
	
	cout<<endl<<"el ganador es el candidato numero"<<ganar<<" que tiene "<<maximo<<" votos y que es el "<<por<<"%"<<" del total"<<endl;
}
