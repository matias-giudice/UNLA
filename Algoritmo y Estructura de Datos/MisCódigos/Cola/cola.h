#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED

enum ESTADOS{PARAMETRO_INVALIDO=-4, INDICE_INVALIDO, ESTRUCTURA_VACIA, ESTRUCTURA_NO_INICIALIZADA, FALSE, TRUE, OK=1};
enum RECORRIDO{CONTINUAR=0, CORTAR};

struct NodoEstructura;
typedef struct NodoEstructura * Nodo;

struct ColaEstructura;
typedef struct ColaEstructura * Cola;

//CONSTRUCTORES
Nodo crearNodo(int item);
Cola crearCola();

//DESTRUCTOR
int eliminarCola(Cola cola);

//INSERTAR ELEMENTO
int insertarFin(Cola cola, int item);

//REMOVER ELEMENTO
int removerInicio(Cola cola, int* item);

//MOSTRAR LISTA
void imprimirCola(Cola cola);

//OTRAS DE UTILIDAD
int estaVacia(Cola cola);
int obtenerElemento(Cola cola, int* item, int pos);
int obtenerTamanio(Cola cola, int* tam);

#endif // COLA_H_INCLUDED
