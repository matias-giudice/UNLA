#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Definimos variables
    float n1, n2, n3, suma=0, promedio=0;

    //Le damos valores a las variables
    printf("Ingrese 1er numero: \n");
    scanf("%f", &n1);
    printf("Ingrese 2do numero: \n");
    scanf("%f", &n2);
    printf("Ingrese 3er numero: \n");
    scanf("%f", &n3);

    //Operaciones
    suma = n1 + n2 + n3;
    promedio = suma / 3;

    //Resultado
    printf("Promedio: %.2f \n", promedio);

    return 0;
}
