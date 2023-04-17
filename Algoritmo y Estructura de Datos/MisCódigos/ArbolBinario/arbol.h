#ifndef ARBOL_H_INCLUDED
#define ARBOL_H_INCLUDED

struct NodoEstructura;
typedef struct NodoEstructura * Nodo;

Nodo nuevoNodo(int dato);
void insertarNodo(Nodo nodo, int dato);

void preOrden(Nodo nodo);
void inOrder(Nodo nodo);
void postOrden(Nodo nodo);

Nodo buscarNodo(Nodo nodo, int dato);

#endif // ARBOL_H_INCLUDED
