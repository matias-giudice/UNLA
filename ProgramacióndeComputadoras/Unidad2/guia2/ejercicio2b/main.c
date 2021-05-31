#include <stdio.h>
#include <stdlib.h>
//Un programa que pida 4 números y los muestre de mayor a menor.
int main(){
    int a,b,c,d,r;

    printf("Ingresar 4 numeros: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);

    if(a<b){
        r=a;
        a=b;
        b=r;
    }
    if(b<c){
        r=b;
        b=c;
        c=r;
    }
    if(c<d){
        r=c;
        c=d;
        d=r;
    }
    if(a<b){
        r=a;
        a=b;
        b=r;
    }
    if(b<c){
        r=b;
        b=c;
        c=r;
    }
    if(a<b){
        r=a;
        a=b;
        b=r;
    }

    printf("el orden de mayor a menor es %d,%d,%d,%d",a,b,c,d);

    return 0;
}
