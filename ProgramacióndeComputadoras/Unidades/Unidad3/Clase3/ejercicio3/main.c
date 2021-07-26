#include <stdio.h>
#include <stdlib.h>
//Pedir que se ingrese un numero por consola. Una vez ingresado mostrar por pantalla, ES PRIMO o NO ES PRIMO.
//Recordar que un numero primo tiene solo dos divisores. (NEGATIVOS)
int main(){
    int n, x=1, contador=0;
    printf("Ingrese n: \n");
    scanf("%d", &n);
    if(n<0){
        n=n*(-1);
    }
    while(x<=n){
        if(n%x==0){
            contador=contador+1;
        }
        x=x+1;
    }
    if(contador==2){
        printf("Es primo: %d",n);
    }else{
        printf("No es primo: %d",n);
    }
    return 0;
}
