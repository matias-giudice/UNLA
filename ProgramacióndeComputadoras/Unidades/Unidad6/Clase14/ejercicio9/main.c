#include <stdio.h>
#include <stdlib.h>

int main(){
    int *puntero,i;
    int x[5] = {1,2,3,4,5};
    puntero = &x[0];
    *puntero = 9;
    puntero[3] = 7;
    for(i=0; i<5; i++){
        printf("%d", x[i]);
    }
    return 0;
    //En el ejercicio 9 imprime 92375, ya que el numero 9 se guarda en la primera posicion del vector, en este caso se cambia por el 1 que esta en la posicion 0 y el valor 7 se cambia en la posicion 3, en este caso se cambia por el 4 que esta en la posicion 3.
}
