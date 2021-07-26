#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Ingrese nro1: \n");
    scanf("%d", &a);
    printf("Ingrese nro2: \n");
    scanf("%d", &b);
    if(a>b){
        printf("El numero mayor es: %d\n", a);
    }else printf("El numero mayor es: %d\n", b);
    return 0;
}
