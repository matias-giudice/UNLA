#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED
#define TAM 30              //TAMAÑO DE CADENA DE CARACTERES
#define PAUSAR "pause"      //PAUSAR CONSOLA, ESPERA A QUE EL USUARIO PRESIONE UNA TECLA PARA CONTINUAR CON LA EJECUCION DEL PROGRAMA
#define LIMPIAR "cls"       //LIMPIAR CONSOLA
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "materia.h"

//ESTRUCTURA A UTILIZAR
struct estructuraEstudiante;
typedef struct estructuraEstudiante * Estudiante;

//CONSTRUCTOR
Estudiante crearEstudiante(char nombreEstudiante[TAM], int edadEstudiante);

//DESTRUCTOR
void destruirEstudiante(Estudiante e);

//MOSTRAR
void mostrarEstudiante(Estudiante e);

//GETTERS
char *getNombre(Estudiante e);
int getEdad(Estudiante e);

//SETTERS
void setNombre(Estudiante e, char nuevoNombre[TAM]);
void setEdad(Estudiante e, int nuevaEdad);

void agregarMateria(Estudiante e, Materia m);

void ordenarMateriasPorTitular(Estudiante e);

int cantidadDeAlumnos(Estudiante e);

void eliminarMateria(Estudiante e, Materia m);

#endif // ESTUDIANTE_H_INCLUDED
