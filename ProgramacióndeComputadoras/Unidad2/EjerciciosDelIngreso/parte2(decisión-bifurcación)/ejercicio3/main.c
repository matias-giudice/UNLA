#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    printf("Ingrese valor de a: \n");
    scanf("%d",&a);
    printf("Ingrese valor de b: \n");
    scanf("%d",&b);
    if(a<b){
        printf("Orden: %d - %d",a,b);
    }else{
        printf("Orden: %d - %d",b,a);
    }
    return 0;
}
