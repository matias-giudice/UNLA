#include <stdio.h>
#include <stdlib.h>
//Pedir que se ingrese un numero por teclado. Calcular el factorial del numero. POSITIVOS
int main(){
    int n,i,f=1;
    printf("Ingresar numero: \n");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        f=f*i;
    }
    printf("\nFactorial de %d es = %d\n",n,f);
    return 0;
}
