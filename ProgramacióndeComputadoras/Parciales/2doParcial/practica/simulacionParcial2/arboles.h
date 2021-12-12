#ifndef ARBOLES_H_INCLUDED
#define ARBOLES_H_INCLUDED
#define TAM 30

//ESTRUCTURA A UTILIZAR
struct estructuraArbol;
typedef struct estructuraArbol * Arbol;

//CONSTRUCTORES
//void agregarArbol();
Arbol agregarArbolPorTeclado(char n[TAM]);
Arbol agregarArbolPorParametros(char n[TAM], int e, float a);

//DESTRUCTOR
void eliminarArbol(Arbol elementoArbol);

//MOSTRAR ARBOL
void mostrarArbol(Arbol elementoArbol);

//PEDIR DATO ESPECIFICO DE UN ARBOL
char *getNombre(Arbol elementoArbol);
int getEdad(Arbol elementoArbol);
float getAltura(Arbol elementoArbol);

//MODIFICAR DATO ESPECIFICO DE UN ARBOL
void setNombre(Arbol elementoArbol, char nuevoNombre[TAM]);
void setEdad(Arbol elementoArbol, int nuevaEdad);
void setAltura(Arbol elementoArbol, float nuevaAltura);

Arbol cargarCharAStructArbol(char lectura[], int t);
#endif // ARBOLES_H_INCLUDED
