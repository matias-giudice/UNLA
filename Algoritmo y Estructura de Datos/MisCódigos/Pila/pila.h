#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

enum ESTADOS{PARAMETRO_INVALIDO=-4, INDICE_INVALIDO, ESTRUCTURA_VACIA, ESTRUCTURA_NO_INICIALIZADA, FALSE, TRUE, OK=1};
enum RECORRIDO{CONTINUAR=0, CORTAR};

struct NodoEstructura;
typedef struct NodoEstructura * Nodo;

struct PilaEstructura;
typedef struct PilaEstructura * Pila;

//CONSTRUCTORES
Nodo crearNodo(int item);
Pila crearPila();

//DESTRUCTOR
int eliminarPila(Pila pila);

//INSERTAR ELEMENTO
int insertarFin(Pila pila, int item);

//REMOVER ELEMENTO
int removerFin(Pila pila, int* item);

//MOSTRAR LISTA
void imprimirPila(Pila pila);

//OTRAS DE UTILIDAD
int estaVacia(Pila pila);
int obtenerElemento(Pila pila, int* item, int pos);
int obtenerTamanio(Pila pila, int* tam);

#endif // PILA_H_INCLUDED
