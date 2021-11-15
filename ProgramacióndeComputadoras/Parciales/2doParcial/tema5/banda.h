#ifndef BANDA_H_INCLUDED
#define BANDA_H_INCLUDED
#define TAM 30              //TAMAÑO DE CADENA DE CARACTERES
#define PAUSAR "pause"      //PAUSAR CONSOLA, ESPERA A QUE EL USUARIO PRESIONE UNA TECLA PARA CONTINUAR CON LA EJECUCION DEL PROGRAMA
#define LIMPIAR "cls"       //LIMPIAR CONSOLA
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lider.h"

//ESTRUCTURA A UTILIZAR
struct estructuraBanda;
typedef struct estructuraBanda * Banda;

//CONSTRUCTOR
Banda crearBanda(char nombreBanda[TAM], char generoBanda[TAM], int anioBanda, char sitioWebBanda[TAM], char cancionPopularBanda[TAM]);

//DESTRUCTOR
void destruirBanda(Banda b);

//MOSTRAR
void mostrarBanda(Banda b);

//GETTERS
char *getNombre(Banda b);
char *getGenero(Banda b);
int getAnio(Banda b);
char *getSitioWeb(Banda b);
char *getCancionPopular(Banda b);

//SETTERS
void setNombre(Banda b, char nuevoNombre[TAM]);
void setGenero(Banda b, char nuevoGenero[TAM]);
void setAnio(Banda b, int nuevoAnio);
void setSitioWeb(Banda b, char nuevoSitio[TAM]);
void setCancionPopular(Banda b, char nuevaCancion[TAM]);

#endif // BANDA_H_INCLUDED
