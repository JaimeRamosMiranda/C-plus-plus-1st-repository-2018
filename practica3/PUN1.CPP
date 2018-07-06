#include <stdio.h>
#include <iostream.h>
#include <conio.h>
int main() 
{
int a, b, c, *p1, *p2;

p1 = &a;           // Paso 1. La dirección de a es asignada a p1
*p1 = 1;           // Paso 2. p1 (a) es igual a 1. Equivale a a = 1;
p2 = &b;         // Paso 3. La dirección de b es asignada a p2
*p2 = 2;          // Paso 4. p2 (b) es igual a 2. Equivale a b = 2;
p1 = p2;          // Paso 5. El valor del p1 = p2
*p1 = 0;          // Paso 6. b = 0
p2 = &c;        // Paso 7. La dirección de c es asignada a p2
*p2 = 3;        // Paso 8. c = 3
cout<<a<<"\t"<<b<<"\t"<<c<<endl;         // Paso 9. ¿Qué se imprime?

*p1 = 1;            // Paso 10. c = 1
cout<<a<<"\t"<<b<<"\t"<<c<<endl;         // Paso 11. ¿Qué se imprime? 
getche();
return 0; 
    } 
