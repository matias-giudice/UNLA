#include <stdio.h>
#include <stdlib.h>
#include "jugador.h"
int main(){
    printf("ESTUDIANTE: MATIAS DAMIAN GIUDICE ---- DNI: 43.626.738 \n\n");
    ///                             NOMBRE   GOLES EDAD HABILIDAD
    Jugador j1 = crearJugador("Juan M. Lucero", 11, 29, 0.21);
    Jugador j2 = crearJugador("Lionel Messi", 753, 34, 2.66);
    Jugador j3 = crearJugador("Kylian Mbappe", 165, 22, 2.87);
    Jugador j4 = crearJugador("Crist. Ronaldo", 793, 36, 2.58);

    Jugador plantel[4] = {j1, j2, j3, j4};

    ordenarJugadores(plantel, 4); ///Ordena Por valor
    mostrarJugadores(plantel, 4); ///Muestra ordenados ya

    return 0;
}
