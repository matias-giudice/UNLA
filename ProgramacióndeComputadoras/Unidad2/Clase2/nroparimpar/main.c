#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Ingrese un numero: \n");
    scanf("%d", &n);

    if((n%2==0)){ //Condicion IF-ELSE (Si-Sino)
        printf("El numero es par.");
    }else printf("El numero es impar.");
    return 0;
}
