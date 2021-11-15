#include "lider.h"
//ESTRUCTURA A UTILIZAR
struct estructuraLider{
    char nombre[30];
    int anio;
    char ciudadNatal[30];
    char estado[30];
};

//CONSTRUCTOR
Lider crearLider(char nombreLider[TAM], int anioLider, char ciudadNatalLider[TAM], char estadoLider[TAM]){
    struct estructuraLider * l = malloc(sizeof(struct estructuraLider));

    strcpy(l->nombre, nombreLider);
    l->anio = anioLider;
    strcpy(l->ciudadNatal, ciudadNatalLider);
    strcpy(l->estado, estadoLider);

    return l;
}
Lider crearLiderPorTeclado(){
    char nombre[TAM] = "";
    char ciudadNatal[TAM] = "";
    char estado[TAM] = "";
    int anio = 0;

    printf("Por favor ingrese su nombre: \n");
    fflush(stdin);
    gets(nombre);

    printf("\nPor favor ingrese su ciudad natal: \n");
    fflush(stdin);
    gets(ciudadNatal);

    printf("\nPor favor ingrese su estado: \n");
    fflush(stdin);
    gets(estado);

    printf("\nPor favor ingrese su anio de nacimiento: \n");
    scanf("%d", &anio);
    fflush(stdin);

    struct estructuraLider * l = malloc(sizeof(struct estructuraLider));

    return crearLider(nombre, anio, ciudadNatal, estado);
}

//DESTRUCTOR
void destruirLider(Lider l){
    free(l);
}

//MOSTRAR
void mostrarLider(Lider l){
    printf("---------LIDER-------\n");
    printf("    NOMBRE: %s \n    NACIDO: %d \n    CIUDAD: %s \n    ESTADO: %s \n", l->nombre, l->anio, l->ciudadNatal, l->estado);
}

//GETTERS
char *getNombreLider(Lider l){
    return l->nombre;
}
int getAnioLider(Lider l){
    return l->anio;
}
char *getCiudadNatalLider(Lider l){
    return l->ciudadNatal;
}
char *getEstadoLider(Lider l){
    return l->estado;
}

//SETTERS
void setNombreLider(Lider l, char nuevoNombre[TAM]){
    strcpy(l->nombre, nuevoNombre);
}
void setAnioLider(Lider l, int nuevoAnio){
    l->anio = nuevoAnio;
}
void setCiudadNatalLider(Lider l, char nuevaCiudad[TAM]){
    strcpy(l->ciudadNatal, nuevaCiudad);
}
void setEstadoLider(Lider l, char nuevoEstado[TAM]){
    strcpy(l->estado, nuevoEstado);
}
