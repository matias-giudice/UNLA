#include "carrera.h"

//ESTRUCTURA A UTILIZAR
struct estructuraCarrera{
    char nombre[TAM];
    int duracion;
    Materia materias[10];
};

//CONSTRUCTOR
Carrera crearCarrera(char nombreCarrera[TAM], int duracionCarrera){
    struct estructuraCarrera * c = malloc(sizeof(struct estructuraCarrera));

    strcpy(c->nombre, nombreCarrera);
    c->duracion = duracionCarrera;

    int i;
    for(i=0; i<10; i++){
        c->materias[i] = crearMateria(-1, "VACIO", -1);
    }

    return c;
}

//DESTRUCTOR
void destruirCarrera(Carrera c){
    free(c);
}

//MOSTRAR
void mostrarCarrera(Carrera c){
    printf("\n\n----------CARRERA-----------\n");
    printf("Nombre: %s \nDuracion: %d \n", c->nombre, c->duracion);
    int i;
    for(i=0; i<10; i++){
        if(getCarga(c->materias[i]) != -1){
            mostrarMateria(c->materias[i]);
        }
    }
}

//GETTERS
char *getNombre(Carrera c){
    return c->nombre;
}
int getDuracion(Carrera c){
    return c->duracion;
}

//SETTERS
void setNombre(Carrera c, char nuevoNombre[TAM]){
    strcpy(c->nombre, nuevoNombre);
}
void setDuracion(Carrera c, int nuevaDuracion){
    c->duracion = nuevaDuracion;
}

void agregarMateria(Carrera c, Materia m){
    int i;
    for(i=0; i<10; i++){
        if(getCarga(c->materias[i]) == -1){
            c->materias[i] = m;
            break;
        }
    }
}

void ordenarMateriasPorTitular(Carrera c){
    Materia aux;
    int i, j;
    for(i=0; i<10; i++){
        for(j=0; j<10-1; j++){
            if(strcmp(getTitular(c->materias[j]), getTitular(c->materias[j+1])) < 0){ // < 0 (Mayor a menor) || == 1 (Menor a mayor)
                aux = c->materias[j];
                c->materias[j] = c->materias[j+1];
                c->materias[j+1] = aux;
            }
        }
    }
}

int cantidadDeAlumnos(Carrera c){
    int cantAlum = 0;
    int i;
    for(i=0; i<10; i++){
        if(getCant(c->materias[i]) != -1){
            cantAlum = cantAlum + getCant(c->materias[i]);
        }
    }
    return cantAlum;
}

void eliminarMateria(Carrera c, Materia m){
    int i;
    for(i=0; i<10; i++){
        if(c->materias[i] == m){
            c->materias[i] = crearMateria(-1, "VACIO", -1);
            break;
        }
    }
}
