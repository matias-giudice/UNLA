#include <iostream>
#include "listaVoid.h"

struct NodoE{
    void*dato;
    Nodo prox;
};

struct ListaVoidE{
    Nodo inicio;
    Nodo ultimo;
    int tamanio;
    int tamDelDato;
};


/// Constructores
Nodo crearNodo(ListaVoid lista, void*dato){

    Nodo n = new NodoE;
    n->dato = malloc(sizeof(lista->tamDelDato)); /// Recordar que hay que asociar el tamanio del dato al de la lista
    if(!n->dato){delete(n); return n;}
    memcpy(n->dato,dato,lista->tamDelDato); //n->dato = dato;

    return n;
}

ListaVoid crearLista(int tamDelDato){
    ListaVoid lista = new ListaVoidE;   /// Basicamente lo mismo de antes
    lista->tamanio = 0;
    lista->inicio = lista->ultimo = NULL;
    lista->tamDelDato = tamDelDato;
    return lista;
}

/// Primitivas
int estaVacia(ListaVoid lista){
    if(lista->tamanio == 0){return 1;}
    return -1;
}

int obtenerTamanio(ListaVoid lista){
    return lista->tamanio;
}

void*obtenerDato(ListaVoid lista, int pos){
    if(!lista || lista == NULL || pos<0 || pos>=lista->tamanio || lista->tamanio<=0){return NULL;}

    if(pos==0){return lista->inicio->dato;}
    if(pos==lista->tamanio){return lista->ultimo->dato;}

    Nodo aux = lista->inicio;
    for(int i=0;i<pos;i++){
        aux = aux->prox;
    }
    return aux->dato;
}

void*obtenerDatoParametro(ListaVoid lista, int pos, void*backup){
    if(!lista || lista == NULL || pos<0 || pos>=lista->tamanio || lista->tamanio<=0){return NULL;}

    if(pos==0){return lista->inicio->dato;}
    if(pos==lista->tamanio){return lista->ultimo->dato;}

    Nodo aux = lista->inicio;
    for(int i=0;i<pos;i++){
        aux = aux->prox;
    }
    memcpy(backup,aux->dato,lista->tamDelDato);
    return NULL;
}

void mostrarLista(ListaVoid lista){
    for(int i=0 ; i<lista->tamanio ; i++){
        int e = *(int*)obtenerDato(lista,i);
        printf("[%d] ",e);
    }
}

void liberarLista(ListaVoid lista){
    while(estaVacia(lista)==1){
        removerInicio(lista,NULL);
    }
}

/// Insertar
int insertarInicio(ListaVoid lista, void*dato){

    /// Este es igual que en las listas normales, se necesita un Nodo n cuyo proximo sea el inicio de la lista
    ///     y luego hacer que el inicio de la lista se iguale a este Nodo n.
    /// Lo importante de esto, es que hay que definir si el tamanio de la lista es 0, que el ultimo de la lista
    ///     es igual a el inicio que es igual a el Nodo n.

    // Nodo n = crearNodo(lista,dato);
    // n->prox = lista->inicio;
    // lista->inicio = n;

    Nodo n = crearNodo(lista,dato);

    if(lista->tamanio==0){
        lista->inicio = lista->ultimo = n;
        n->prox = NULL;
        lista->tamanio++;
        return 1;
    }

    n->prox = lista->inicio;
    lista->inicio = n;
    lista->tamanio++;
    return 1;
}

int insertar(ListaVoid lista, void*dato, int pos){

    /// Este es igual en las listas normales, se necesita un nodo aux que recorra en un for hasta pos-1
    ///     Luego se crea un Nodo n cuyo prox es el prox del auxiliar, y luego el prox del auxiliar es n.

    // Nodo aux = lista->inicio;
    // for(int i=0 ; i<pos-1 ; i++){
    //     aux=aux->prox;
    // }
    // Nodo n = crearNodo(lista,dato);
    // n->prox = aux->prox;
    // aux->prox = n;

    if(pos == 0){return insertarInicio(lista,dato);}
    if(pos == lista->tamanio){return insertarFinal(lista,dato);}

    Nodo aux = lista->inicio;
    for(int i=0 ; i<pos-1 ; i++){
        aux=aux->prox;
    }
    Nodo n = crearNodo(lista,dato);


    if(n == NULL || !lista || lista==NULL || pos<0 || pos>lista->tamanio){return -1;}

    n->prox = aux->prox;    //Nodo n = crearNodo(dato,aux->prox);
    aux->prox = n;          //aux->prox = n;
    lista->tamanio++;
    return 1;
}

int insertarFinal(ListaVoid lista, void*dato){

    /// Similar a las listas normales, se crea un Nodo n. Luego el prox al ultimo de la lista se iguala a n
    ///     luego el ultimo es n y finalmente el prox del final es NULL

    // Nodo n = crearNodo(lista,dato);
    // lista->ultimo->prox = n;
    // lista->ultimo = n;
    // lista->ultimo->prox= NULL;

    Nodo n = crearNodo(lista,dato);

    if(lista->tamanio==0){
        lista->inicio = lista->ultimo = n;
        n->prox = NULL;
        lista->tamanio++;
        return 1;
    }else{
        lista->ultimo->prox = n;
        lista->ultimo = n;
        lista->ultimo->prox= NULL;
    }

    lista->tamanio++;
    return 1;
}

/// Remover
int removerInicio(ListaVoid lista, void*backup){

    /// Este es igual que en las listas normales, se necesita un Nodo aux que sea el inicio de la lista
    ///     y que luego el inicio de la lista sea el proximo a este aux

    // Nodo aux = lista->inicio;
    // lista->inicio = aux->prox;

    Nodo aux = lista->inicio;
    lista->inicio = aux->prox;
    if(backup!=NULL){
        memcpy(backup,lista->inicio->dato,lista->tamDelDato);
    }
    delete(aux);
    lista->tamanio--;
    return -1;
}

int remover(ListaVoid lista, int pos, void*backup){

    /// En un for hasta la pos-1, hacer que el Nodo aux pase del inicio a su proximo
    ///     luego, el Nodo n se iguala al prox del prox del aux, se deletea el prox del aux
    ///     y el prox del aux se lo iguala a n

    //Nodo aux = lista->inicio;
    //for(int i=0;i<pos-1;i++){
    //  aux = aux->prox;
    // }
    // Nodo n = aux->prox->prox;
    // delete(aux->prox);
    // aux->prox = n;

    if(!lista || lista==NULL || pos<0 || pos > lista->tamanio){return -1;}

    Nodo aux = lista->inicio;
    for(int i=0;i<pos-1;i++){
        aux = aux->prox;
    }

    Nodo n = aux->prox->prox;
    memcpy(backup,aux->prox->dato,lista->tamDelDato);
    delete(aux->prox);
    aux->prox = n;

    lista->tamanio--;

    return 1;
}

int removerFinal(ListaVoid lista, void*backup){

    Nodo aux = NULL, ultimo = NULL;
    memcpy(backup, lista->ultimo->dato, lista->tamDelDato);

    for (aux = lista->inicio; aux != lista->ultimo; aux = aux->prox){
        ultimo = aux;
    }

    free(lista->ultimo->dato);
    free(lista->ultimo);
    lista->ultimo = ultimo;
    lista->ultimo->prox = NULL;

    lista->tamanio--;
    return 1;
}
