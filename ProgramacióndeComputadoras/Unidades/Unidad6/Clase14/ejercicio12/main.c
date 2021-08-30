#include <stdio.h>
#include <stdlib.h>

int main(){
    int *puntero,i;
    int x[5] = {1,2,3,4,5};
    puntero = x+4;
    *(puntero-2) = 9;
    puntero--;
    *(puntero) = 7;
    puntero[1] = 11;
    for(i=0; i<5; i++){
        printf("%d", *(x+i));
    }
    return 0;
    //En el ejercicio 12 imprime 129711, ya que el numero 9 se guarda en la tercera posición del vector, en este caso se cambia por el 3 que esta en la posición 2 y el valor 7 se cambia en la posición 3, en este caso se cambia por el 4 que esta en la posición 3 y el 11 se cambia en la posición 4, en este caso se cambia por el 5 que esta en la posición 4.
}
