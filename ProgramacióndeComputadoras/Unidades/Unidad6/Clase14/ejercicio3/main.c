#include <stdio.h>
#include <stdlib.h>

int main(){
    int *puntero;
    int x = 7;
    int y = 5;
    puntero = &x;
    x = 4;
    puntero = &y;
    printf("%d, %d", *puntero,x);
    return 0;
    //En el ejercicio 3 imprime 5 y 4, ya que el puntero al guardar la direccion de "y", despues hace la desreferencia y le da
    //como resultado 5 y el valor de "x" que era 7 fue pisado por un nuevo valor que en este caso seria 4.
}
