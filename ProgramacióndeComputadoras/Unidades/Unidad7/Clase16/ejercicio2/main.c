#include <stdio.h>
#include <stdlib.h>
#include "persona.h"
int main(){
    Persona per1 = cargarPersona();
    Persona per2 = cargarPersonaPorParametros(53455234,12,"Antonio");
    Persona per3 = cargarPersonaPorTeclado();
    mostrarPersona(per1);
    mostrarPersona(per2);
    mostrarPersona(per3);

    printf("\n Nombre: %s \n",getNombre(per1));
    setNombre(per1, "Verdes");
    printf("\n Nombre: %s \n",getNombre(per1));

    mostrarPersona(per1);
    destruirPersona(per1);
    return 0;
}
