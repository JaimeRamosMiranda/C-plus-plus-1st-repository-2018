#include <conio.h>
#include <iostream.h>
int main()
{float l,a,area,*p1,*p2,*p3;
  p1=&l;
  p2=&a;
  p3=&area;
 cout<<"Largo : ";
 cin>>*p1;
 cout<<"Ancho : ";
 cin>>*p2;
 *p3=*p1 * *p2;
 cout<<"Area Rectangulo : "<<*p3<<" Unidades cuadradas "<<endl;
 system("pause");
 return 0;
}        
