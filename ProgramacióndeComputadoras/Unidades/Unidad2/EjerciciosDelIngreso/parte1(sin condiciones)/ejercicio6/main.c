#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int dado1, dado2, suma;
    dado1 = 1 + rand() % 6;
    dado2 = 1 + rand() % 6;
    suma = dado1 + dado2;
    printf("En el 1er dado salio un: %d\n", dado1);
    printf("En el 2do dado salio un: %d\n", dado2);
    printf("La suma de ambos dados es: %d\n", suma);
    return 0;
}
