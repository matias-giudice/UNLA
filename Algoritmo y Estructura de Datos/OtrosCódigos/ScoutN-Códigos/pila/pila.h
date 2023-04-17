#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

enum ESTADOS {FALSE=0, TRUE};
enum RECORRIDO {CONTINUAR=0, CORTAR};

struct NodoE;
typedef struct NodoE * Nodo;

struct PilaE;
typedef struct PilaE * Pila;

//constructores y destructores
Pila crearPila();
void eliminarPila(Pila pila);
Nodo crearNodo(int item);

//insertar elmeneto y sacar elemento
int insertarFin(Pila pila, int item);
int removerFin(Pila pila, int* item);

//otras de utilidad
int estaVacia(Pila pila);
int obtenerUltimoElemento(Pila pila, int* item);
int obtenerTamanio(Pila pila, int* tam);

void imprimirPila(Pila pila);

#endif // PILA_H_INCLUDED
