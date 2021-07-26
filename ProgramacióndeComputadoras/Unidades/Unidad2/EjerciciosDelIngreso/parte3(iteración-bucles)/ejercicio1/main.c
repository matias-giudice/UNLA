#include <stdio.h>
#include <stdlib.h>

int main(){
    int contarHasta, contador;
    printf("Hasta cuanto contamos? \n");
    scanf("%d",&contarHasta);
    for(contador=1; contador<contarHasta; contador++){
        printf("%d",contador);
    }
    return 0;
}
