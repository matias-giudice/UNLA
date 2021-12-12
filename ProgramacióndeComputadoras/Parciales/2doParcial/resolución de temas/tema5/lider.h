#ifndef LIDER_H_INCLUDED
#define LIDER_H_INCLUDED
#include "banda.h"

//ESTRUCTURA A UTILIZAR
struct estructuraLider;
typedef struct estructuraLider * Lider;

//CONSTRUCTOR
Lider crearLider(char nombreLider[TAM], int anioLider, char ciudadNatalLider[TAM], char estadoLider[TAM]);
Lider crearLiderPorTeclado();

//DESTRUCTOR
void destruirLider(Lider l);

//MOSTRAR
void mostrarLider(Lider l);

//GETTERS
char *getNombreLider(Lider l);
int getAnioLider(Lider l);
char *getCiudadNatalLider(Lider l);
char *getEstadoLider(Lider l);

//SETTERS
void setNombreLider(Lider l, char nuevoNombre[TAM]);
void setAnioLider(Lider l, int nuevoAnio);
void setCiudadNatalLider(Lider l, char nuevaCiudad[TAM]);
void setEstadoLider(Lider l, char nuevoEstado[TAM]);

#endif // LIDER_H_INCLUDED
