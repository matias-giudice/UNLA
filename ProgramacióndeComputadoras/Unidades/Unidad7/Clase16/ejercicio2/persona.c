#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"
struct EstructuraPersona{
    int dni;
    int edad;
    char nombre[TAM];
};
Persona cargarPersona(){
    struct EstructuraPersona * p = malloc(sizeof(struct EstructuraPersona));
    p->dni = 43234678;
    p->edad = 26;
    strcpy(p->nombre, "Jose");
    return p;
}
Persona cargarPersonaPorParametros(int d, int e, char n[TAM]){
    struct EstructuraPersona * p = malloc(sizeof(struct EstructuraPersona));
    p->dni = d;
    p->edad = e;
    strcpy(p->nombre, n);
    return p;
}
Persona cargarPersonaPorTeclado(){
    struct EstructuraPersona * p = malloc(sizeof(struct EstructuraPersona));
    printf("Ingrese dni: \n");
    scanf("%d", &p->dni);
    printf("Ingrese edad: \n");
    scanf("%d", &p->edad);
    printf("Ingrese nombre: \n");
    fflush(stdin);
    gets(&p->nombre);
    return p;
}
int getDni(Persona p){
    return p->dni;
}
int getEdad(Persona p){
    return p->edad;
}
char *getNombre(Persona p){
    return p->nombre;
}

void setDni(Persona p, int nuevoDni){
    p->dni = nuevoDni;
}
void setEdad(Persona p, int nuevoEdad){
    p->edad = nuevoEdad;
}
void setNombre(Persona p, int nuevoNombre[TAM]){
    strcpy(p->nombre, nuevoNombre);
}

void destruirPersona(Persona p){
    free(p);
}

void mostrarPersona(Persona p){
    printf("\n %d -- %d -- %s \n",p->dni, p->edad, p->nombre);
}
