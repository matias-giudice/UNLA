#include <stdio.h>
#include <stdlib.h>

int main(){
    int *puntero;
    int x = 7;
    int y = 5;
    puntero = &x;
    *puntero = 3;
    puntero = &y;
    *puntero = x;
    x = 9;
    printf("%d, %d", *puntero,x);
    return 0;
    //En el ejercicio 4 imprime 3 y 9, ya que al guardar la direccion de "x", y despues cambiarle el valor por 3, al hacer la desreferencia en vez de mostrar 7 va a mostrar 3 y el resultado de de "x" dio 9 porque pisa el anterior valor que tenia en este caso 7.
}
