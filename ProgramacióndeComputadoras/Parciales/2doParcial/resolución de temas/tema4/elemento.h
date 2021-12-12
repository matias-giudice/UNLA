#ifndef ELEMENTO_H_INCLUDED
#define ELEMENTO_H_INCLUDED

//ESTRUCTURA A UTILIZAR
struct estructuraElemento{
    int nroAtomo;
    char simb[30];
    char nombre[30];
    char tipo[30];
    int cantNeutrones;
    int nroMasico;
    int cantProtones;
    int cantElectrones;
};

typedef struct estructuraElemento * Elemento;

//CONSTRUCTOR
Elemento crearElemento(int nroAtomoElemento, char simbElemento[30], char nombreElemento[30], char tipoElemento[30], int cantNeutronesElemento);

//DESTRUCTOR
void destruirElemento(Elemento e);

//MOSTRAR
void mostrarElementos(Elemento e[], int tam);

//GETTERS
int getNroAtomo(Elemento e);
char *getSimb(Elemento e);
char *getNombre(Elemento e);
char *getTipo(Elemento e);
int getCantNeutrones(Elemento e);
int getNroMasico(Elemento e);
int getCantProtones(Elemento e);
int getCantElectrones(Elemento e);

//SETTERS
void setNroAtomo(Elemento e, int nuevoNroAtomo);
void setSimb(Elemento e, int nuevoSimb[30]);
void setNombre(Elemento e, int nuevoNombre[30]);
void setTipo(Elemento e, int nuevoTipo[30]);
void setCantNeutrones(Elemento e, int nuevaCantNeutrones);
void setMasico(Elemento e);
void setCantProtones(Elemento e);
void setCantElectrones(Elemento e);

//ORDENAMIENTO
void ordenarElementos(Elemento tabla[], int tam);

#endif // ELEMENTO_H_INCLUDED
