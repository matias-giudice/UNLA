#include <stdio.h>
#include <stdlib.h>

int main(){
    int dividendo,divisor,resultado,cociente,resto;
    printf("Ingrese el dividendo: \n");
    scanf("%d",&dividendo);
    printf("Ingrese el divisor: \n");
    scanf("%d",&divisor);
    resultado = (dividendo - divisor);
    while(resultado <= 0){
        printf("Ingrese nuevamente el dividendo: \n");
        scanf("%d",&dividendo);
        printf("Ingrese nuevamente el divisor: \n");
        scanf("%d",&divisor);
    }
    cociente = (resultado-divisor);
    resto = (cociente-divisor);
    printf("%d - %d = %d\n",dividendo,divisor,resultado);
    printf("%d - %d = %d\n",resultado,divisor,cociente);
    printf("%d - %d = %d\n",cociente,divisor,resto);
    printf("El cociente es: %d y el resto de la division es: %d\n",cociente,resto);
    return 0;
}
