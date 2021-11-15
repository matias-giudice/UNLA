#include "materia.h"

//ESTRUCTURA A UTILIZAR
struct estructuraMateria{
    int carga;
    char titular[TAM];
    int cant;
};

//CONSTRUCTOR
Materia crearMateria(int cargaMateria, char titularMateria[TAM], int cantMateria){
    struct estructuraMateria * m = malloc(sizeof(struct estructuraMateria));

    m->carga = cargaMateria;
    strcpy(m->titular, titularMateria);
    m->cant = cantMateria;

    return m;
}

//DESTRUCTOR
void destruirMateria(Materia m){
    free(m);
}

//MOSTRAR
void mostrarMateria(Materia m){
    printf("\n----------MATERIA-----------\n");
    printf("Titular: %s \nAlumnos: %d \nHoras/sem: %d \n", m->titular, m->cant, m->carga);
}

//GETTERS
int getCarga(Materia m){
    return m->carga;
}
char *getTitular(Materia m){
    return m->titular;
}
int getCant(Materia m){
    return m->cant;
}

//SETTERS
void setCarga(Materia m, int nuevaCarga){
    m->carga = nuevaCarga;
}
void setTitular(Materia m, char nuevoTitular[TAM]){
    strcpy(m->titular, nuevoTitular);
}
void setCant(Materia m, int nuevaCant){
    m->cant = nuevaCant;
}
