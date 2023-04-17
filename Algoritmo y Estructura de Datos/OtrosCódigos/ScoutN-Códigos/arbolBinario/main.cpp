#include <iostream>
#include "arbol.h"

using namespace std;

int main()
{
    cout << "------------ Ejemplo de arbol binario ------------" << endl;

    Nodo raiz = nuevoNodo(28);
    insertar(raiz, 11);
    insertar(raiz, 96);
    insertar(raiz, 21);
    insertar(raiz, 6);
    insertar(raiz, 97);
    insertar(raiz, 1);
    insertar(raiz, 30);
    insertar(raiz, 10);
    insertar(raiz, 2);

    printf("\nImprimiendo preorden\n");
    preorden(raiz);
    printf("\n\nImprimiendo inorder\n");
    inorder(raiz);
    printf("\n\nImprimiendo postorden\n");
    postorden(raiz);

    printf("\n\nBuscar el 1\n");
    Nodo buscado = buscar(raiz, 1);

    if(buscado == NULL){
        printf("No encontrado :(");
    }else{
        printf("Encontrado :)");
    }

    cout << endl;
    return 0;
}
