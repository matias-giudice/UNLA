#include <stdio.h>
#include <stdlib.h>

int main(){
    int *puntero,i;
    int x[5] = {1,2,3,4,5};
    puntero = x;
    *(puntero+2) = 9;
    *(x+3) = 7;
    puntero[1] = 11;
    for(i=0; i<5; i++){
        printf("%d", *(puntero+i));
    }
    return 0;
    //En el ejercicio 11 imprime 111975, ya que el numero 11 se guarda en la segunda posición del vector, en este caso se cambia por el 2 que esta en la posición 1 y el valor 7 se cambia en la posición 3, en este caso se cambia por el 4 que esta en la posición 3.
}
