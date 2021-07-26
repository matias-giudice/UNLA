#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float a, r, l;
    printf("Introduzca radio: \n");
    scanf("%f", &r);

    a = 3.141592 * r * r;
    l = 2*(3.141592*r);

    printf( "Area: %.1f\n", a);

    printf( "Longitud: %.1f\n", l);

    return 0;
}
