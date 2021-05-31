#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    printf("Ingrese valor de a: \n");
    scanf("%d",&a);
    printf("Ingrese valor de b: \n");
    scanf("%d",&b);
    if(a%b==0){
        printf("Son multiplos. \n");
    }else{
        printf("No son multiplos. \n");
    }
    return 0;
}
