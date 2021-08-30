#include <stdio.h>
#include <stdlib.h>

int main(){
    int *puntero;
    int x = 7;
    int y = 5;
    puntero = &x;
    *puntero = 4;
    printf("%d, %d", x,y);
    return 0;
    //En el ejercicio 1 imprime 4 y 5, ya que la variable "y" sigue con el valor 5,
    //en cambio el valor de "x" fue cambiado por el puntero, asignandole un nuevo valor en este caso fue cambiado el 7 por el 4.
}
