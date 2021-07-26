#include <stdio.h>
#include <stdlib.h>
// Pasar un número de decimal a binario.
int main(){
    int n, x=1, b=0;
    printf("Ingrese numero entero: \n");
    scanf("%d", &n);
    while(n>=1){
        if(n%2==1){
            b = b + x;
        }
        n=n/2;
        x=x*10;
    }
    printf("Binario: %d \n", b);
}
