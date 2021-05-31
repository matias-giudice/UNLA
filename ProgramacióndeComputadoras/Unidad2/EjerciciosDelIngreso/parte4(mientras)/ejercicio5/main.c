#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,resto;
    printf("Ingrese valor de a: \n");
    scanf("%d",&a);
    printf("Ingrese valor de b: \n");
    scanf("%d",&b);
    resto = a % b;
    while(resto != 0){
        a = b;
        b = resto;
        resto = a % b;
    }
    printf("MCD es: %d\n",b);
    return 0;
}
