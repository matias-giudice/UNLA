#include <stdio.h>
#include <stdlib.h>
//Determinar si un numero es par o impar
int main() {
    int n; int res;
    printf ("Introduzca un numero entero: ");
    scanf ("%d", &n);
    if (n%2==0){ //Si el resto es cero, entonces es par
        printf ("El numero es par\n");
    } else{ //de no ser asi es impar
        printf ("El numero es impar\n");
    }
return 0;
}
