#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,po,c;
    printf("Ingrese la base: \n");
    scanf("%d",&a);
    printf("Ingrese la potencia: \n");
    scanf("%d",&b);
    po = 1;
    c = 1;
    while(c<=b){
        po = po * a;
        c = c + 1;
    }
    printf("%d ^ %d = %d",a,b,po);
    return 0;
}
