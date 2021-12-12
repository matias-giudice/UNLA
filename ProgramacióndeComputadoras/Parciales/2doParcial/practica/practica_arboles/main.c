#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include "arboles.h"
int main(){
    printf("-----DNI: xx.xxx.xxx ----- ESTUDIANTE: xxxxx -----  \n");
    agregarArbol("Laurel", 210, 2.55);
    agregarArbol("Secuoya Caucho", 150, 1.99);
    agregarArbol("Gikgo biloba", 90, 1.88);

    mostrarArbol();

    modificarArbol("Laurel");

    mostrarArbol();


    eliminarArbol("Cocotero");
    eliminarArbol("Falsa Acacia");

    mostrarArbol();

    return 0;
}
