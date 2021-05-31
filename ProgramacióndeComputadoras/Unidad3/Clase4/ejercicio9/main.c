#include <stdio.h>
#include <stdlib.h>

int main(){
    float n=1, a=0;

    while((n>0) && (a<=1500)){
        printf("ingrese numero positivo: \nCero o negativo para salir \n");
        scanf("%f", n);
        if(n>0){
            a=a+n;
        }
    }
    printf("Datos finales: \nNumero: %f\nAcumulador: %f", n, a);
    return 0;
}
