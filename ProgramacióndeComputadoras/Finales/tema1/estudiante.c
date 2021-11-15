#include "estudiante.h"

//ESTRUCTURA A UTILIZAR
struct estructuraEstudiante{
    char nombre[TAM];
    int edad;
    Materia materias[10];
};

//CONSTRUCTOR
Estudiante crearEstudiante(char nombreEstudiante[TAM], int edadEstudiante){
    struct estructuraEstudiante * e = malloc(sizeof(struct estructuraEstudiante));

    strcpy(e->nombre, nombreEstudiante);
    e->edad = edadEstudiante;

    int i;
    for(i=0; i<10; i++){
        e->materias[i] = crearMateria(-1, "VACIO", -1);
    }

    return e;
}

//DESTRUCTOR
void destruirEstudiante(Estudiante e){
    free(e);
}

//MOSTRAR
void mostrarEstudiante(Estudiante e){
    printf("\n\n----------ESTUDIANTE-----------\n");
    printf("Nombre: %s \nEdad: %d \n", e->nombre, e->edad);
    int i;
    for(i=0; i<10; i++){
        if(getCarga(e->materias[i]) != -1){
            mostrarMateria(e->materias[i]);
        }
    }
}

//GETTERS
char *getNombre(Estudiante e){
    return e->nombre;
}
int getEdad(Estudiante e){
    return e->edad;
}

//SETTERS
void setNombre(Estudiante e, char nuevoNombre[TAM]){
    strcpy(e->nombre, nuevoNombre);
}
void setEdad(Estudiante e, int nuevaEdad){
    e->edad = nuevaEdad;
}

void agregarMateria(Estudiante e, Materia m){
    int i;
    for(i=0; i<10; i++){
        if(getCarga(e->materias[i]) == -1){
            e->materias[i] = m;
            break;
        }
    }
}

void ordenarMateriasPorTitular(Estudiante e){
    Materia aux;
    int i, j;
    for(i=0; i<10; i++){
        for(j=0; j<10-1; j++){
            if(strcmp(getTitular(e->materias[j]), getTitular(e->materias[j+1])) < 0){ // < 0 (Mayor a menor) || == 1 (Menor a mayor)
                aux = e->materias[j];
                e->materias[j] = e->materias[j+1];
                e->materias[j+1] = aux;
            }
        }
    }
}

int cantidadDeAlumnos(Estudiante e){
    int cantAlum = 0;
    int i;
    for(i=0; i<10; i++){
        if(getCant(e->materias[i]) != -1){
            cantAlum = cantAlum + getCant(e->materias[i]);
        }
    }
    return cantAlum;
}

void eliminarMateria(Estudiante e, Materia m){
    int i;
    for(i=0; i<10; i++){
        if(e->materias[i] == m){
            e->materias[i] = crearMateria(-1, "VACIO", -1);
            break;
        }
    }
}
