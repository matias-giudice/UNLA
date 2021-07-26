#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    printf("Ingrese valor de a: \n");
    scanf("%d",&a);
    if(a % 3 == 0 && a % 5 == 0){
        printf("Es multiplo de 3 y 5. \n");
    }else{
        printf("No es multiplo de 3 y 5. \n");
    }
    return 0;
}
