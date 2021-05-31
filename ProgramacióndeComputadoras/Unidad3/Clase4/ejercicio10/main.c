#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, cont, a, b, c;
    printf ("Ingrese un numero: \n");
    scanf ("%d", &n);
    cont = 0;
    a=0;
    b=1;

    while (n != cont) {
        cont = cont + 1;
        c=a+b;
        b=a;
        a=c;
    }
    printf ("El numero en la sucesion de Fibonacci es %d y esta en la posicion: %d", c, cont);
    return 0;
}
