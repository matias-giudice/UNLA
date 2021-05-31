#include <stdio.h>
#include <stdlib.h>

int main(){
    float a,b,s=0,r=0,m=0,d=0;
    printf("Ingrese un numero: \n");
    scanf("%f",&a);
    printf("Ingrese otro numero: \n");
    scanf("%f",&b);
    s=a+b;
    r=a-b;
    m=a*b;
    d=a/b;
    printf("---------Operaciones---------\n");
    printf("%.1f + %.1f = %.1f\n",a,b,s);
    printf("%.1f - %.1f = %.1f\n",a,b,r);
    printf("%.1f * %.1f = %.1f\n",a,b,m);
    printf("%.1f / %.1f = %.1f\n",a,b,d);
    return 0;
}
