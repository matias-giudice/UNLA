#include <iostream>
#include "arbol.h"

struct NodoE{
    int dato;
    Nodo izquierda;
    Nodo derecha;
};

Nodo nuevoNodo(int dato){

    Nodo nodo = new struct NodoE;

    nodo->dato = dato;
    nodo->izquierda = nodo->derecha = NULL;

    return nodo;
}

void insertar(Nodo nodo, int dato){

    //izquierda o derecha
    //si es mayor va a la derecha
    if(dato > nodo->dato){

        //tiene espacio en la derecha
        if(nodo->derecha == NULL){
            nodo->derecha = nuevoNodo(dato);
        }else{
            // Si la derecha ya está ocupada, usamos recursividad
            insertar(nodo->derecha, dato);
        }
    }else{
        //si es menor va a la izuqierda
        if(nodo->izquierda == NULL){
            nodo->izquierda = nuevoNodo(dato);
        }else{
            // Si la izquierda ya está ocupada, usamos recursividad
            insertar(nodo->izquierda, dato);
        }
    }


}

void preorden(Nodo nodo){
    if(nodo != NULL){
        printf(" %d", nodo->dato);
        preorden(nodo->izquierda);
        preorden(nodo->derecha);
    }
}

void inorder(Nodo nodo){
    if(nodo != NULL){
        inorder(nodo->izquierda);
        printf(" %d", nodo->dato);
        inorder(nodo->derecha);
    }
}

void postorden(Nodo nodo){
    if(nodo != NULL){
        postorden(nodo->izquierda);
        postorden(nodo->derecha);
        printf(" %d", nodo->dato);
    }
}


Nodo buscar(Nodo nodo, int dato){

    if(nodo == NULL){
        return NULL;
    }

    if(nodo->dato == dato){
        return nodo;
    }

    else if(dato > nodo->dato){
        printf("No esta el %d != %d --> DERECHA\n", dato, nodo->dato);
        return buscar(nodo->derecha, dato);
    }
    else{
        printf("No esta el %d != %d --> IZQUIERDA\n", dato, nodo->dato);
        return buscar(nodo->izquierda, dato);
    }

}
