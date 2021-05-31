#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,c=1;
    printf("Ingrese un numero positivo: \n");
    scanf("%d",&n);
    while(n>=10){
        n /= 10;
        c = c + 1;
    }
    printf("El numero %d tiene %d cifras.\n",n,c);
    return 0;
}
