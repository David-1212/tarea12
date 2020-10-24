#include<iostream>
#include "ArregloDinamico.h"
using namespace std;
void modificar(int *a)
{
    *a =*a+1;
}

int main(){
    ArregloDinamico arreglo;
    arreglo.insertar_final("la ");
    arreglo.insertar_final("tarea ");
    arreglo.insertar_final(" profe");
    arreglo.insertar_final("me ");
    arreglo.insertar_final("llamo");
    arreglo.insertar_final("David");
    arreglo.insertar_final("Guadalupe");
    arreglo.insertar_final("Vargas");
    arreglo.insertar_inicio("funciona ");
    arreglo.insertar_inicio("ya ");
    for(size_t i = 0; i < arreglo.size(); i ++)
    {
        cout<<arreglo[i]<<" ";
    } 

    //int *b =nullptr;
   // b = new int[100];
  //  cout <<b<< " "<<*b<<endl;
   // delete[] b;

    //int a=12;
  //  cout <<a<<endl;
  //  cout <<&a<<endl;
  //  modificar(&a);
   // cout <<a<<endl;
    return 0;
}