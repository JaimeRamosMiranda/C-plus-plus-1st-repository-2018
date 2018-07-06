/*calcular el sueldo mensual de N empleado que trabaja por horas,
  el pago de cada hora trabajada depende de su categoria:  
              categoria         pago x hora (S/.)         
                A               26.90           
                B               24.30          
                C               21.50 
                Ademas si el empleado trabaja mas de 150 horas mensuales 
                tiene una bonificacion del 5 % de sueldo. Usar estructuras                */
                struct empleado
                {char nom[40], cat;   
                 int horas; 
                 double sueldo, pHora, bonf;
                 };
                void ingresar(empleado *d,int n); 
                void calcularSueldo(empleado *d,int n);
                void imprimir(empleado *d,int n);   
                 #include <iostream.h> 
                 #include <stdlib.h>
                  #include <string.h>
                 #define max 10 
                 int i; 
                 int main() 
                 {empleado e[max];
                  int n;
                 cout<<"Ingrese numero de empleados ";
                 cin>>n,     
                  ingresar(e,n);      
                   calcularSueldo(e,n);    
                   imprimir(e,n);     
                   system("PAUSE");    
                   return 0; }   
                    void ingresar(empleado *d,int n)
                        {
                         for (i=1;i<=n;i++)
                        {
                        cout<<"Ingresar nombre del empleado: "<<i<<" : ";
                        fflush(stdin);
                          gets((d+i)->nom); 
                          do
                             {    
                              cout<<"Ingresar categoria: ";     
                              cin>>(d+i)->cat;
                              (d+i)->cat = toupper((d+i)->cat);
                              }while((d+i)->cat!='A' &&(d+i)->cat!='B'&&(d+i)->cat!='C');      
                             cout<<"Ingresar cantidad de horas trabajadas: ";
                                   cin>>(d+i)->horas; 
                          }  
                          } 
                    void calcularSueldo(empleado *d,int n)
                          {     for (i=1;i<=n;i++)
                                 { 
                                 switch((d+i)->cat)
                                 { case 'A': (d+i)->pHora=26.90;   break; 
                                   case 'B': (d+i)->pHora=24.30;   break;    
                                   case 'C': (d+i)->pHora=21.50;   break;     
                                 }  
                                  (d+i)->sueldo=(d+i)->horas*d[i].pHora;
                                  if((d+i)->horas>150)
                                    (d+i)->bonf=0.05*(d+i)->sueldo;
                                   else 
                                    (d+i)->bonf=0; 
                                    (d+i)->sueldo=(d+i)->sueldo+(d+i)->bonf;
                                    }
                           }   
                            void imprimir(empleado *d,int n)
                           {cout<<"Nombre\tCateg\tHoras\tPago\tBonf\tSueldo"<<endl;  
                           for (i=1;i<=n;i++)
                                                        
                             cout<<(d+i)->nom<<"\t"<<(d+i)->cat<<"\t"<<(d+i)->horas<<"\t"<<(d+i)->pHora<<"\t"<<(d+i)->bonf<<"\t"<<(d+i)->sueldo<<endl; 
                             
                           
                           } 
