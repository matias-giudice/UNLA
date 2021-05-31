#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5,b=3,c=-12;
    printf("Punto A: \n");
    if(a>3){
        printf("Verdadero!\n");
    }else printf("Falso!\n");
    printf("\nPunto B: \n");
    if(a>c){
        printf("Verdadero!\n");
    }else printf("Falso!\n");
    printf("\nPunto C: \n");
    if(a<c){
        printf("Verdadero!\n");
    }else printf("Falso!\n");
    printf("\nPunto D: \n");
    if(b<c){
        printf("Verdadero!\n");
    }else printf("Falso!\n");
    printf("\nPunto E: \n");
    if(b!=c){
        printf("Verdadero!\n");
    }else printf("Falso!\n");
    printf("\nPunto F: \n");
    if(a==3){
        printf("Verdadero!\n");
    }else printf("Falso!\n");
    printf("\nPunto G: \n");
    if(a*b==15){
        printf("Verdadero!\n");
    }else printf("Falso!\n");
    printf("\nPunto H: \n");
    if(a*b==-30){
        printf("Verdadero!\n");
    }else printf("Falso!\n");
    printf("\nPunto I: \n");
    if(c/b<a){
        printf("Verdadero!\n");
    }else printf("Falso!\n");
    printf("\nPunto J: \n");
    if(c/b==-10){
        printf("Verdadero!\n");
    }else printf("Falso!\n");
    printf("\nPunto K: \n");
    if(c/b==-4){
        printf("Verdadero!\n");
    }else printf("Falso!\n");
    printf("\nPunto L: \n");
    if(a+b+c==5){
        printf("Verdadero!\n");
    }else printf("Falso!\n");
    printf("\nPunto M: \n");
    if((a+b==8)&&(a-b==2)){
        printf("Verdadero!\n");
    }else printf("Falso!\n");
    printf("\nPunto N: \n");
    if((a+b==8)||(a-b==6)){
        printf("Verdadero!\n");
    }else printf("Falso!\n");
    printf("\nPunto O: \n");
    if((a>3)&&(b>3)&&(c<3)){
        printf("Verdadero!\n");
    }else printf("Falso!\n");
    printf("\nPunto P: \n");
    if((a>3)&&(b>=3)&&(c<-3)){
        printf("Verdadero!\n");
    }else printf("Falso!\n");
    return 0;
}
