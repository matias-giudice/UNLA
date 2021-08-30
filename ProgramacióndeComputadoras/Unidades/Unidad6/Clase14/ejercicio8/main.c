#include <stdio.h>
#include <stdlib.h>

int main(){
    int *puntero,i;
    int x[5] = {1,2,3,4,5};
    puntero = x;
    *puntero = 9;
    for(i=0; i<5; i++){
        printf("%d", x[i]);
    }
    return 0;
    //En el ejercicio 8 imprime 92345, ya que el numero 9 se guarda en la primera posicion del vector, en este caso se cambia por el 1 que esta en la posicion 0.
}
