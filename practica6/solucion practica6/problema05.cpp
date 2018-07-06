/*
 SECUENCI.CPP
 Rutinas de ...  
 1.- Altas
 2.- Consultas
 3.- Modificaciones
 4.- Bajas logicas
 5.- Listado

 registros en un archivo binario secuencial

 
*/

#include <stdio.h> // Para el manejo de archivos
#include <string> // Para el manejo de cadenas
#include <conio.h> // Para el manejo de getch
#include <iostream> // Para el manejo de cout
#include <ctype.h> // Para el uso de toupper
#include <iomanip> // Para el uso de setw

using namespace std;

struct CUENTAS_CHEQUES
{
       int     num_cuenta;
       char    cliente[100];
       float   saldo;
       
};

CUENTAS_CHEQUES cheque;
FILE *H;

void ingresar();  
void modificar(); 
void baja_logica();
void baja_fisica(); 
void listado(); 
void deposito();
void retiro();

int main()
{
   system("color 1f");
   char op;
     do
     {
        system("cls");
        cout << "\n\n\r <<PROGRAMA DE CUENTAS DE CHEQUES>>";
        cout << "\n\n\n\r 1.- Ingresar nuevo numero de cuenta.";
        cout << "\n\r 2.- Modificar cuenta.";//modificacion secuencial
        cout << "\n\r 3.- baja logica de una cuenta.";
        cout << "\n\r 4.- baja fisica de una cuenta.";//compactacion del archivo
        cout << "\n\r 5.- listado de cuentas.";
        cout << "\n\r 6.- realizar un deposito.";
        cout << "\n\r 7.- realizar un retiro.";
        cout << "\n\r 0.- Salir.";
   
        cout << "\n\n\n\r Seleccione su opcion ---> ";
        op=toupper(getche());
   
        switch(op)
        {
         	case '1' : ingresar();      break;
         	case '2' : modificar();     break;
         	case '3' : baja_logica();   break;
         	case '4' : baja_fisica();   break;
         	case '5' : listado();       break;
         	case '6' : deposito();      break;
         	case '7' : retiro();        break;
        }
     }while(op!='0');
     return 0;
}



void ingresar()
{
   int num;// Variable local para el numero de cuenta
   system("cls");//se limpia la pantalla
   cout << "\n\rALTAS DE REGISTROS DE PRODUCTOS";
   H=fopen("cheque.sec","ab+");  // Intenta abrir el archivo cheque.sec
				     // en modo de lectura/escritura
   if (H==NULL)// Valida la existencia del archivo
	  {
         cout<<"ERROR: El archivo no existe";
		   getch();
		   exit(1); 
	  }
  
   cout << "\n\n\n\rNumero de cuenta : "; cin>>num;
   fread(&cheque,sizeof(cheque),1,H);
   // Lee el registro "cheque", de tamano=sizeof(cheque) del archivo "H"
   while(!feof(H)){ // Ciclo mientras no se encuentre el final del archivo
      if(cheque.num_cuenta==num)
      {
         cout << "\n\n\n\rRegistro duplicado !!!";
         fclose(H);
         getch();
         return;
      }
      fread(&cheque,sizeof(cheque),1,H);
   }

   cout << "\n\rNombre del cliente: ";     cin>>cheque.cliente;
   cout << "\n\rSaldo   : ";               cin >>cheque.saldo;

   cheque.num_cuenta=num;

   fwrite(&cheque,sizeof(cheque),1,H); // Grabar el Registro completo

   cout << "\n\n\n\rCheque registrado exitosamente.";
   fclose(H);// cierra el archivo
   cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
   getch();
   return; 
}


void modificar()
{
   
   int num;// Variable local para el numero de producto que desea modificar
   system("cls");

   cout << "\n\rMODIFICAR CUENTAS";
   H=fopen("cheque.sec","rb+");// Intenta abrir el archivo cheque.sec
				     // en modo de lectura/escritura
   if(H==NULL)
   {
      cout << "\n\n\n\rNo existe el archivo !!!";
      getch();
      return;
   }
   cout << "\n\n\n\rNumero del cuenta "; cin>>num;
   fread(&cheque,sizeof(cheque),1,H);
   while(!feof(H))
   {
      
      if(cheque.num_cuenta==num)
      {
         cout << "\n\r"<<setw(10)<<"Numero de cuenta"<<setw(15)<<"Nombre del cliente"<<setw(15)<<"Saldo"<<" $";
         cout << "\n\r------------------------------------------------------------------------";
         cout << "\n\r "<<setw(10)<<cheque.num_cuenta<<setw(12)<<cheque.cliente<<setw(12)<<cheque.saldo;

         cout << "\n\n\n\rAnote los nuevos datos :\n";
         cout << "\n\rNombre del cliente: ";     cin>>cheque.cliente;
         cout << "\n\rSaldo   : ";               cin >>cheque.saldo;
      
         // Es necesario reposicionar el apuntador del archivo al principio del
         // registro que desea modificar, ya que al leer un registro, el
         // apuntador se posiciona en el registro siguiente
         // La funcion ftell(H) devuelve la posicion donde se encuentra el
         // apuntador
         fseek(H,ftell(H)-sizeof(cheque),SEEK_SET);
         fwrite(&cheque,sizeof(cheque),1,H);  // Graba el registro con
						   // los nuevos campos
			   
         fclose(H);   // Cierra el archivo
         cout << "\n\n\rRegistro modificado.";
         cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
         getch();
         return;
      }
      fread(&cheque,sizeof(cheque),1,H);
   }
   cout << "\n\rNo se encuentra ese registro !!!";
   fclose(H);// Cierra el archivo
   cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
   getch();
   return;
}


void baja_logica()
{
   
   int num; // Variable local para el numero de la cuenta que desea eliminar
   char op;
   system("cls");

   cout << "\n\rBAJA LOGICA DE UNA CUENTA";
   H=fopen("cheque.sec","rb+"); 	     
   if(H==NULL)// Valida la existencia del archivo
   {
      cout << "\n\n\n\rNo existe el archivo.";
      getch();
      return;
   }
   cout << "\n\n\n\rNumero de la cuenta : "; cin>>num;

   fread(&cheque,sizeof(cheque),1,H);// Lee el registro "cheque", de tamaño=sizeof(cheque) del archivo "H"
   while(!feof(H))// Ciclo mientras no se encuentre el final del archivo
   {
      if(cheque.num_cuenta==num)
      {
         cout << "\n\r"<<setw(10)<<"Numero de cuenta"<<setw(15)<<"Nombre del cliente"<<setw(15)<<"Saldo"<<" $";
         cout << "\n\r------------------------------------------------------------------------";
         cout << "\n\r "<<setw(10)<<cheque.num_cuenta<<setw(15)<<cheque.cliente<<setw(15)<<cheque.saldo;
         
         cheque.num_cuenta=0;//se asignan valores nulos a cada campo del registro
         strcpy(cheque.cliente,"");
         cheque.saldo=0.0;
         
         do 
         {
	           cout << "\n\n\rEsta seguro que desea borrar la cuenta? (s/n) ---> ";
	           op=toupper(getche());
         }
         while(op!='S' && op!='N');

         if(op=='S')
         {
	        fseek(H,ftell(H)-sizeof(cheque),SEEK_SET);
	        fwrite(&cheque,sizeof(cheque),1,H); 
	        cout << "\n\n\n\rRegistro eliminado !!!";
         }
         fclose(H);// Cierra el archivo
         cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
         getch();
         return;
      }
      fread(&cheque,sizeof(cheque),1,H);
   }
   cout << "\n\rNo se encuentra ese registro !!!";
   fclose(H);// Cierra el archivo
   cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
   getch();
   return;
}


void baja_fisica()
{
   FILE *temporal; //Declaracion local de una variable para controlar el
		// archivo temporal
   system("cls");

   cout << "\n\rBAJAS FISICAS DE CUENTAS";
   H=fopen("cheque.sec","rb"); // Intenta abrir el archivo cheque.sec
				     // en modo de solo lectura
   if(H==NULL)  // Valida la existencia del archivo
   {
      cout << "\n\n\n\rNo existe el archivo !!!";
      cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
      getch();
      return;
   }

   temporal=fopen("TEMPORAL.TMP","wb"); // Crea el archivo TEMPORAL.TMP

   fread(&cheque,sizeof(cheque),1,H);
     // Lee el registro "cheque", de tamano=sizeof(cheque) del archivo "H"
   while(!feof(H)) // Ciclo mientras no se encuentre el final del archivo
   {
	   fwrite(&cheque,sizeof(cheque),1,temporal);// Graba el registro valido en el archivo temporal
      fread(&cheque,sizeof(cheque),1,H);
   }
   fclose(H); // Cierra todos los archivos abiertos
   fclose(temporal);
   remove("cheque.sec"); //Elimina el archivo original
   rename("TEMPORAL.TMP","cheque.sec");//Renombra el archivo temporal con el nombre del archivo original
  
   cout << "\n\n\n\rArchivo compactado !!!";
   cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
   getch();
   return;
}


void deposito()
{
   int num; // Variable local para el numero de LA CUENTA EN LA QUE EFECTUARA UN DEPOSITO
   float deposito;// Variable local para el MONTO A DEPOSITAR
  
   system("cls");

   cout << "\n\rREALIZAR UN DEPOSITO";
   H=fopen("cheque.sec","rb+");// Intenta abrir el archivo cheque.sec
				     // en modo de lectura/escritura
   if(H==NULL)
   {
      cout << "\n\n\n\rNo existe el archivo !!!";
      getch();
      return;
   }
  
   cout << "\n\n\n\rNumero del cuenta "; cin>>num;
   fread(&cheque,sizeof(cheque),1,H);
   while(!feof(H))
   {
      if(cheque.num_cuenta==num)
      {
         cout << "\n\r"<<setw(5)<<"Numero de cuenta"<<setw(25)<<"Nombre del cliente"<<setw(15)<<"Saldo"<<" $";
         cout << "\n\r------------------------------------------------------------------------";
         cout << "\n\r "<<setw(15)<<cheque.num_cuenta<<setw(20)<<cheque.cliente<<setw(20)<<cheque.saldo;

         cout << "\n\rIngrese la cantidad a depositar   : "; cin >>deposito;
         cheque.saldo+=deposito;//añadimos el monto a depositar al saldo existente

         fseek(H,ftell(H)-sizeof(cheque),SEEK_SET);
         fwrite(&cheque,sizeof(cheque),1,H);  // Graba el registro con los nuevos campos 
         fclose(H);   // Cierra el archivo
         cout << "\n\n\rDeposito efectuado exitosamente!!!.";
         cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
         getch();
         return;
      }
      fread(&cheque,sizeof(cheque),1,H);
   }
   cout << "\n\rNo se encuentra ese registro !!!";
   fclose(H);// Cierra el archivo
   cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
   getch();
   return;
}

void retiro()
{
   int num; // Variable local para el numero de LA CUENTA EN LA QUE EFECTUARA UN DEPOSITO
   float retiro;// Variable local para el MONTO A DEPOSITAR 
  
   system("cls");

   cout << "\n\rREALIZAR UN RETIRO";
   H=fopen("cheque.sec","rb+");// Intenta abrir el archivo cheque.sec
				     // en modo de lectura/escritura
   if(H==NULL)
   {
      cout << "\n\n\n\rNo existe el archivo !!!";
      getch();
      return;
   }
  
   cout << "\n\n\n\rNumero del cuenta "; cin>>num;
   fread(&cheque,sizeof(cheque),1,H);
   while(!feof(H))
   {
      if(cheque.num_cuenta==num)
      {
         cout << "\n\r"<<setw(5)<<"Numero de cuenta"<<setw(25)<<"Nombre del cliente"<<setw(15)<<"Saldo"<<" $";
         cout << "\n\r------------------------------------------------------------------------";
         cout << "\n\r "<<setw(15)<<cheque.num_cuenta<<setw(20)<<cheque.cliente<<setw(20)<<cheque.saldo;


         cout << "\n\rIngrese la monto a retirar   : "; cin >>retiro;
         cheque.saldo-=retiro;//sustraemos el monto a retirar al saldo existente
      

         fseek(H,ftell(H)-sizeof(cheque),SEEK_SET);
         fwrite(&cheque,sizeof(cheque),1,H);  // Graba el registro con los nuevos campos			   
         fclose(H);   // Cierra el archivo
         cout << "\n\n\rRetiro efectuado exitosamente!!!.";
         cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
         getch();
         return;
      }
      fread(&cheque,sizeof(cheque),1,H);
   }
   cout << "\n\rNo se encuentra ese registro !!!";
   fclose(H);// Cierra el archivo
   cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
   getch();
   return;
}

void listado()
{
   
   system("cls");
   cout << "\n\rLISTADO DE CUENTAS";
   H=fopen("cheque.sec","rb"); // Intenta abrir el archivo cheque.sec en modo de solo lectura
				     // 
   if(H==NULL)
  {
    cout << "\n\n\n\rNo existe el archivo !!!";
    cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
    getch();
    return;
  }

  cout << "\n\r"<<setw(5)<<"Numero de cuenta"<<setw(25)<<"Nombre del cliente"<<setw(15)<<"Saldo"<<" $";
         cout << "\n\r------------------------------------------------------------------------";
         
  fread(&cheque,sizeof(cheque),1,H);
     // Lee el registro "cheque", de tamano=sizeof(cheque) del archivo "H"
  while(!feof(H)) // Ciclo mientras no se encuentre el final del archivo
  {
      
      cout << "\n\r "<<setw(15)<<cheque.num_cuenta<<setw(20)<<cheque.cliente<<setw(20)<<cheque.saldo;
      fread(&cheque,sizeof(cheque),1,H);
  }
  fclose(H); // Cierra el archivo
  cout << "\n\r------------------------------------------------------------------------";
  cout << "\n\rFin del listado !!!";
  cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
  getch();
  return;
}
