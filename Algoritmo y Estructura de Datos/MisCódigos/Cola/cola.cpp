#include <iostream>
#include <stdio.h>
#include "cola.h"

struct NodoEstructura{
    int item;
    Nodo prox;
};

struct ColaEstructura{
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
Cola crearCola(){
    Cola cola = new ColaEstructura;

	if(cola == NULL){
		return NULL;
	}

	cola->tam = 0;
    cola->primerNodo = NULL;

    return cola;
}

//DESTRUCTOR
int eliminarCola(Cola cola){
    if(cola == NULL){
		return ESTRUCTURA_NO_INICIALIZADA;
	}
	delete(cola);
	//El tamanio ya quedo en cero por los remove tam--
	cola->primerNodo = NULL;
	return OK;
}

//INSERTAR ELEMENTO
int insertarFin(Cola cola, int item){
    ///---------------casos de error--------------
    // - no existe pila
    // - item vacio
    if(cola == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
    }
    if(item == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
    }

    ///----------casos que no haya error----------
    Nodo nuevoNodo = crearNodo(item);

    if(cola->tam == 0){
        cola->primerNodo = nuevoNodo;
        cola->tam++;
        return OK;
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

    return OK;
}

//REMOVER ELEMENTO
int removerInicio(Cola cola, int* item){
    if(cola == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
    }
    if(estaVacia(cola)){
        return ESTRUCTURA_VACIA;
    }
    Nodo aux = cola->primerNodo;
    if(item != NULL){
        *item = aux->item;
    }
    cola->primerNodo = aux->prox;
    delete(aux);
    aux = NULL;
    cola->tam--;
    return OK;
}

//MOSTRAR LISTA
void imprimirCola(Cola cola){
    int cantidad;
    obtenerTamanio(cola, &cantidad);
    printf("[");
    int i;
    for(i=0; i<cantidad; i++){
        int elemento;
        obtenerElemento(cola, &elemento, i);
        printf(" %d ", elemento);
    }
    printf("]\n");
}

//OTRAS DE UTILIDAD
int estaVacia(Cola cola){
    if(cola == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
	}
    if(cola->primerNodo == NULL){
        return TRUE;
	}
    return FALSE;
}
int obtenerElemento(Cola cola, int* item, int pos){
    if(cola == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
	}
    if(estaVacia(cola)){
        return ESTRUCTURA_VACIA;
	}
    if(pos<0 || pos>=cola->tam){
        return INDICE_INVALIDO;
	}

    if(item == NULL){
        return PARAMETRO_INVALIDO;
	}
    Nodo aux;
    aux = cola->primerNodo;
    int i;
    for(i=0; i<pos; i++){
        aux = aux->prox;
    }
    *item = aux->item;

    return OK;
}
int obtenerTamanio(Cola cola, int* tam){
    if(cola == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
	}
    if(tam == NULL){
        return PARAMETRO_INVALIDO;
	}
    *tam = cola->tam;
    return OK;
}
