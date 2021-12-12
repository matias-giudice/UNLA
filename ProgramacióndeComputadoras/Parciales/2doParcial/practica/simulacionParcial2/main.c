#include <stdio.h>
#include <stdlib.h>
#include "arboles.h"
#include "bosque.h"

int main(){
    Bosque amazona = crearBosquePorParametros("Amazona",1997);
    mostrarBosque(amazona);
    /*Arbol arbol3 = agregarArbolPorParametros("Laurel", 210, 2.55);
    Arbol arbol4 = agregarArbolPorParametros("Secuoya Caucho", 150, 1.99);
    Arbol arbol5 = agregarArbolPorParametros("Gikgo biloba", 90, 1.88);

    agregarBosque(amazona,arbol3);
    agregarBosque(amazona,arbol4);
    agregarBosque(amazona,arbol5);

    mostrarBosque(amazona);


    printf("---------------Luego de las modificaciones-----------------\n\n\n");

    modificarDatos(amazona,"Laurel");

    mostrarBosque(amazona);

    printf("---------------Eliminamos 2 arboles-----------------\n\n\n");


    eliminarArboles(amazona,"Cocotero");
    eliminarArboles(amazona,"Falsa Acacia");


    mostrarBosque(amazona);

    copiarEnArchivo(amazona);
*/


};


