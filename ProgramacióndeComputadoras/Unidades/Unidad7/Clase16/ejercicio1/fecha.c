#include <stdio.h>
#include <stdlib.h>
#include "fecha.h"
Fecha cargarFecha(){
    struct EstructuraFecha * f = malloc(sizeof(struct EstructuraFecha));
    f->dia = 11;
    f->mes = 2;
    f->anio = 1999;
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
void mostrarFecha(Fecha f){
    printf("%d -- %d -- %d \n",f->dia, f->mes, f->anio);
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
void setDia(Fecha f, int nuevoDia){
    f->dia = nuevoDia;
}
void setMes(Fecha f, int nuevoMes){
    f->mes = nuevoMes;
}
void setAino(Fecha f, int nuevoAnio){
    f->anio = nuevoAnio;
}
