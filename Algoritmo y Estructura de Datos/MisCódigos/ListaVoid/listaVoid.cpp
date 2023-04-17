#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <time.h>
#include "listaVoid.h"

struct NodoEstructura{
    void* dato;
    Nodo prox;
};

struct ListaVoidEstructura{
    Nodo primerNodo;
    int tam;
};

//CONSTRUCTORES
Nodo crearNodo(void* dato, int tamDatoBytes){
    Nodo nuevoNodo = new NodoEstructura;
    nuevoNodo->dato = malloc(sizeof(tamDatoBytes));
    nuevoNodo->prox = NULL;

    if(!nuevoNodo->dato){
        delete nuevoNodo;
        return nuevoNodo;
    }

    memcpy(nuevoNodo->dato, dato, tamDatoBytes);

    return nuevoNodo;
}
ListaVoid crearListaVoid(int tamDelDatoEnBytes){
    ListaVoid nuevaListaVoid = new ListaVoidEstructura;

    nuevaListaVoid->primerNodo = NULL;
    nuevaListaVoid->tam = 0;

    return nuevaListaVoid;
}

//DESTRUCTOR
void eliminarListaVoid(ListaVoid listaVoid){
    delete(listaVoid);
}

//INSERTAR ELEMENTO
int insertarInicio(ListaVoid listaVoid, void *dato, int tamDelDatoEnBytes){
    ///---------------casos de error--------------
    //  - item vacio
    //  - no existe lista
    if(listaVoid == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
	}
	if(dato == NULL){
        return PARAMETRO_INVALIDO;
	}
    ///----------casos que no haya error----------
    Nodo nuevoNodo = crearNodo(dato, tamDelDatoEnBytes);
    if(nuevoNodo == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
	}

    if(listaVoid->tam == 0){
        listaVoid->primerNodo = nuevoNodo;
        nuevoNodo->prox = NULL;
        listaVoid->tam++;
        return OK;
    }

    nuevoNodo->prox = listaVoid->primerNodo;
    listaVoid->primerNodo = nuevoNodo;
    listaVoid->tam++;

    return OK;
}
int insertar(ListaVoid listaVoid, int pos, void *dato, int tamDelDatoEnBytes){
    ///---------------casos de error--------------
    //  - item vacio
    //  - no existe lista
    //  - posicion a insertar que excede a la dimension de la lista
    if(listaVoid == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
	}
    if(pos<0 || pos>listaVoid->tam){
        return INDICE_INVALIDO;
	}
	if(dato == NULL){
        return PARAMETRO_INVALIDO;
	}
	///----------casos que no haya error----------
    Nodo nuevoNodo = crearNodo(dato, tamDelDatoEnBytes);
    Nodo nodoAux = listaVoid->primerNodo;
    int posAnterior=pos-1, i=0;

    if(pos == 0){
        nuevoNodo->prox = listaVoid->primerNodo;
        listaVoid->primerNodo = nuevoNodo;
        listaVoid->tam++;

        return OK;
    }

    for(int i=0; i<posAnterior; i++){
        nodoAux = nodoAux->prox;
    }

    nuevoNodo->prox = nodoAux->prox;
    nodoAux->prox = nuevoNodo;
    listaVoid->tam++;

    return OK;
}
int insertarFinal(ListaVoid listaVoid, void *dato, int tamDelDatoEnBytes){
    ///---------------casos de error--------------
    //  - item vacio
    //  - no existe lista
    //  - lista vacia
    if(listaVoid == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
	}
	if(estaVacia(listaVoid)){
        return ESTRUCTURA_VACIA;
    }
	if(dato == NULL){
        return PARAMETRO_INVALIDO;
	}
    ///----------casos que no haya error----------
    Nodo nodoAux = listaVoid->primerNodo;
    Nodo nuevoNodo = crearNodo(dato, tamDelDatoEnBytes);
    int tamLista = obtenerTamanio(listaVoid), posUltimoNodo = tamLista-1;

    for(int i=0; i<posUltimoNodo; i++){
        nodoAux = nodoAux->prox;
    }

    nodoAux->prox = nuevoNodo;
    listaVoid->tam++;

    return OK;
}

//REMOVER ELEMENTO
int removerInicio(ListaVoid listaVoid, void *backup, int tamDelDatoEnBytes){
    ///---------------casos de error--------------
    //  - no existe lista
    //  - lista vacia
    if(listaVoid == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
    }
    if(estaVacia(listaVoid)){
        return ESTRUCTURA_VACIA;
    }
    ///----------casos que no haya error----------
    Nodo nuevoPrimerNodo = listaVoid->primerNodo->prox;

    memcpy(backup, listaVoid->primerNodo->dato, tamDelDatoEnBytes);
    delete(listaVoid->primerNodo);
    listaVoid->primerNodo = nuevoPrimerNodo;
    listaVoid->tam--;

    return OK;
}
int remover(ListaVoid listaVoid, int pos, void *backup, int tamDelDatoEnBytes){
    ///---------------casos de error--------------
    //  - no existe lista
    //  - posicion a insertar que excede a la dimension de la lista
    //  - lista vacia
    if(listaVoid == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
    }
    if(estaVacia(listaVoid)){
        return ESTRUCTURA_VACIA;
    }
    if(pos<0 || pos>=listaVoid->tam){
        return INDICE_INVALIDO;
    }
    ///----------casos que no haya error----------
    Nodo nodoAux = listaVoid->primerNodo;
    int posAnterior=pos-1, i=0;

    if(pos == 0){
        Nodo nuevoPrimerNodo = listaVoid->primerNodo->prox;
        memcpy(backup, listaVoid->primerNodo->dato, tamDelDatoEnBytes);
        delete(listaVoid->primerNodo);
        listaVoid->primerNodo = nuevoPrimerNodo;

        listaVoid->tam--;

        return OK;
    }

    for(int i=0; i<posAnterior; i++){
        nodoAux = nodoAux->prox;
    }

    Nodo nuevoProx = nodoAux->prox->prox;
    memcpy(backup, nodoAux->prox->dato, tamDelDatoEnBytes);
    delete(nodoAux->prox);
    nodoAux->prox = nuevoProx;
    listaVoid->tam--;

    return OK;
}
int removerFinal(ListaVoid listaVoid, void *backup, int tamDelDatoEnBytes){
    ///---------------casos de error--------------
    //  - no existe lista
    //  - lista vacia
    if(listaVoid == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
    }
    if(estaVacia(listaVoid)){
        return ESTRUCTURA_VACIA;
    }
    ///----------casos que no haya error----------
    Nodo nodoAux = listaVoid->primerNodo;
    int tamLista = obtenerTamanio(listaVoid), posAnteUltimo = tamLista-2;

    if(tamLista == 1){
        memcpy(backup, listaVoid->primerNodo, tamDelDatoEnBytes);
        delete(listaVoid->primerNodo);
        listaVoid->primerNodo = NULL;
        listaVoid->tam = NULL;

        return OK;
    }

    for(int i=0; i<posAnteUltimo; i++){
        nodoAux = nodoAux->prox;
    }

    memcpy(backup, nodoAux->prox->dato, tamDelDatoEnBytes);
    delete(nodoAux->prox);
    nodoAux->prox = NULL;
    listaVoid->tam--;

    return OK;
}

//MOSTRAR LISTA
void imprimirListaVoid(ListaVoid listaVoid){
    printf("[ ");
    for (int i=0; i<obtenerTamanio(listaVoid); i++) {

        float elemento;
        obtenerDatoEnParametro(listaVoid, i, &elemento, sizeof(float));
        printf("%.1f ", elemento);
    }
    printf("]");
}

//OBTENER DATO
void* obtenerDato(ListaVoid listaVoid, int pos){
   ///---------------casos de error--------------
    //  - no existe lista
    //  - posicion a insertar que excede a la dimension de la lista
    //  - lista vacia
    if(listaVoid == NULL){
        return NULL;
    }
    if(estaVacia(listaVoid)){
        return NULL;
    }
    if(pos<0 || pos>=listaVoid->tam){
        return NULL;
    }

    ///----------casos que no haya error----------
    Nodo nodoAux = listaVoid->primerNodo;
    if(pos == 0){
        return listaVoid->primerNodo->dato;
    }
    for(int i=0; i<pos; i++){
        nodoAux = nodoAux->prox;
    }

    return nodoAux->dato;
}
void* obtenerPrimerDato(ListaVoid listaVoid){
    ///---------------casos de error--------------
    //  - no existe lista
    //  - lista vacia
    if(listaVoid == NULL){
        return NULL;
    }
    if(estaVacia(listaVoid)){
        return NULL;
    }
    ///----------casos que no haya error----------
    return listaVoid->primerNodo->dato;
}
void* obtenerUltimoDato(ListaVoid listaVoid){
    ///---------------casos de error--------------
    //  - no existe lista
    //  - lista vacia
    if(listaVoid == NULL){
        return NULL;
    }
    if(estaVacia(listaVoid)){
        return NULL;
    }
    ///----------casos que no haya error----------
    if(listaVoid->tam == 1){
        return listaVoid->primerNodo->dato;
    }

    Nodo nodoAux = listaVoid->primerNodo;
    int tamLista = obtenerTamanio(listaVoid), posUltimoDato = tamLista-1;

    for(int i=0; i<posUltimoDato; i++){
        nodoAux = nodoAux->prox;
    }

    return nodoAux->dato;
}
int obtenerDatoEnParametro(ListaVoid listaVoid, int pos, void *backup, int tamDelDatoEnBytes){
    ///---------------casos de error--------------
    //  - no existe lista
    //  - posicion a insertar que excede a la dimension de la lista
    //  - lista vacia
    if(listaVoid == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
    }
    if(estaVacia(listaVoid)){
        return ESTRUCTURA_VACIA;
    }
    if(pos<0 || pos>=listaVoid->tam){
        return INDICE_INVALIDO;
    }
    ///----------casos que no haya error----------
    Nodo nodoAux = listaVoid->primerNodo;
    if(pos == 0){
        memcpy(backup, nodoAux->dato, tamDelDatoEnBytes);
        return TRUE;
    }
    for(int i=0; i<pos; i++){
        nodoAux = nodoAux->prox;
    }
    memcpy(backup, nodoAux->dato, tamDelDatoEnBytes);
    return OK;
}

//OTRAS DE UTILIDAD
int estaVacia(ListaVoid listaVoid){
    if(listaVoid == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
	}
    if(listaVoid->primerNodo == NULL){
        return TRUE;
	}
	if(listaVoid->tam == 0){
            return TRUE;
    }
    return FALSE;
}
int obtenerTamanio(ListaVoid listaVoid){
    ///---------------casos de error--------------
    //  - no existe lista
    //  - lista vacia
    if(listaVoid == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
	}
    if(listaVoid->tam == NULL){
        return PARAMETRO_INVALIDO;
	}
    ///----------casos que no haya error----------
    return listaVoid->tam;
}
float numAleatorio(){
    return rand()%40 / 10;
}
