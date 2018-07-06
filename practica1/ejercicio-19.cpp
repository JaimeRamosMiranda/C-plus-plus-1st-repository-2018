/*
19.- Se cuenta con los votos obtenidos por Juan, Pedro y María en una elección democrática a la presidencia de un club. 
Para ganar la elección se debe obtener como mínimo el 50% de los votos más 1.
En caso que no haya un ganador se repite la elección en una segunda vuelta. 
Van a la segunda vuelta los dos que obtengan la más alta votación ó, 
los tres en caso de producirse un empate doble (entre los dos con menor votación) o un empate triple. 
Diseñe un algoritmo que determine el resultado de la elección.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	//declaracion
	int vjuan,vpedro,vmaria,vtotal,vmax;
	//entrada
	cout<<"Votos de Juan : "<<endl;
	cin>>vjuan;
	cout<<"Votos de Pedro : "<<endl;
	cin>>vpedro;
	cout<<"Votos de Maria : "<<endl;
	cin>>vmaria;
	//proceso y salida
	
	//determina la votacion total
	vtotal=vjuan+vpedro+vmaria;
	vmax=vjuan;
	if (vpedro>vjuan)
		vmax=vpedro;
		if (vmaria>vmax)
			vmax=vmaria;
	
	//determina el resultado de la eleccion
	if (vmax>=vtotal/2+1)
		{cout<<"Hay ganador"<<endl;
		if(vjuan==vmax)
			cout<<"Gano Juan"<<endl;
			else
				if (vpedro==vmax)
				cout<<"Gano Pedro"<<endl;
				else
				cout<<"Gano Maria"<<endl;}
		else{
			cout<<"No hay ganador"<<endl;
			if (vjuan<vpedro && vjuan<vmaria)
				cout<<"Debe haber segunda vuelta entre Pedro y Maria"<<endl;
			else
				if (vpedro<vjuan && vpedro<vmaria)
					cout<<"Debe haber segunda vuelta entre Juan y Maria"<<endl;
				else
					if (vmaria<vjuan && vmaria<vpedro)
						cout<<"Debe haber segunda vuelta entre Juan y Pedro"<<endl;
					else cout<<"Debe haber segunda vuelta entre los tres"<<endl;}
																						
	getche();
	return 0;
}
