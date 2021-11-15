#include <stdio.h>
#include <stdlib.h>
#include "banda.h"
#include "lider.h"
int main(){
    printf("ESTUDIANTE: MATIAS DAMIAN GIUDICE ---- DNI: 43.626.738 \n\n");
    ///                    NOMBRE     GENERO   AÑO      SITIO WEB       CANCION POPULAR
    Banda b1 = crearBanda("Nirvana", "Grunge", 1987, "nirvana.com", "Smells Like Tenn Spirit");
    mostrarBanda(b1);

    Banda b2 = crearBanda("The Beatles", "Rock", 1962, "thebeatles.com", "Come Together");
    mostrarBanda(b2);
    return 0;
}
