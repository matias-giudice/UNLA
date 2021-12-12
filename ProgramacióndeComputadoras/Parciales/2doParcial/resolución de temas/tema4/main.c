#include <stdio.h>
#include <stdlib.h>
#include "elemento.h"
int main(){
    printf("-----DNI: xx.xxx.xxx ----- ESTUDIANTE: xxxxx -----  \n");
    ///                     NroAtom  Sim     Nombre        Tipo   CantNeutrones
    Elemento e1 = crearElemento(25, "Mn", "Manganeso", "Transicion", 30);
    Elemento e2 = crearElemento(36, "Kp", "Kripton", "Gas Noble", 50);
    Elemento e3 = crearElemento(11, "Na", "Sodio", "Metal Alcalino", 12);

    Elemento tabla[3] = {e1, e2, e3};

    mostrarElementos(tabla, 3);
    ordenarElementos(tabla, 3);
    printf("\nOrdenados\n");
    mostrarElementos(tabla, 3);

    return 0;
}
/*
    1- Crear 3 elementos
    2- Mostrar los 3 elementos
    3- Ordenar los 3 elementos por número másico, y
    mostrarlos
*/
