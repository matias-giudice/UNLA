#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    printf("Ingrese valor de a: \n");
    scanf("%d",&a);
    if(a % 2 == 0 && a % 5 != 0){
        printf("%d es multiplo de 2 y no de 5. \n",a);
    }else{
        printf("%d no es multiplo de 2 o es multiplo de 5. \n",a);
    }
    return 0;
}
