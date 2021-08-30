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
    puntb = punta;
    printf("%d, %d", *puntb,y);
    return 0;
    //En el ejercicio 7 imprime 9 y 3, ya que "puntb" tiene el ultimo valor de "x" que se guardo y el valor "y" cambia de 5 a 3 porque al final se igualan "puntb" y "punta" y que da guardado el valor 3 en y.
}
