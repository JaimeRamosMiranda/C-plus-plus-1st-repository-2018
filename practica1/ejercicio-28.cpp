//inclusion de librerias
#include <iostream>
#include <conio.h>
#define por 0.1
using namespace std;
int main()
{/*****Inicio de bloque****************
 kkkkkkkkkkkkkkkkk
 kkkkkkkkkkkkk
 kkkkkkkkkk
 lllllllll
 */
 // declaracion de variables e/s
 float costo,mp;
 int ed,dias,te;
 //DATOS
 cout<<"INGRESE La edad "<<endl;
 cin>>ed;
 cout<<"INGRESE tipo de Enfermedad "<<endl;
 cin>>te;
 cout<<"INGRESE dias de internamiento "<<endl;
 cin>>dias; 
 //Proceso
 if(dias> 0&&ed>0&&(te>=0&&te<4))
 {
 
 switch(te)
   {case 0: costo = 25;break;
    case 1: costo = 16;break;
    case 2: costo = 20;break;
    case 3: costo = 32;break;
   }
   mp=dias*costo;
 //salida
 if(ed>=14&&ed<=22)
    mp = mp + mp * por;
 cout<<"COSTO DE INTERNAMIENTO :"<<mp<<endl; 
}
else
  cout<<"Dato Errado    "<<endl;
 getche(); // congela la salida
 return 0;
} //fin de bloque

