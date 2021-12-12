#include "persona.h"

//ESTRUCTURA A UTILIZAR
struct estructuraPersona{
    char nombre[TAM];
    char signo[TAM];

    Fecha nacimiento;
};

//CONSTRUCTOR
Persona crearPersona(char nombrePersona[TAM], int diaPersona, int mesPersona, int anioPersona, char ciudadPersona[TAM]){
    struct estructuraPersona * p = malloc(sizeof(struct estructuraPersona));

    strcpy(p->nombre, nombrePersona);
    if(anioPersona%12 == 8){
        strcpy(p->signo, "Dragon");
    }else{
        strcpy(p->signo, "Otro");
    }
    p->nacimiento = crearFecha(diaPersona, mesPersona, anioPersona, ciudadPersona);

    return p;
}

//DESTRUCTOR
void destruirPersona(Persona p){
    free(p);
}

//MOSTRAR
void mostrarPersona(Persona p){
    printf("\n\n\n-----------PERSONA---------\n");
    printf("NOMBRE: %s \nSIGNO: %s \n", p->nombre, p->signo);
    /*No lo pude hacer
    printf("NOMBRE: %s \nSIGNO: %s \n", p->nombre, calcularSignoPersona(p->nacimiento));
    */
    mostrarFecha(p->nacimiento);
}
/*void calcularSignoPersona(Persona p){
    if(getAnioFecha(p->nacimiento)%12 == 8){
        strcpy(p->signo, "Dragon");
    }else{
        strcpy(p->signo, "Otro");
    }
}*/

//GETTERS
char *getNombre(Persona p){
    return p->nombre;
}


//SETTERS
void setNombre(Persona p, char nuevoNombre[TAM]){
    strcpy(p->nombre, nuevoNombre);
}

