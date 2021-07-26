#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,cantDivisores,i;
    printf("Ingrese un numero: \n");
    scanf("%d",&n);
    if(n<=0){
        printf("El numero debe ser mayor que 0.\n");
    }else{
        cantDivisores = 0;
        i = 2;
        while(i<n){
            if(n % i == 0){
                cantDivisores = cantDivisores + 1;
            }
            i = i + 1;
        }
        if(cantDivisores==0 && n>1){
            printf("El numero %d es primo.\n",n);
        }else{
            printf("El numero %d es compuesto.\n",n);
        }
    }
    return 0;
}
