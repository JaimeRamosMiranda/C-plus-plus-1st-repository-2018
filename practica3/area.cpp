/*1.No reciben ni retornan
2.Reciben y no retornan
3.No reciben y retornan
4.Reciben y retornan   */

            // No reciben ni retornan
/*
#include <iostream>
#include <stdlib.h> 
#include <math.h> 
using namespace std;  
void area();
int main()
{area();
 system("pause");
 return 0;
}
void area()
     { float largo,ancho,ar;
       cout<<"Ingrese el largo : "<<endl;
       cin>>largo;
       cout<<"Ingrese el ancho : "<<endl;
       cin>>ancho;
       ar=largo * ancho;
       cout<<"Area del rectangulo : "<<ar<<" Unidades cuadradas "<<endl;
       }
                  
                   // Reciben y no retornan
#include <iostream>
#include <stdlib.h> 
#include <math.h> 
using namespace std;  
void area(float l,float a,float &ar);
int main()
     { float largo,ancho,ar;
       cout<<"Ingrese el largo : "<<endl;
       cin>>largo;
       cout<<"Ingrese el ancho : "<<endl;
       cin>>ancho;
       area(largo, ancho,ar);
       cout<<"Area del rectangulo : "<<ar<<" Unidades cuadradas "<<endl;
       system("pause");
        return 0;
       }
void area(float l,float a,float &ar)
{ar=l*a;
}

#include <iostream>
#include <stdlib.h> 
#include <math.h> 
using namespace std;  
void area(float l,float a,float *ar);
int main()
     { float largo,ancho,ar;
       cout<<"Ingrese el largo : "<<endl;
       cin>>largo;
       cout<<"Ingrese el ancho : "<<endl;
       cin>>ancho;
       area(largo, ancho,&ar);
       cout<<"Area del rectangulo : "<<ar<<" Unidades cuadradas "<<endl;
       system("pause");
        return 0;
       }
void area(float l,float a,float *ar)
{*ar=l*a;
}

                //  No reciben y retornan
#include <iostream>
#include <stdlib.h> 
#include <math.h> 
using namespace std;  
float area();
int main()
     { float r;
      r=area();
       cout<<"Area del rectangulo : "<<r<<" Unidades cuadradas "<<endl;
       system("pause");
        return 0;
       }
float area()
{float largo,ancho,ar;
       cout<<"Ingrese el largo : "<<endl;
       cin>>largo;
       cout<<"Ingrese el ancho : "<<endl;
       cin>>ancho;
       ar=largo*ancho; 
       return ar; 
}


         //     Reciben y retornan
              
#include <iostream>
#include <stdlib.h> 
#include <math.h> 
using namespace std;  
float area(float l,float a);
int main()
     { float largo,ancho,ar;
       cout<<"Ingrese el largo : "<<endl;
       cin>>largo;
       cout<<"Ingrese el ancho : "<<endl;
       cin>>ancho;
       ar=area(largo, ancho);
       cout<<"Area del rectangulo : "<<ar<<" Unidades cuadradas "<<endl;
       system("pause");
        return 0;
       }
float area(float l,float a)
{float r;
     r=l*a;
     return r;
}

*/
