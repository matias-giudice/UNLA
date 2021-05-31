#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,acu,num,f,x,c;
    printf("Ingrese un numero: \n");
    scanf("%d",&num);
    if(num<0){
        printf("El numero %d no se puede calcular.");
    }else{
        x = 1;
        f = 1;
        while(x<=num){
            f = f * x;
            x = x + 1;
        }
        printf("%d != %d",num,f);
    }
    return 0;
}
