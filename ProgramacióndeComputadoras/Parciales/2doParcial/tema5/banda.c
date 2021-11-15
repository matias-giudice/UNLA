#include "banda.h"

//ESTRUCTURA A UTILIZAR
struct estructuraBanda{
    char nombre[TAM];
    char genero[TAM];
    int anio;
    char sitioWeb[TAM];
    char cancionPopular[TAM];

    Lider liderBanda;
};

//CONSTRUCTOR
Banda crearBanda(char nombreBanda[TAM], char generoBanda[TAM], int anioBanda, char sitioWebBanda[TAM], char cancionPopularBanda[TAM]){
    struct estructuraBanda * b = malloc(sizeof(struct estructuraBanda));

    strcpy(b->nombre, nombreBanda);
    strcpy(b->genero, generoBanda);
    b->anio = anioBanda;
    strcpy(b->sitioWeb, sitioWebBanda);
    strcpy(b->cancionPopular, cancionPopularBanda);

    printf("Cargando lider de la banda: %s \n----\n", b->nombre);
    b->liderBanda = crearLiderPorTeclado();

    return b;
}

//DESTRUCTOR
void destruirBanda(Banda b){
    free(b);
}

//MOSTRAR
void mostrarBanda(Banda b){
    printf("-----------BANDA---------\n");
    printf("NOMBRE: %s \nGENERO: %s \nFUNDADA: %d \nSITIO: %s \nPOPULAR: %s \n", b->nombre, b->genero, b->anio, b->sitioWeb, b->cancionPopular);
    mostrarLider(b->liderBanda);

    printf("\n");
    system(PAUSAR);
    system(LIMPIAR);
}

//GETTERS
char *getNombre(Banda b){
    return b->nombre;
}
char *getGenero(Banda b){
    return b->genero;
}
int getAnio(Banda b){
    return b->anio;
}
char *getSitioWeb(Banda b){
    return b->sitioWeb;
}
char *getCancionPopular(Banda b){
    return b->cancionPopular;
}

//SETTERS
void setNombre(Banda b, char nuevoNombre[TAM]){
    strcpy(b->nombre, nuevoNombre);
}
void setGenero(Banda b, char nuevoGenero[TAM]){
    strcpy(b->genero, nuevoGenero);
}
void setAnio(Banda b, int nuevoAnio){
    b->anio = nuevoAnio;
}
void setSitioWeb(Banda b, char nuevoSitio[TAM]){
    strcpy(b->sitioWeb, nuevoSitio);
}
void setCancionPopular(Banda b, char nuevaCancion[TAM]){
    strcpy(b->cancionPopular, nuevaCancion);
}
