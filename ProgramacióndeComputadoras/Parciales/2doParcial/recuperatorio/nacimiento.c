#include "nacimiento.h"

//ESTRUCTURA A UTILIZAR
struct estructuraFecha{
    int dia;
    int mes;
    int anio;
    char ciudad[TAM];
};

//CONSTRUCTOR
Fecha crearFecha(int diaFecha, int mesFecha, int anioFecha, char ciudadFecha[TAM]){
    struct estructuraFecha * f = malloc(sizeof(struct estructuraFecha));

    f->dia = diaFecha;
    f->mes = mesFecha;
    f->anio = anioFecha;
    strcpy(f->ciudad, ciudadFecha);

    return f;
}

//DESTRUCTOR
void destruirFecha(Fecha f){
    free(f);
}

//MOSTRAR
void mostrarFecha(Fecha f){
    printf("\n    ---------NACIDO--------\n");
    printf("    FECHA: %d/%d/%d \n    EN: %s \n", f->dia, f->mes, f->anio, f->ciudad);
}

//GETTERS
int getDiaFecha(Fecha f){
    return f->dia;
}
int getMesFecha(Fecha f){
    return f->mes;
}
int getAnioFecha(Fecha f){
    return f->anio;
}
char *getCiudadFecha(Fecha f){
    return f->ciudad;
}

//SETTERS
void setDiaFecha(Fecha f, int nuevoDia){
    f->dia = nuevoDia;
}
void setMesFecha(Fecha f, int nuevoMes){
    f->mes = nuevoMes;
}
void setAnioFecha(Fecha f, int nuevoAnio){
    f->anio = nuevoAnio;
}
void setCiudadFecha(Fecha f, char nuevaCiudad[TAM]){
    strcpy(f->ciudad, nuevaCiudad);
}
