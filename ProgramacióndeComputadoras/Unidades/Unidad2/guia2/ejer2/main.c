#include <stdio.h>
#include <stdlib.h>
//Escribir un programa que escriba la calificación correspondiente a una nota.
int main(){
    float n;
    printf("Ingrese nota: \n");
    scanf("%f", &n);
    if(n<5.0){
        printf("Suspenso. \n");
    }
    if(n>5 && n<6.5){
        printf("Aprobado. \n");
    }
    if(n>6.5 && n<8.5){
        printf("NOtable. \n");
    }
    if(n>8.5 && n<10){
        printf("Sobresaliente. \n");
    }
    if(n==10){
        printf("Matricula de honor. \n");
    }
    return 0;
}
