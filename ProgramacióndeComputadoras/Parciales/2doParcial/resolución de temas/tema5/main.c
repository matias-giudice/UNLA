#include <stdio.h>
#include <stdlib.h>
#include "banda.h"
#include "lider.h"
int main(){
    printf("-----DNI: xx.xxx.xxx ----- ESTUDIANTE: xxxxx -----  \n");
    ///                    NOMBRE     GENERO   A�O      SITIO WEB       CANCION POPULAR
    Banda b1 = crearBanda("Nirvana", "Grunge", 1987, "nirvana.com", "Smells Like Tenn Spirit");
    mostrarBanda(b1);

    Banda b2 = crearBanda("The Beatles", "Rock", 1962, "thebeatles.com", "Come Together");
    mostrarBanda(b2);
    return 0;
}
