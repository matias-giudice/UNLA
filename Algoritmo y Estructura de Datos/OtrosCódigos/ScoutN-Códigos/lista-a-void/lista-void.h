#ifndef LISTA-VOID_H_INCLUDED
#define LISTA-VOID_H_INCLUDED

enum Booleanos {FALSE, TRUE};
enum Recorrido {CONTINUAR, CORTAR};

struct NodoE;
typedef struct NodoE * Nodo;

struct ListaE;
typedef struct ListaE *  Lista;

//constructores y destructores
Nodo crearNodo(void *data, int tamDatoBytes);
Lista crearLista(int tamDelDatoEnBytes);
void liberarLista(Lista lista);

int insertar(Lista lista, int pos, void *data, int tamDelDatoEnBytes);
int insertarInicio(Lista lista, void *data, int tamDelDatoEnBytes);
int insertarFinal(Lista lista, void *data, int tamDelDatoEnBytes);

int remover(Lista lista, int pos, void *backup, int tamDelDatoEnBytes);
int removerInicio(Lista lista, void *backup, int tamDelDatoEnBytes);
int removerFinal(Lista lista, void *backup, int tamDelDatoEnBytes);

void* obtenerDato(Lista lista, int pos);
void* obtenerPrimerDato(Lista lista);
void* obtenerUltimoDato(Lista lista);

///funciones no esenciales
int estaVacia(Lista lista);
int obtenerTamanio(Lista lista);
int obtenerDatoEnParametro( Lista lista, int pos, void *backup, int tamDelDatoEnBytes);

#endif // LISTA-VOID_H_INCLUDED
