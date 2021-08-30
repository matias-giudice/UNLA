#include <stdio.h>
#include <stdlib.h>

int main(){
    int *punta, *puntb;
    int x = 7;
    int y = 5;
    punta = &x;
    *punta = 3;
    puntb = &y;
    *puntb = x;
    x = 9;
    printf("%d, %d", *puntb,*punta);
    return 0;
    //En el ejercicio 6 imprime 3 y 9, ya que el resultado de "puntb" dio 3 porque esta mostrando el valor de "x" que tenia guardado en "punta" y "punta" al cambiar el valor de "x" por 3 y despues por 9, al llamar el resultado de "punta" que tiene guardado el valor de "x", va a aparecer el valor que se guardo al final que seria 9.
}
