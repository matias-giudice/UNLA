#include <iostream>
#include <stdio.h>
#include "arbol.h"

struct NodoEstructura{
    int dato;
    Nodo izquierda;
    Nodo derecha;
};

Nodo nuevoNodo(int dato){
    Nodo nodo = new struct NodoEstructura;
    nodo->dato = dato;
    nodo->izquierda = nodo->derecha = NULL;

    return nodo;
}

void insertarNodo(Nodo nodo, int dato){
    //izquierda o derecha
    //si es mayor va a la derecha
    if(dato > nodo->dato){
        //tiene espacio en la derecha
        if(nodo->derecha == NULL){
            nodo->derecha = nuevoNodo(dato);
        }else{
            // Si la derecha ya está ocupada, usamos recursividad
            insertarNodo(nodo->derecha, dato);
        }
    }else{
        //si es menor va a la izuqierda
        if(nodo->izquierda == NULL){
            nodo->izquierda = nuevoNodo(dato);
        }else{
            // Si la izquierda ya está ocupada, usamos recursividad
            insertarNodo(nodo->izquierda, dato);
        }
    }
}

void preOrden(Nodo nodo){
    if(nodo != NULL){
        printf(" %d", nodo->dato);
        preOrden(nodo->izquierda);
        preOrden(nodo->derecha);
    }
}
void inOrder(Nodo nodo){
    if(nodo != NULL){
        inOrder(nodo->izquierda);
        printf(" %d", nodo->dato);
        inOrder(nodo->derecha);
    }
}
void postOrden(Nodo nodo){
    if(nodo != NULL){
        postOrden(nodo->izquierda);
        postOrden(nodo->derecha);
        printf(" %d", nodo->dato);
    }
}

Nodo buscarNodo(Nodo nodo, int dato){
    if(nodo == NULL){
        return NULL;
    }
    if(nodo->dato == dato){
        return nodo;
    }
    else if(dato > nodo->dato){
        printf("No esta el %d != %d --> DERECHA\n", dato, nodo->dato);
        return buscarNodo(nodo->derecha, dato);
    }
    else{
        printf("No esta el %d != %d --> IZQUIERDA\n", dato, nodo->dato);
        return buscarNodo(nodo->izquierda, dato);
    }
}
