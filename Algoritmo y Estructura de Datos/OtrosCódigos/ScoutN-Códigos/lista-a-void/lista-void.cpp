#include <iostream>
#include "lista-void.h"

struct NodoE{
    void* data;
    Nodo prox;
};

struct ListaE{
    Nodo primerNodo;
    int tam;
};

///funciones esenciales
//constructores y destructores
Nodo crearNodo(void *data, int tamDatoBytes){

    Nodo nuevoNodo = new NodoE;
    nuevoNodo->data = malloc(tamDatoBytes);
    nuevoNodo->prox = NULL;

    if(!nuevoNodo->data){
        delete nuevoNodo;
        return nuevoNodo;
    }

    memcpy(nuevoNodo->data, data, tamDatoBytes);

    return nuevoNodo;
}

Lista crearLista(int tamDelDatoEnBytes){

    Lista nuevaLista = new ListaE;

    nuevaLista->primerNodo = NULL;
    nuevaLista->tam = 0;

    return nuevaLista;
}

void liberarLista(Lista lista){
    delete lista;
}

int insertar(Lista lista, int pos, void *data, int tamDelDatoEnBytes){

    ///---------------casos de error--------------
    //  - item vacio
    //  - no existe lista
    //  - posicion a insertar que excede a la dimension de la lista
    if(data == NULL){
        return -1;
    }

    if(!lista){
        return -1;
    }
    if(pos < 0 || pos >= lista->tam){
        return -1;
    }

    ///----------casos que no haya error----------
    Nodo nuevoNodo = crearNodo(data, tamDelDatoEnBytes);
    Nodo nodoAux = lista->primerNodo;
    int posAnterior = pos-1, i=0;

    if(pos == 0){
        nuevoNodo->prox = lista->primerNodo;
        lista->primerNodo = nuevoNodo;
        lista->tam++;

        return 1;
    }

    for(int i=0; i<posAnterior; i++){
        nodoAux = nodoAux->prox;
    }

    nuevoNodo->prox = nodoAux->prox;
    nodoAux->prox = nuevoNodo;
    lista->tam++;

    return 1;
}

int insertarInicio(Lista lista, void *data, int tamDelDatoEnBytes){

    ///---------------casos de error--------------
    //  - item vacio
    //  - no existe lista
    if(data == NULL){
        return -1;
    }

    if(!lista){
        return -1;
    }

    ///----------casos que no haya error----------
    Nodo nuevoNodo = crearNodo(data, tamDelDatoEnBytes);

    if(lista->tam == 0){
        lista->primerNodo = nuevoNodo;
        nuevoNodo->prox = NULL;
        lista->tam++;
        return 1;
    }

    nuevoNodo->prox = lista->primerNodo;
    lista->primerNodo = nuevoNodo;
    lista->tam++;

    return 1;

}

int insertarFinal(Lista lista, void *data, int tamDelDatoEnBytes){

    ///---------------casos de error--------------
    //  - item vacio
    //  - no existe lista
    //  - lista vacia

    if(data == NULL){
        return -1;
    }

    if(!lista){
        return -1;
    }

    if(estaVacia(lista)){
        return -1;
    }
    ///----------casos que no haya error----------
    Nodo nodoAux = lista->primerNodo;
    Nodo nuevoNodo = crearNodo(data, tamDelDatoEnBytes);
    int tamLista = obtenerTamanio(lista), posUltimoNodo = tamLista-1;

    for(int i=0; i<posUltimoNodo; i++){
        nodoAux = nodoAux->prox;
    }

    nodoAux->prox = nuevoNodo;
    lista->tam++;



    return 1;
}

int remover(Lista lista, int pos, void *backup, int tamDelDatoEnBytes){

    ///---------------casos de error--------------
    //  - no existe lista
    //  - posicion a insertar que excede a la dimension de la lista
    //  - lista vacia

    if(!lista){
        return -1;
    }

    if(pos < 0 || pos >= lista->tam){
        return -1;
    }

    if(estaVacia(lista)){
        return -1;
    }

    ///----------casos que no haya error----------
    Nodo nodoAux = lista->primerNodo;
    int posAnterior = pos-1, i=0;

    if(pos == 0){
        Nodo nuevoPrimerNodo = lista->primerNodo->prox;
        memcpy(backup, lista->primerNodo->data, tamDelDatoEnBytes);
        delete lista->primerNodo;
        lista->primerNodo = nuevoPrimerNodo;

        lista->tam--;

        return 1;
    }

    for(int i=0; i<posAnterior; i++){
        nodoAux = nodoAux->prox;
    }

    Nodo nuevoProx = nodoAux->prox->prox;
    memcpy(backup, nodoAux->prox->data, tamDelDatoEnBytes);
    delete nodoAux->prox;
    nodoAux->prox = nuevoProx;
    lista->tam--;

    return 1;

}

int removerInicio(Lista lista, void *backup, int tamDelDatoEnBytes){
    ///---------------casos de error--------------
    //  - no existe lista
    //  - lista vacia

    if(!lista){
        return -1;
    }

    if(estaVacia(lista)){
        return -1;
    }

    ///----------casos que no haya error----------
    Nodo nuevoPrimerNodo = lista->primerNodo->prox;

    memcpy(backup, lista->primerNodo->data, tamDelDatoEnBytes);
    delete lista->primerNodo;
    lista->primerNodo = nuevoPrimerNodo;
    lista->tam--;

    return 1;
}

int removerFinal(Lista lista, void *backup, int tamDelDatoEnBytes){
    ///---------------casos de error--------------
    //  - no existe lista
    //  - lista vacia

    if(!lista){
        return -1;
    }

    if(estaVacia(lista)){
        return -1;
    }

    ///----------casos que no haya error----------
    Nodo nodoAux = lista->primerNodo;
    int tamLista = obtenerTamanio(lista), posAnteUltimo = tamLista-2;

    if(tamLista == 1){
        memcpy(backup, lista->primerNodo, tamDelDatoEnBytes);
        delete lista->primerNodo;
        lista->primerNodo = NULL;
        lista->tam = NULL;

        return 1;
    }

    for(int i=0; i<posAnteUltimo; i++){
        nodoAux = nodoAux->prox;
    }

    memcpy(backup, nodoAux->prox->data, tamDelDatoEnBytes);
    delete nodoAux->prox;
    nodoAux->prox = NULL;
    lista->tam--;

    return 1;
}

void* obtenerDato(Lista lista, int pos){

    ///---------------casos de error--------------
    //  - no existe lista
    //  - lista vacia
    //  - posicion a insertar que excede a la dimension de la lista
    if(!lista){
        return NULL;
    }

    if(estaVacia(lista)){
        return NULL;
    }

    if(pos < 0 || pos >= lista->tam){
        return NULL;
    }

    ///----------casos que no haya error----------
    Nodo nodoAux = lista->primerNodo;

    if(pos == 0){
        return lista->primerNodo->data;
    }

    for(int i=0; i<pos; i++){
        nodoAux = nodoAux->prox;
    }

    return nodoAux->data;
}

void* obtenerPrimerDato(Lista lista){

    ///---------------casos de error--------------
    //  - no existe lista
    //  - lista vacia
    if(!lista){
        return NULL;
    }

    if(estaVacia(lista)){
        return NULL;
    }

    ///----------casos que no haya error----------
    return lista->primerNodo->data;
}

void* obtenerUltimoDato(Lista lista){

    ///---------------casos de error--------------
    //  - no existe lista
    //  - lista vacia
    if(!lista){
        return NULL;
    }

    if(estaVacia(lista)){
        return NULL;
    }

    ///----------casos que no haya error----------
    if(lista->tam == 1){
        return lista->primerNodo->data;
    }

    Nodo nodoAux = lista->primerNodo;
    int tamLista = obtenerTamanio(lista), posUltimoDato = tamLista-1;

    for(int i=0; i<posUltimoDato; i++){
        nodoAux = nodoAux->prox;
    }

    return nodoAux->data;
}

///funciones no esenciales
int estaVacia(Lista lista){

    if(lista->primerNodo == NULL){
        return TRUE;
    }

    return FALSE;
}

int obtenerTamanio(Lista lista){
    ///---------------casos de error--------------
    //  - no existe lista
    if(!lista){
        return -1;
    }
    ///----------casos que no haya error----------
    return lista->tam;
}

int obtenerDatoEnParametro(Lista lista, int pos, void *backup, int tamDelDatoEnBytes){

    ///---------------casos de error--------------
    //  - no existe lista
    //  - lista vacia
    //  - posicion a insertar que excede a la dimension de la lista
    if(!lista){
        return -1;
    }

    if(estaVacia(lista)){
        return -1;
    }

    if(pos < 0 || pos >= lista->tam){
        return -1;
    }

    ///----------casos que no haya error----------

    Nodo nodoAux = lista->primerNodo;

    if(pos == 0){
        memcpy(backup, nodoAux->data, tamDelDatoEnBytes);
        return 1;
    }

    for(int i=0; i<pos; i++){
        nodoAux = nodoAux->prox;
    }

    memcpy(backup, nodoAux->data, tamDelDatoEnBytes);

    return 1;
}
