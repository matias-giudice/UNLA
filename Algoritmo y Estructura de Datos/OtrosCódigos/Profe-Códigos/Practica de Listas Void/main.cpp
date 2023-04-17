#include <iostream>
#include "listaVoid.h"

using namespace std;

int main()
{
    ListaVoid lista = crearLista(sizeof(int));
    int x;

    //x=9;
    //insertarInicio(lista,&x);
    x=8;
    insertarInicio(lista,&x);
    x=7;
    insertarInicio(lista,&x);
    x=6;
    insertarInicio(lista,&x);
    x=5;
    insertarInicio(lista,&x);
    x=4;
    insertarInicio(lista,&x);
    x=3;
    insertarInicio(lista,&x);
    x=2;
    insertarInicio(lista,&x);
    x=0;
    insertarInicio(lista,&x);
    x=1;
    insertar(lista,&x,1);
    x=9;
    insertarFinal(lista,&x);

    mostrarLista(lista);

    cout<<"\n\nEliminando la posicion 4: "<<endl;

    int elemento;
    removerFinal(lista,&elemento);
    x=100;
    insertarFinal(lista,&x);
    mostrarLista(lista);

    cout<<"\n\nEL elemento es:"<<elemento<<endl;

    liberarLista(lista);

    return 0;
}
