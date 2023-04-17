#include <iostream>
#include "cola.h"

struct NodoE{

    int item;
    Nodo prox;

};

struct ColaE{

    int tam;
    Nodo primerNodo;

};

//constructores y destructores
Cola crearCola(){

    Cola cola = new ColaE;

    cola->tam = 0;
    cola->primerNodo = NULL;

    return cola;
}

void eliminarCola(Cola cola){
    delete cola;
}

Nodo crearNodo(int item){

    Nodo nodo = new NodoE;

    nodo->item = item;
    nodo->prox = NULL;

    return nodo;
}

//insertar elemento y sacar elemento
int insertarFin(Cola cola, int item){

    ///---------------casos de error--------------
    // - no existe pila
    // - item vacio
    if(!cola){
        return -1;
    }

    if(item == NULL){
        return -1;
    }
    ///----------casos que no haya error----------
    Nodo nuevoNodo = crearNodo(item);

    if(cola->tam == 0){
        cola->primerNodo = nuevoNodo;
        cola->tam++;
        return 1;
    }

    int recorrido = CONTINUAR;
    Nodo nodoAux = cola->primerNodo;

    do{
        if(nodoAux->prox == NULL){

            nodoAux->prox = nuevoNodo;
            cola->tam++;

            recorrido = CORTAR;
        }
        nodoAux = nodoAux->prox;
    }while(recorrido == CONTINUAR);

    return 1;

}


int removerInicio(Cola cola, int* item){

    ///---------------casos de error--------------
    // - no existe pila
    // - pila vacia
    if(!cola){
        return -1;
    }

    if( estaVacia(cola) ){
        return -1;
    }
    ///----------casos que no haya error----------
    Nodo nodoAux = cola->primerNodo;
    Nodo nuevoInicio = nodoAux->prox;

    //salvamos item
    *item = cola->primerNodo->item;

    //eliminamos el nodo
    delete nodoAux;
    nodoAux = NULL;

    //actualizamos la cola
    cola->tam--;
    cola->primerNodo = nuevoInicio;

    return 1;
}

//otras de utilidad
int estaVacia(Cola cola){

    if(cola->primerNodo == NULL){
        return TRUE;
    }

    return FALSE;
}

int obtenerPrimerElemento(Cola cola, int* item){

    ///---------------casos de error--------------
    // - no existe pila
    // - pila vacia
    if(!cola){
        *item = NULL;
        return -1;
    }

    if( estaVacia(cola) ){
        *item = NULL;
        return -1;
    }

    ///----------casos que no haya error----------
    if(removerInicio(cola, item) == 1){
        return 1;
    }

    return -1;
}

int obtenerTamanio(Cola cola, int* tam){

    ///---------------casos de error--------------
    // - no existe pila
    if(!cola){
        return -1;
    }
    ///----------casos que no haya error----------
    *tam = cola->tam;

    return 1;
}

void imprimirCola(Cola cola){

    int itemActual, tamCola;
    Nodo nodoAux = cola->primerNodo;

    obtenerTamanio(cola, &tamCola);

    printf("[");
    for(int i=0; i < tamCola; i++){

        itemActual = nodoAux->item;
        printf(" %d ", itemActual);

        nodoAux = nodoAux->prox;
    }
    printf("]\n");

}
