#include <stdio.h>
#include <stdlib.h>

int main(){
    //ALGORITMO: Dibujar rectangulo de 3 x 5
    //i y j para recorrer los renglones y las filas, 3 x 5
    int i = 0;
    int j = 0;
    //Recorremos lso renglones del 1 al 3
    for(i=1;i<=3;i++){
        //por caada Renglon dibujamos 5 *
        for(j=1;j<=5;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("------------------------\n");
    //Algortimo: Dibujar un triangulo de 4 renglones de 1 a 4
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("------------------------\n");
    //Triangulo invertido
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("------------------------\n");
    //Piramide
    int e = 5;
    int aux = 0;
    for(i=1;i<=5;i+=2){
        e= e-1;
        for(aux=1; aux<=e;aux++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("------------------------\n");
    //Piramide invertida
    e = 0;
    aux = 5;
    for(i=5;i>=1;i-=2){
        e= e+1;
        for(aux=1; aux<=e;aux++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
