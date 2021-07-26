#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,c=0,s1=0,s2=0,s3=0,p=1,m=0,pr=0;
    while(c<=6){
        c = c + 1;
        printf("Ingrese numero: \n");
        scanf("%d",&n);
        if(n % 2 == 0){
            s1 = s1 + n;
        }else{
            p = n * p;
        }
        if(n>5){
           s2 = s2 + n;
           m = s2 / c;
        }
        if(n>20){
           s3 = s3 + n;
           pr = s3 / c;
        }
    }
    printf("Suma de pares: %d\n",s1);
    printf("Producto de impares: %d\n",p);
    printf("Media de numeros mayores a 5: %d\n",m);
    printf("Promedio de numeros mayores a 20: %d\n",pr);
    return 0;
}
