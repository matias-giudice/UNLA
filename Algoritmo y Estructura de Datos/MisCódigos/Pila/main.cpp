#include <iostream>
#include <stdio.h>
#include "pila.h"
using namespace std;

int main(){
    Pila pilaEnteros = crearPila();

	insertarFin(pilaEnteros, 11);
	insertarFin(pilaEnteros, 21);
	insertarFin(pilaEnteros, -13);
	insertarFin(pilaEnteros, 31);
	insertarFin(pilaEnteros, 113);
	insertarFin(pilaEnteros, -901);
	insertarFin(pilaEnteros, 77);

	imprimirPila(pilaEnteros);

    ///11 21 -13 31 113 -901 77
    printf("\n\n");
    int tamanio = 0;
    obtenerTamanio(pilaEnteros, &tamanio);
    printf("----->TAM: %d \n\n", tamanio);

    printf("\n\n");
    printf("\nBuscar elemento: \n");
    int numero;
    obtenerElemento(pilaEnteros, &numero, 2); ///-13
    printf("---->: %d \n\n", numero);
	imprimirPila(pilaEnteros);
    int num;
    printf("\nEliminar ultimo elemento: \n");
	removerFin(pilaEnteros, &num); ///113
    imprimirPila(pilaEnteros);

    printf("\n\n");
    eliminarPila(pilaEnteros);

    return 0;
}
