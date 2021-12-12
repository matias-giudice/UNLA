#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jugador.h"

Jugador crearJugador(char n[30], int g, int e, float h){
    Jugador jugador = malloc (sizeof(struct estructuraJugador));

    strcpy(jugador->nombre, n);
    jugador->goles = g;
    jugador->edad = e;
    jugador->habilidad = h;
    jugador->valor = ((5000000 * (jugador->habilidad)) * (25 / (jugador->edad)) + (1500 * (jugador->goles)));

    return jugador;

}
void mostrarJugadores(Jugador j[], int t){
    int i;
    for(i=0; i<t; i++){
        if (j[i]->edad==-1) continue;
        printf("----------- JUGADOR ---------- \n");
        printf("    NOMBRE: %s \n    GOLES: %d \n    EDAD: %d \n    HABILIDAD: %.2f \n    VALOR: US$ %.2f \n\n", j[i]->nombre, j[i]->goles, j[i]->edad, j[i]->habilidad, j[i]->valor);
    }
}
/* NO LLEGUE A TERMINARLO
void escribirTXT(Jugador j, int t){
    FILE * archivo = fopen("jugadores_buenos.txt", "a");
    int contador = 0;
    while(!feof(archivo)){
        char aux[30] = " ";
        fgets(aux, 30, archivo);
        j[contador] = pasarCharAStruct(aux, 30);
        contador++;
    }
    fclose(archivo);
}
*/
