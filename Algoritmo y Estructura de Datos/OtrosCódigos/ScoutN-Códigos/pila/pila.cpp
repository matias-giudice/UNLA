#include <iostream>
#include "pila.h"

struct NodoE{

    int item;
    Nodo prox;

};

struct PilaE{

    int tam;
    Nodo primerNodo;

};

//constructores y destructores
Pila crearPila(){

    Pila pila = new PilaE;

    pila->tam = 0;
    pila->primerNodo = NULL;

    return pila;
}

void eliminarPila(Pila pila){
    delete pila;
}

Nodo crearNodo(int item){

    Nodo nodo = new NodoE;

    nodo->item = item;
    nodo->prox = NULL;

    return nodo;
}

//insertar elmeneto y sacar elemento
int insertarFin(Pila pila, int item){

    ///---------------casos de error--------------
    // - no existe pila
    // - item vacio
    if(!pila){
        return -1;
    }

    if(item == NULL){
        return -1;
    }

    ///----------casos que no haya error----------
    Nodo nuevoNodo = crearNodo(item);

    if(pila->tam == 0){
        pila->primerNodo = nuevoNodo;
        pila->tam++;
        return 1;
    }

    int recorrido = CONTINUAR;
    Nodo nodoAux = pila->primerNodo;

    do{
        if(nodoAux->prox == NULL){

            nodoAux->prox = nuevoNodo;
            pila->tam++;

            recorrido = CORTAR;
        }
        nodoAux = nodoAux->prox;
    }while(recorrido == CONTINUAR);

    return 1;
}

int removerFin(Pila pila, int* item){

    ///---------------casos de error--------------
    // - no existe pila
    // - pila vacia
    if(!pila){
        return -1;
    }

    if( estaVacia(pila) ){
        return -1;
    }

    ///----------casos que no haya error----------
    if( pila->tam == 1){
        *item = pila->primerNodo->item;
        delete pila->primerNodo;
        pila->primerNodo= NULL;
        pila->tam--;

        return 1;
    }


    int recorrido = CONTINUAR;
    Nodo nodoAux = pila->primerNodo;

    do{
        if(nodoAux->prox->prox == NULL){

            *item = nodoAux->prox->item;
            delete nodoAux->prox;
            nodoAux->prox = NULL;
            pila->tam--;

            recorrido = CORTAR;
        }
        nodoAux = nodoAux->prox;
    }while(recorrido == CONTINUAR);

    delete nodoAux;

    return 1;
}

//otras de utilidad
int estaVacia(Pila pila){

    if(pila->tam == 0){
        return TRUE;
    }

    return FALSE;
}
int obtenerUltimoElemento(Pila pila, int* item){

    ///---------------casos de error--------------
    // - no existe pila
    // - pila vacia
    if(!pila){
        *item = NULL;
        return -1;
    }

    if( estaVacia(pila) ){
        *item = NULL;
        return -1;
    }

    ///----------casos que no haya error----------
    if(removerFin(pila, item) == 1){
        return 1;
    }

    return -1;
}

int obtenerTamanio(Pila pila, int* tam){

    ///---------------casos de error--------------
    // - no existe pila
    if(!pila){
        return -1;
    }

    ///----------casos que no haya error----------
    *tam = pila->tam;

    return 1;
}

void imprimirPila(Pila pila){

    int itemActual, tamPila;
    Nodo nodoAux = pila->primerNodo;

    obtenerTamanio(pila, &tamPila);

    printf("[");
    for(int i=0; i < tamPila; i++){

        itemActual = nodoAux->item;
        printf(" %d ", itemActual);

        nodoAux = nodoAux->prox;
    }
    printf("]\n");

}
