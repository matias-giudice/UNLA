#ifndef CARRERA_H_INCLUDED
#define CARRERA_H_INCLUDED
#define TAM 30              //TAMAÑO DE CADENA DE CARACTERES
#define PAUSAR "pause"      //PAUSAR CONSOLA, ESPERA A QUE EL USUARIO PRESIONE UNA TECLA PARA CONTINUAR CON LA EJECUCION DEL PROGRAMA
#define LIMPIAR "cls"       //LIMPIAR CONSOLA
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "materia.h"

//ESTRUCTURA A UTILIZAR
struct estructuraCarrera;
typedef struct estructuraCarrera * Carrera;

///CONSTRUCTOR
// PRE: El elemento no debe haberse creado
// POST: Se crea el elemento con los valores que le llega por los parametrosn nombre y duracion y crea el elemento2 con null en carga, nombre y cantidad
Carrera crearCarrera(char nombreCarrera[TAM], int duracionCarrera);

///DESTRUCTOR
// PRE: El elemento debe haberse creado
// POST: Se libera la memoria del elemento eliminado
void destruirCarrera(Carrera c);

///MOSTRAR
// PRE: El elemento debe haberse creado
// POST: Se mostrara los datos del elemento
void mostrarCarrera(Carrera c);

///GETTERS
// PRE: Elemento creado con crearCarrera()
// POST: Obtiene el dato almacenado en el elemento apuntado por nombre.
char *getNombre(Carrera c);
// PRE: Elemento creado con crearCarrera()
// POST: Obtiene el dato almacenado en el elemento apuntado por duracion.
int getDuracion(Carrera c);

///SETTERS
// PRE: Elemento creado con crearCarrera()
// POST: Se almacena el nuevo dato modificado en el elemento
void setNombre(Carrera c, char nuevoNombre[TAM]);
// PRE: Elemento creado con crearCarrera()
// POST: Se almacena el nuevo dato modificado en el elemento
void setDuracion(Carrera c, int nuevaDuracion);

///AGREGAR MATERIA ELEMENTO2
// PRE: El elemento debe haberse creado
// POST: Se almacena los datos del elemento2 al elemento1 que anteriormente se inicializo en null
void agregarMateria(Carrera c, Materia m);

///ORDENAMIENTO BURBUJA ELEMENTO2
// PRE: El elemento debe haberse creado
// POST: Se ordena el elemento2 en forma descendente
void ordenarMateriasPorTitular(Carrera c);

///CALCULA CANTIDAD ELEMENTO2
// PRE: El elemento debe haberse creado
// POST: Se calcula la cantidad del elemento2
int cantidadDeAlumnos(Carrera c);

///DESTRUCTOR ELEMENTO2
// PRE: El elemento debe haberse creado
// POST: Se libera la memoria del elemento eliminado
void eliminarMateria(Carrera c, Materia m);

#endif // CARRERA_H_INCLUDED
