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
    printf("%d, %d", *puntb,x);
    return 0;
    //En el ejercicio 5 imprime 3 y 9, ya que "punta" al cambiar el valor de "x" por 3, al llamar el resultado de "puntb" que tiene guardado el valor de "x", va a aparecer el valor guardado anteriormente en "punta", que seria 3 y el resultado de de "x" dio 9 porque pisa el anterior valor que tenia en este caso 7.
}
