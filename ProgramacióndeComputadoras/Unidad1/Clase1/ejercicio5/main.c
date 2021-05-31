#include <stdio.h>
#include <stdlib.h>

int main()
{
    //0=FALSO y 1=VERDADERO
    //Definimos las variables a y b
    int a, b;

    //Asignamos valores a las variables a y b
    printf("Ingrese valor de a: \n");
    scanf("%d", &a);

    printf("Ingrese valor de b: \n");
    scanf("%d", &b);

    //Operación y resultado
    printf("El resultado es: %d \n", (a==b)&&((3<b)||(b<a)));

    return 0;
}
