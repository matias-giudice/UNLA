#include <stdio.h>
#include <stdlib.h>

int main(){
    int dividendo, divisor, valorMOD;
    printf("Ingrese el dividendo: \n");
    scanf("%d",&dividendo);
    printf("Ingrese el divisor: \n");
    scanf("%d",&divisor);
    valorMOD = dividendo % divisor;
    printf("\n%d MOD %d = %d \n",dividendo,divisor,valorMOD);
    return 0;
}
