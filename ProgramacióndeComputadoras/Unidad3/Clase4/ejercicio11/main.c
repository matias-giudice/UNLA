#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,c=0,s=0,p=0;
    while(n != 0){
        printf("Ingrese numero: \n");
        scanf("%d",&n);
        c = c + 1;
        s = s + n;
    }
    p = s / c;
    printf("El valor medio es: %d\n",p);
    return 0;
}
