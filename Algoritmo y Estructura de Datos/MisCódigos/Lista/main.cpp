#include <iostream>
#include <stdio.h>
#include "lista.h"
using namespace std;

int main() {
	Lista listaEnteros = crearLista();
    printf("\nEsta vacia: %d \n", estaVacia(listaEnteros));

	insertarInicio(listaEnteros, 11);
	insertarFin(listaEnteros, 21);
	insertar(listaEnteros, -13, 1);
	insertarFin(listaEnteros, 31);
	insertarFin(listaEnteros, 113);
	insertar(listaEnteros, -901, 3);
	insertar(listaEnteros, 77, 2);

	imprimirLista(listaEnteros);
    ///11 -13 77 21 -901 31 113

    printf("\nOrdernamiento Burbuja: \n");
    ordenamientoBurbujaLista(listaEnteros);
    imprimirLista(listaEnteros);
    printf("\n\n");

    printf("\nOrdernamiento por Insercion: \n");
    ordenamientoInsercionLista(listaEnteros);
    imprimirLista(listaEnteros);
    printf("\n\n");

    printf("\nOrdernamiento por Seleccion: \n");
    ordenamientoSeleccionLista(listaEnteros);
    imprimirLista(listaEnteros);
    printf("\n\n");

    printf("\nBusqueda Secuencial:\n");
    printf("Busco el 21: ----> %d (-1 ERROR / POS de la lista BIEN)\n", busquedaSecuencialLista(listaEnteros, 21));

    printf("\nBusqueda Binaria\n");
    printf("Busco el 31...\n");
    int elemento = 31;
    busquedaBinariaLista(listaEnteros, elemento);

    printf("\n\n");
    int tamanio = 0;
    obtenerTamanio(listaEnteros, &tamanio);
    printf("----->TAM: %d \n\n", tamanio);

    printf("\n\n");
    printf("\nBuscar elemento: \n");
    int numero;
    obtenerElemento(listaEnteros, &numero, 2); ///11
    printf("---->: %d \n\n", numero);
	imprimirLista(listaEnteros);

    printf("\nEliminar ultimo elemento: \n");
	removerFin(listaEnteros, NULL); ///113
    imprimirLista(listaEnteros);

    printf("\nEliminar un elemento: \n");
    remover(listaEnteros, NULL, 2); ///77
    imprimirLista(listaEnteros);

    printf("\nEliminar primer elemento: \n");
    removerInicio(listaEnteros, NULL); ///11
    imprimirLista(listaEnteros);

    printf("\n\n");
    eliminarLista(listaEnteros);

	return 0;
}

