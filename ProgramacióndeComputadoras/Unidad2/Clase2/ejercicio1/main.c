#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Ingrese un numero: \n");
    scanf("%d", &n);
    if((n%2==0)){
        printf("El numero es par.\n");
    }else printf("El numero es impar.\n");

    if((n%5==0)){
        printf("El numero es multiplo de 5.\n");
    }else printf("El numero no es multiplo de 5.\n");
    return 0;
}
