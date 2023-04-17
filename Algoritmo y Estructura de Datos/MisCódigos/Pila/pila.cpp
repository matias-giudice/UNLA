#include <iostream>
#include <stdio.h>
#include "pila.h"

struct NodoEstructura{
    int item;
    Nodo prox;
};

struct PilaEstructura{
    int tam;
    Nodo primerNodo;
};

//CONSTRUCTORES
Nodo crearNodo(int item){
    Nodo nodo = new NodoEstructura;

	if(nodo == NULL){
		return NULL;
	}

    nodo->item = item;
    nodo->prox = NULL;

    return nodo;
}
Pila crearPila(){
    Pila pila = new PilaEstructura;

	if(pila == NULL){
		return NULL;
	}

	pila->tam = 0;
    pila->primerNodo = NULL;

    return pila;
}

//DESTRUCTOR
int eliminarPila(Pila pila){
    if(pila == NULL){
		return ESTRUCTURA_NO_INICIALIZADA;
	}
	delete(pila);
	//El tamanio ya quedo en cero por los remove tam--
	pila->primerNodo = NULL;
	return OK;
}

//INSERTAR ELEMENTO
int insertarFin(Pila pila, int item){
    ///---------------casos de error--------------
    // - no existe pila
    // - item vacio
    if(pila == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
    }
    if(item == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
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

//REMOVER ELEMENTO
int removerFin(Pila pila, int* item){
    ///---------------casos de error--------------
    // - no existe pila
    // - pila vacia
    if(pila == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
    }
    if(estaVacia(pila)){
        return ESTRUCTURA_VACIA;
    }
    ///----------casos que no haya error----------
    if(pila->tam == 1){
        *item = pila->primerNodo->item;
        delete(pila->primerNodo);
        pila->primerNodo = NULL;
        pila->tam--;

        return OK;
    }

    int recorrido = CONTINUAR;
    Nodo nodoAux = pila->primerNodo;

    do{
        if(nodoAux->prox->prox == NULL){
            *item = nodoAux->prox->item;
            delete(nodoAux->prox);
            nodoAux->prox = NULL;
            pila->tam--;
            recorrido = CORTAR;
        }
        nodoAux = nodoAux->prox;
    }while(recorrido == CONTINUAR);

    delete(nodoAux);

    return OK;
}

//MOSTRAR LISTA
void imprimirPila(Pila pila){
    int cantidad;
    obtenerTamanio(pila, &cantidad);
    printf("[");
    int i;
    for(i=0; i<cantidad; i++){
        int elemento;
        obtenerElemento(pila, &elemento, i);
        printf(" %d ", elemento);
    }
    printf("]\n");
}

//OTRAS DE UTILIDAD
int estaVacia(Pila pila){
    if(pila == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
	}
    if(pila->primerNodo == NULL){
        return TRUE;
	}
    return FALSE;
}
int obtenerElemento(Pila pila, int* item, int pos){
    if(pila == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
	}
    if(estaVacia(pila)){
        return ESTRUCTURA_VACIA;
	}
    if(pos<0 || pos>=pila->tam){
        return INDICE_INVALIDO;
	}

    if(item == NULL){
        return PARAMETRO_INVALIDO;
	}
    Nodo aux;
    aux = pila->primerNodo;
    int i;
    for(i=0; i<pos; i++){
        aux = aux->prox;
    }
    *item = aux->item;

    return OK;
}
int obtenerTamanio(Pila pila, int* tam){
    if(pila == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
	}
    if(tam == NULL){
        return PARAMETRO_INVALIDO;
	}
    *tam = pila->tam;
    return OK;
}
