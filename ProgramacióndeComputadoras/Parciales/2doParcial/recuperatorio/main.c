#include <stdio.h>
#include <stdlib.h>
#include "persona.h"
#include "nacimiento.h"
int main(){
    printf("-----DNI: xx.xxx.xxx ----- ESTUDIANTE: xxxxx -----  \n");
    ///                       NOMBRE   DIA MES  AÑO      CIUDAD
    Persona p1 = crearPersona("Romina", 12, 3, 1988, "Sevilla, E.");
    mostrarPersona(p1);

    Persona p2 = crearPersona("Nykolai", 9, 1, 2001, "Kiev, U.");
    mostrarPersona(p2);

    return 0;
}
/*
    Bien anidado y pensado el ejercicio, pero el signo se calcula en el constructor no solo en un void para mostrarlo.
    Examen aprobado porque usaste correctamente el getAnio que era uno de los nudos del ejercicio.
*/
