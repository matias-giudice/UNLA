#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,c=2,mitad,bandera=0;
    printf("Ingrese un numero positivo: \n");
    scanf("%d",&n);
    if(n % 2 == 0){
        mitad = n / 2;
    }else{
        mitad = (n-1) / 2;
    }
    while(c <= mitad){
        if(n % c == 0){
            bandera = 1;
        }
         c++;
    }
    if(bandera == 0){
        printf("El numero %d es primo.\n",n);
    }else{
        printf("El numero %d no es primo.\n",n);
    }
    return 0;
}
