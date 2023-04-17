#include <iostream>
#include <stdio.h>
#include "arbol.h"
using namespace std;

int main(){
    cout << "------------ Ejemplo de arbol binario ------------" << endl;

    Nodo raiz = nuevoNodo(28);
    insertarNodo(raiz, 11);
    insertarNodo(raiz, 96);
    insertarNodo(raiz, 21);
    insertarNodo(raiz, 6);
    insertarNodo(raiz, 97);
    insertarNodo(raiz, 1);
    insertarNodo(raiz, 30);
    insertarNodo(raiz, 10);
    insertarNodo(raiz, 2);

    printf("\nImprimiendo preorden\n");
    preOrden(raiz);
    printf("\n\nImprimiendo inorder\n");
    inOrder(raiz);
    printf("\n\nImprimiendo postorden\n");
    postOrden(raiz);

    printf("\n\nBuscar el 1\n");
    Nodo buscado = buscarNodo(raiz, 1);

    if(buscado == NULL){
        printf("No encontrado :(");
    }else{
        printf("Encontrado :)");
    }

    cout << endl;
    return 0;
}
