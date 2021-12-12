#ifndef BOSQUE_H_INCLUDED
#define BOSQUE_H_INCLUDED
#define CANT 99
#include "arboles.h"

//ESTRUCTURA A UTILIZAR
struct estructuraBosque;
typedef struct estructuraBosque * Bosque;

//CONSTRUCTOR
Bosque crearBosquePorParametros(char nombre[30], int anios);

//DESTRUCTOR
void eliminarBosque(Bosque elementoBosque);

//MOSTRAR ARBOL
void mostrarBosque(Bosque elementoBosque);

//PEDIR DATO ESPECIFICO DE UN BOSQUE
char *getNombreBosque(Bosque elementoBosque);
int getAniosBosque(Bosque elementoBosque);

//MODIFICAR DATO ESPECIFICO DE UN BOSQUE
void setNombreBosque(Bosque elementoBosque, char nuevoNombre[30]);
void setAniosBosque(Bosque elementoBosque, int nuevoAnio);

int buscarPosVacia(Bosque elementoBosque);
int buscarPosNombre(Bosque elementoBosque, char nombre[30]);

void agregarBosque(Bosque elementoBosque, Arbol nuevoArbol);
void modificarDatos(Bosque elementoBosque, char nombreAModificar[30]);
void eliminarArboles(Bosque elementoBosque, char nombreAEliminar[30]);
void copiarEnArchivo(Bosque elementoBosque);

#endif // BOSQUE_H_INCLUDED
