#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,s=0;
    while(n>0 && s<1500){
        printf("Ingrese un numero positivo: \n");
        scanf("%d",&n);
        s = s + n;
    }
    printf("\nSuma: %d",s);
    return 0;
}
