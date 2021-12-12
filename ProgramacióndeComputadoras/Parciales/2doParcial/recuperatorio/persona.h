#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#define TAM 30              //TAMAÑO DE CADENA DE CARACTERES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nacimiento.h"

//ESTRUCTURA A UTILIZAR
struct estructuraPersona;
typedef struct estructuraPersona * Persona;

//CONSTRUCTOR
Persona crearPersona(char nombrePersona[TAM], int diaPersona, int mesPersona, int anioPersona, char ciudadPersona[TAM]);

//DESTRUCTOR
void destruirPersona(Persona p);

//MOSTRAR
void mostrarPersona(Persona p);

//GETTERS
char *getNombre(Persona p);
int getDia(Persona p);
int getMes(Persona p);
int getAnio(Persona p);
char *getCiudad(Persona p);

//SETTERS
void setNombre(Persona p, char nuevoNombre[TAM]);
void setDia(Persona p, int nuevoDia);
void setMes(Persona p, int nuevoMes);
void setAnio(Persona p, int nuevoAnio);
void setCiudad(Persona p, char nuevaCiudad[TAM]);

void calcularSignoPersona(Persona p);
#endif // PERSONA_H_INCLUDED
