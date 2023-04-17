#ifndef LISTAVOID_H_INCLUDED
#define LISTAVOID_H_INCLUDED

typedef struct NodoE * Nodo;
typedef struct ListaVoidE * ListaVoid;

/// Constructores
Nodo crearNodo(ListaVoid lista, void*dato);

ListaVoid crearLista(int tamDelDato);

/// Primitivas
int estaVacia(ListaVoid lista);

int obtenerTamanio(ListaVoid lista);

void*obtenerDato(ListaVoid lista, int pos);

void*obtenerDatoParametro(ListaVoid lista, int pos, void*backup);

void mostrarLista(ListaVoid lista);

void liberarLista(ListaVoid lista);

/// Insertar
int insertarInicio(ListaVoid lista, void*dato);

int insertar(ListaVoid lista, void*dato, int pos);

int insertarFinal(ListaVoid lista, void*dato);

/// Remover
int removerInicio(ListaVoid lista, void*backup);

int remover(ListaVoid lista, int pos, void*backup);

int removerFinal(ListaVoid lista, void*backup);


#endif // LISTAVOID_H_INCLUDED
