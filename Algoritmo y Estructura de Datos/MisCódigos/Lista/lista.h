#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

enum ESTADOS{ PARAMETRO_INVALIDO=-4, INDICE_INVALIDO, ESTRUCTURA_VACIA, ESTRUCTURA_NO_INICIALIZADA, FALSE, TRUE, OK=1};

struct NodoEstructura;
typedef struct NodoEstructura * Nodo;

struct ListaEstructura;
typedef struct ListaEstructura * Lista;

//CONSTRUCTORES
Nodo crearNodo(int item, Nodo prox);
Lista crearLista();

//DESTRUCTOR
int eliminarLista(Lista lista);

//INSERTAR ELEMENTO
int insertarInicio(Lista lista, int item);
int insertar(Lista lista, int item, int pos);
int insertarFin(Lista lista, int item);

//REMOVER ELEMENTO
int removerInicio(Lista lista, int* item);
int remover(Lista lista, int* item, int pos);
int removerFin(Lista lista, int* item);

//MOSTRAR LISTA
void imprimirLista(Lista lista);

//OTRAS DE UTILIDAD
int estaVacia(Lista lista);
int obtenerElemento(Lista lista, int* item, int pos);
int obtenerTamanio(Lista lista, int* tam);

//ORDENAR LISTA
void ordenamientoBurbujaLista(Lista lista);
void ordenamientoInsercionLista(Lista lista);
void ordenamientoSeleccionLista(Lista lista);

//BUSQUEDA ELEMENTO EN UNA LISTA
int busquedaSecuencialLista(Lista lista, int busco);
void busquedaBinariaLista(Lista lista, int busco);
#endif // LISTA_H_INCLUDED
