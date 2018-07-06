#include <iostream>   // cin y cout 
#include <iomanip>    // setw() 
#include <conio.h>        // getch() 
#include <stdio.h>         // gets() 
#include <string.h>        // strcmp() y strcpy()
using namespace std; 
#define dim 20
#define tc 30
int main() 

{     char nom[dim][tc],auxN[tc];
      int i,j,n;
      do
     {
      cout<<"Ingrese numero de alumnos : "<<endl;
      cin>>n;
      }while(n<0 || n>dim);
                // LEE EL ARRAY DE NOMBRES            
            cout<<"Ingrese los nombres : "<<endl; 
            for(i=0;i< n;i++)
            { cout<<"nom["<<i+1<<"]=";
            fflush(stdin);
              gets(nom[i]);
             }
             cout<<"LISTADO DE NOPMBRES ingresados "<<endl;
            for(i=0;i< n;i++)
                cout<<setw(15)<<nom[i]<<endl;
                getche();
                // ORDENA EN ORDEN ALFABETICO 

            for(i=0;i<n;i++)               // numero de pasos

             for(j=i+1;j<n;j++)   // numero de conbinaciones

                          // pregunta si nom[j] es mayor que num[j+1] 

                                   if (strcmp(nom[i],nom[j]) > 0)

                                   {   

                                          strcpy(auxN,nom[i]);  // a auxN le asigna nom[j] 

                                          strcpy(nom[i],nom[j]);       // a nom[j] le asigna nom[j+1] 

                                          strcpy(nom[j],auxN);         // a nom[j+1] le asigna auxN 

                                   } 

                                  

            cout<<endl; 

            // MUESTRA EL ARRAY EN ORDEN ALFABETICO 
            cout<<"LISTADO DE NOPMBRES ALFABETICO "<<endl;
            for(i=0;i< n;i++)

             cout<<setw(15)<<nom[i]<<endl;    

               cout<<endl;getch(); 

}   

