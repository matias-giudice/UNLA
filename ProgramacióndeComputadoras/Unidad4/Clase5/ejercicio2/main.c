#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j;
    float vector[10],s=0,p=0;
    for(i=0; i<10; i++){
        printf("Por favor ingrese la altura que desea guardar en la posicion %d\n",i);
        scanf("%f",&vector[i]);
    }
    float max = vector[0];
    float min = max;
    for(j=0; j<10; j++){
        if(vector[j]>max){
            max = vector[j];
        }
        if(vector[j]<min){
            min = vector[j];
        }
        s = s + vector[j];
        p = ((float)s) / 10;
    }
    printf("\nEl maximo es: %.2f\n",max);
    printf("\nEl minimo es: %.2f\n",min);
    printf("\nEl promedio es: %.2f\n",p);
    printf("\nAlturas en las posicione pares: %.2f %.2f %.2f %.2f %.2f %.2f",vector[0],vector[2],vector[4],vector[6],vector[8],vector[10]);
    return 0;
}
