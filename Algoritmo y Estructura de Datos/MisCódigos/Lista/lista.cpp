#include <iostream>
#include <stdio.h>
#include "lista.h"

struct NodoEstructura{
    int item;
    Nodo prox;
};

struct ListaEstructura{
    int tam;
    Nodo primerNodo;
};

//CONSTRUCTORES
Nodo crearNodo(int item, Nodo prox){
	Nodo nodo = new NodoEstructura;

	if(nodo == NULL){
		return NULL;
	}

    nodo->item = item;
    nodo->prox = prox; // naceli puso null

    return nodo;
}
Lista crearLista(){
	Lista lista = new ListaEstructura;

	if(lista == NULL){
		return NULL;
	}

	lista->tam = 0;
    lista->primerNodo = NULL;

    return lista;
}

//DESTRUCTOR
int eliminarLista(Lista lista){
	if(lista == NULL){
		return ESTRUCTURA_NO_INICIALIZADA;
	}
	// remove todos os elementos da lista
	while(!estaVacia(lista)){
		remover(lista, NULL, 0);
	}
	delete(lista);
	//El tamanio ya quedo en cero por los remove tam--
	lista->primerNodo = NULL;
	return OK;
}

//INSERTAR ELEMENTO
int insertarInicio(Lista lista, int item){
	if(lista == NULL){
    	return ESTRUCTURA_NO_INICIALIZADA;
	}

    Nodo nuevoNodo = crearNodo(item, lista->primerNodo);

    if(nuevoNodo == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
	}

    lista->primerNodo = nuevoNodo;
    lista->tam++;

    return OK;
}
int insertar(Lista lista, int item, int pos){
	if(lista == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
	}
    if(pos<0 || pos>lista->tam){
        return INDICE_INVALIDO;
	}

    Nodo nuevoNodo;

    if(pos == 0){
        return insertarInicio(lista, item);
    }else{
        // prepara para inserir
        Nodo aux;
        aux = lista->primerNodo;
        int i;
        for(i=0; i<pos-1; i++){
            aux = aux->prox;
        }

        // adiciona o n�
        nuevoNodo = crearNodo(item, aux->prox);

        if(nuevoNodo == NULL){
            return ESTRUCTURA_NO_INICIALIZADA;
    	}
        aux->prox = nuevoNodo;
    }
    lista->tam++;
    return OK;
}
int insertarFin(Lista lista, int item){
	return insertar(lista, item, lista->tam);
}

//REMOVER ELEMENTO
int removerInicio(Lista lista, int* item){
    if(lista == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
    }
    if(estaVacia(lista)){
        return ESTRUCTURA_VACIA;
    }
    Nodo aux = lista->primerNodo;
    if(item != NULL){
        *item = aux->item;
    }
    lista->primerNodo = aux->prox;
    delete(aux);
    aux = NULL;
    lista->tam--;
    return OK;
}
int remover(Lista lista, int* item, int pos){
    if(lista == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
    }
    if(estaVacia(lista)){
        return ESTRUCTURA_VACIA;
    }
    if(pos<0 || pos>=lista->tam){
        return INDICE_INVALIDO;
    }
    Nodo anterior, actual;
    if(pos == 0){
        return removerInicio(lista, item);
    }else{
        // prepara para remover
        anterior = NULL;
        actual = lista->primerNodo;
        for(int i=0; i<pos; i++){
            anterior = actual;
            actual = actual->prox;
        }

        // remove o n� atual
        anterior->prox = actual->prox;
        if(item != NULL){
            *item = actual->item;
        }
        delete(actual);
        actual = NULL;
    }
    lista->tam--;
    return OK;
}
int removerFin(Lista lista, int* item){
    return remover(lista, item, lista->tam-1);
}

//MOSTRAR LISTA
void imprimirLista(Lista lista){
	int cantidad;
    obtenerTamanio(lista, &cantidad);
    printf("[");
    int i;
    for(i=0; i<cantidad; i++){
        int elemento;
        obtenerElemento(lista, &elemento, i);
        printf(" %d ", elemento);
    }
    printf("]\n");
}

//OTRAS DE UTILIDAD
int estaVacia(Lista lista){
	if(lista == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
	}
    if(lista->primerNodo == NULL){
        return TRUE;
	}
    return FALSE;
}
int obtenerElemento(Lista lista, int* item, int pos){
	if(lista == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
	}
    if(estaVacia(lista)){
        return ESTRUCTURA_VACIA;
	}
    if(pos<0 || pos>=lista->tam){
        return INDICE_INVALIDO;
	}

    if(item == NULL){
        return PARAMETRO_INVALIDO;
	}
    Nodo aux;
    aux = lista->primerNodo;
    int i;
    for(i=0; i<pos; i++){
        aux = aux->prox;
    }
    *item = aux->item;

    return OK;
}
int obtenerTamanio(Lista lista, int* tam){
	if(lista == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;
	}
    if(tam == NULL){
        return PARAMETRO_INVALIDO;
	}
    *tam = lista->tam;
    return OK;
}

//ORDENAR LISTA
void ordenamientoBurbujaLista(Lista lista){
    Nodo primeraPosicion, actualPosicion;
	primeraPosicion = lista->primerNodo;
	while(primeraPosicion != NULL){
        actualPosicion = primeraPosicion->prox;
        while(actualPosicion != NULL){
            if(primeraPosicion->item > actualPosicion->item){
                int aux;
                aux = actualPosicion->item;
                actualPosicion->item = primeraPosicion->item;
                primeraPosicion->item = aux;
            }
            actualPosicion = actualPosicion->prox;
        }
        primeraPosicion = primeraPosicion->prox;
	}
}
void ordenamientoInsercionLista(Lista lista){
    Nodo actual;
    actual = lista->primerNodo;
    int cont=1, cursor, aux, k;

    while(actual != NULL){
        cursor = cont;
        //printf("\ncursor: %d ", cursor);
        aux = actual->item;
        //printf("\naux: %d ", aux);
        k = cursor-1;
        //printf("\nk: %d ", k);
        Nodo anterior = lista->primerNodo;
        for(int f=0; f<k-1; f++){
            anterior = anterior->prox;
        }
        //printf("\nAnterior: %d ", anterior->item);
        while(k>=0 && aux<anterior->item){
            anterior->prox->item = anterior->item;
            Nodo temp = lista->primerNodo;
            for(int j=0;j<k-2;j++){
                temp = temp->prox;
            }
            //printf("\nTemp: %d ", temp->item);
            anterior = temp;
            k--;
        }
        //printf("\n-- %d ", aux);
        Nodo temp2 = lista->primerNodo;
        for(int h=0; h<k; h++){
            temp2 = temp2->prox;
        }
        temp2->item = aux;
        actual = actual->prox;
        cont++;
    }
    //printf("\n\n\tLista ordenada...");
}
void ordenamientoSeleccionLista(Lista lista){
    Nodo actual, siguiente;
    int t;
    actual = lista->primerNodo;
    int minimo;
    Nodo min=lista->primerNodo;

    while(actual->prox != NULL){
        minimo = actual->item;
        min = actual;
        siguiente = actual->prox;
        while(siguiente!=NULL){
            if(siguiente->item < minimo){
                minimo = siguiente->item;
                min = siguiente;
            }
            siguiente = siguiente->prox;
        }
        t = actual->item;
        actual->item = min->item;
        min->item = t;
        actual = actual->prox;
    }
}

//BUSQUEDA ELEMENTO EN UNA LISTA
int busquedaSecuencialLista(Lista lista, int busco){
    int encontrado = -1; //Error no lo encontre
    int tam;
    obtenerTamanio(lista, &tam);
    Nodo actual = lista->primerNodo;
    for(int i=0; i<tam; i++){
        if(actual->item == busco){
            encontrado = i;
            i = tam;
        }
        actual = actual->prox;
    }
    return encontrado;
}
void busquedaBinariaLista(Lista lista, int busco) {
    int first, last, middle, tam;
    first = 0;
    last = obtenerTamanio(lista, &tam) - 1;
    middle = (first+last)/2;
    Nodo actual = lista->primerNodo;
    while(first <= last){
        if(actual->item < busco && middle < busco){
            first = middle + 1;
        }
        else if (actual->item == busco && middle == busco){
            printf("Elemento encontrado en el índice %d.\n", middle);
            break;
        }
        else{
            last = middle - 1;
        }
        middle = (first + last)/2;
    }
    if (first > last){
        printf("Elemento No encontrado en la lista.");
    }
}

