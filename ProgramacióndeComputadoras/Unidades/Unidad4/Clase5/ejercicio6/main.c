#include <stdio.h>
#include <stdlib.h>

int main(){
    float n,vectorA[3],vectorB[3],vectorS[3],vectorR[3],vectorM[3],vectorMP[3];
    int i,j;
    printf("Ingrese para cada vector 3 valores: \n");
    for(i=0; i<3; i++){
        printf("Ingrese un numero para el 1er vector: \n");
        scanf("%f",&vectorA[i]);
        printf("Ingrese un numero para el 2do vector: \n");
        scanf("%f",&vectorB[i]);
        vectorS[i] = ((float)vectorA[i]) + ((float)vectorB[i]);
        vectorR[i] = ((float)vectorA[i]) - ((float)vectorB[i]);
        vectorM[i] = ((float)vectorA[i]) * ((float)vectorB[i]);
    }
    for(j=0; j<1; j++){
        printf("\nIngrese un numero el cual va a multiplicar el vector 1: \n");
        scanf("%d",&n);
        vectorMP[j] = ((float)vectorA[i]) * n;
    }
    printf("\nV1 (%.1f,%.1f,%.1f)\n",vectorA[0],vectorA[1],vectorA[2]);
    printf("V2 (%.1f,%.1f,%.1f)\n",vectorB[0],vectorB[1],vectorB[2]);
    printf("\nSuma de vectores: \n");
    printf("V3 (%.1f,%.1f,%.1f)\n",vectorS[0],vectorS[1],vectorS[2]);
    printf("\nResta de vectores: \n");
    printf("V3 (%.1f,%.1f,%.1f)\n",vectorR[0],vectorR[1],vectorR[2]);
    printf("\nProducto escalar de vectores: \n");
    printf("V3 (%.1f,%.1f,%.1f)\n",vectorM[0],vectorM[1],vectorM[2]);
    printf("\nProducto por un escalar de vectores: \n");
    printf("V3 (%.1f,%.1f,%.1f)\n",vectorMP[0],vectorMP[1],vectorMP[2]);
    return 0;
}
