#include <stdio.h>
#include <stdlib.h>
#include "fecha.h"
Fecha cargarFecha(){
    struct EstructuraFecha * f = malloc(sizeof(struct EstructuraFecha));
    f->dia = 11;
    f->mes = 2;
    f->anio = 1999;

    strcpy(f->formatoFecha, "");
    strcat(f->formatoFecha, "Hoy es dia: ");
    char aux[10];
    itoa(f->dia,aux,10);
    strcat(f->formatoFecha,aux);
    return f;
}
Fecha cargarFechaPorParametros(int d, int m, int a){
    struct EstructuraFecha * f = malloc(sizeof(struct EstructuraFecha));
    f->dia = d;
    f->mes = m;
    f->anio = a;
    return f;
}
Fecha cargarFechaPorTeclado(){
    struct EstructuraFecha * f = malloc(sizeof(struct EstructuraFecha));
    printf("Ingrese dia: \n");
    scanf("%d", &f->dia);
    printf("Ingrese mes: \n");
    scanf("%d", &f->mes);
    printf("Ingrese anio: \n");
    scanf("%d", &f->anio);
    return f;
}
int getDia(Fecha f){
    return f->dia;
}
int getMes(Fecha f){
    return f->mes;
}
int getAnio(Fecha f){
    return f->anio;
}
char *getFormatoFecha(Fecha f){
    return f->formatoFecha;
}
void setDia(Fecha f, int nuevoDia){
    f->dia = nuevoDia;
}
void setMes(Fecha f, int nuevoMes){
    f->mes = nuevoMes;
}
void setAnio(Fecha f, int nuevoAnio){
    f->anio = nuevoAnio;
}
void destruirFecha(Fecha f){
    free(f);
}
void mostrarFecha(Fecha f){
    printf("%d -- %d -- %d \n",f->dia, f->mes, f->anio);
}
