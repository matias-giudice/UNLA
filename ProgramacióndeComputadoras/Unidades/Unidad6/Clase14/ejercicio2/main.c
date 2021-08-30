#include <stdio.h>
#include <stdlib.h>

int main(){
    int *puntero;
    int x = 7;
    int y = 5;
    puntero = &x;
    x = 4;
    printf("%d, %d", *puntero,y);
    return 0;
    //En el ejercicio 2 imprime 4 y 5, ya que la variable "y" sigue con el valor 5,
    //en cambio el valor del puntero fue cambiado por la "x", ya que al guardar la direccion de "x" y despuesa hace la desreferencia y le da
    //como resultado 4.
}
