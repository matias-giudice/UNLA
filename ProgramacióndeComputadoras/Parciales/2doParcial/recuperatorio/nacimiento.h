#ifndef NACIMIENTO_H_INCLUDED
#define NACIMIENTO_H_INCLUDED
#define TAM 30              //TAMAÑO DE CADENA DE CARACTERES
#include "persona.h"

//ESTRUCTURA A UTILIZAR
struct estructuraFecha;
typedef struct estructuraFecha * Fecha;

//CONSTRUCTOR
Fecha crearFecha(int diaFecha, int mesFecha, int anioFecha, char ciudadFecha[TAM]);

//DESTRUCTOR
void destruirFecha(Fecha f);

//MOSTRAR
void mostrarFecha(Fecha f);

//GETTERS
int getDiaFecha(Fecha f);
int getMesFecha(Fecha f);
int getAnioFecha(Fecha f);
char *getCiudadFecha(Fecha f);

//SETTERS
void setDiaFecha(Fecha f, int nuevoDia);
void setMesFecha(Fecha f, int nuevoMes);
void setAnioFecha(Fecha f, int nuevoAnio);
void setCiudadFecha(Fecha f, char nuevaCiudad[TAM]);

#endif // NACIMIENTO_H_INCLUDED
