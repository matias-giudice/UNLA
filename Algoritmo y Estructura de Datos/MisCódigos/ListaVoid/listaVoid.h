#ifndef LISTAVOID_H_INCLUDED
#define LISTAVOID_H_INCLUDED

enum ESTADOS{ PARAMETRO_INVALIDO=-4, INDICE_INVALIDO, ESTRUCTURA_VACIA, ESTRUCTURA_NO_INICIALIZADA, FALSE, TRUE, OK=1};
enum Recorrido {CONTINUAR, CORTAR};

struct NodoEstructura;
typedef struct NodoEstructura * Nodo;

struct ListaVoidEstructura;
typedef struct ListaVoidEstructura *  ListaVoid;

//CONSTRUCTORES
Nodo crearNodo(void* dato, int tamDatoBytes);
ListaVoid crearListaVoid(int tamDelDatoEnBytes);

//DESTRUCTOR
void eliminarListaVoid(ListaVoid listaVoid);

//INSERTAR ELEMENTO
int insertarInicio(ListaVoid listaVoid, void *dato, int tamDelDatoEnBytes);
int insertar(ListaVoid listaVoid, int pos, void *dato, int tamDelDatoEnBytes);
int insertarFinal(ListaVoid listaVoid, void *dato, int tamDelDatoEnBytes);

//REMOVER ELEMENTO
int removerInicio(ListaVoid listaVoid, void *backup, int tamDelDatoEnBytes);
int remover(ListaVoid listaVoid, int pos, void *backup, int tamDelDatoEnBytes);
int removerFinal(ListaVoid listaVoid, void *backup, int tamDelDatoEnBytes);

//MOSTRAR LISTA
void imprimirListaVoid(ListaVoid listaVoid);

//OBTENER DATO
void* obtenerDato(ListaVoid listaVoid, int pos);
void* obtenerPrimerDato(ListaVoid listaVoid);
void* obtenerUltimoDato(ListaVoid listaVoid);
int obtenerDatoEnParametro(ListaVoid listaVoid, int pos, void *backup, int tamDelDatoEnBytes);

//OTRAS DE UTILIDAD
int estaVacia(ListaVoid listaVoid);
int obtenerTamanio(ListaVoid listaVoid);
float numAleatorio();
//int obtenerElemento(ListaVoid listaVoid, int* item, int pos);

#endif // LISTAVOID_H_INCLUDED
