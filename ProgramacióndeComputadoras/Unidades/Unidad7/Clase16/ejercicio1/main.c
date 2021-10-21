#include <stdio.h>
#include <stdlib.h>
#include "fecha.h"
int main(){
    printf("TDA PASO 1: \n");
    Fecha fecha1 = cargarFecha();
    Fecha fecha2 = cargarFechaPorParametros(23,9,2001);
    Fecha fecha3 = cargarFechaPorTeclado();
    mostrarFecha(fecha1);
    mostrarFecha(fecha2);
    mostrarFecha(fecha3);
    printf("Dia: %d \n",getDia(fecha1));
    return 0;
}
