#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED

enum ESTADOS {FALSE=0, TRUE};
enum RECORRIDO {CONTINUAR=0, CORTAR};

struct NodoE;
typedef struct NodoE * Nodo;

struct ColaE;
typedef struct ColaE * Cola;

//constructores y destructores
Cola crearCola();
void eliminarCola(Cola cola);
Nodo crearNodo(int item);

//insertar elemento y sacar elemento
int insertarFin(Cola cola, int item);
int removerInicio(Cola cola, int* item);

//otras de utilidad
int estaVacia(Cola cola);
int obtenerPrimerElemento(Cola cola, int* item);
int obtenerTamanio(Cola cola, int* tam);

void imprimirCola(Cola cola);

#endif // COLA_H_INCLUDED
