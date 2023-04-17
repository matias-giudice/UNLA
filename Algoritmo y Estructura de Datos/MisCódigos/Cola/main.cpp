#include <iostream>
#include <stdio.h>
#include "cola.h"

using namespace std;

int main(){
    Cola colaEnteros = crearCola();

	insertarFin(colaEnteros, 11);
	insertarFin(colaEnteros, 21);
	insertarFin(colaEnteros, -13);
	insertarFin(colaEnteros, 31);
	insertarFin(colaEnteros, 113);
	insertarFin(colaEnteros, -901);
	insertarFin(colaEnteros, 77);

	imprimirCola(colaEnteros);

    ///11 21 -13 31 113 -901 77
    printf("\n\n");
    int tamanio = 0;
    obtenerTamanio(colaEnteros, &tamanio);
    printf("----->TAM: %d \n\n", tamanio);

    printf("\n\n");
    printf("\nBuscar elemento: \n");
    int numero;
    obtenerElemento(colaEnteros, &numero, 2); ///-13
    printf("---->: %d \n\n", numero);
	imprimirCola(colaEnteros);

    int num;
    printf("\nEliminar primer elemento: \n");
    removerInicio(colaEnteros, NULL); ///11
    imprimirCola(colaEnteros);

    printf("\n\n");
    eliminarCola(colaEnteros);

    return 0;
}
