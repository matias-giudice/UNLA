#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jugador.h"
#define CINCOMILLONES 5000000

Jugador crearJugador(char nombreJugador[30], int golesJugador, int edadJugador, float habilidadJugador){
    Jugador j = malloc(sizeof(struct estructuraJugador));

    strcpy(j->nombre, nombreJugador);
    j->goles = golesJugador;
    j->edad = edadJugador;
    j->habilidad = habilidadJugador;
    setValor(j);

    return j;
}

void destruirJugador(Jugador j){
    free(j);
}

void mostrarJugadores(Jugador j[], int tam){
    int i;
    for(i=0; i<tam; i++){
        printf("\n--------------JUGADOR----------\n");
        printf("    NOMBRE: %s \n    EDAD: %d \n    GOLES: %d \n    HABILIDAD: %.2f \n    VALOR: US$ %.2f \n",j[i]->nombre, j[i]->edad, j[i]->goles, j[i]->habilidad, j[i]->valor);
    }
}

char *getNombre(Jugador j){
    return j->nombre;
}
int getGoles(Jugador j){
    return j->goles;
}
int getEdad(Jugador j){
    return j->edad;
}
float getHabilidad(Jugador j){
    return j->habilidad;
}
float getValor(Jugador j){
    return j->valor;
}

void setNombre(Jugador j, int nuevoNombre[30]){
    strcpy(j->nombre, nuevoNombre);
}
void setGoles(Jugador j, int nuevosGoles){
    j->goles = nuevosGoles;
}
void setEdad(Jugador j, int nuevaEdad){
    j->edad = nuevaEdad;
}
void setHabilidad(Jugador j, int nuevaHabilidad){
    j->habilidad = nuevaHabilidad;
}
void setValor(Jugador j){
    j->valor = CINCOMILLONES*j->habilidad*(25/(float)j->edad)+1500*(j->goles);
}

void escribirTXT(Jugador j[], int tam){
    //Por alguna razon cuando voy a la carpeta para abrir el archivo .txt, no me aparece y lo tengo que abrir yo manualmente y decirle que lo abra como archivo .txt
    FILE * archivo = fopen("jugadores_buenos", "w");
    int i;
    for(i=0; i<tam; i++){
        if(j[i]->valor > 10000000){
            fprintf(archivo, "%s \t %d \t %d \t %.2f \t %.2f \n", j[i]->nombre, j[i]->edad, j[i]->goles, j[i]->habilidad, j[i]->valor);
        }
    }
    fclose(archivo);
    printf("\nSe ha generado el archivo \njugadores_buenos.txt \n");
}
