#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,vector[20];
    for(i=0; i<20; i++){
        printf("Por favor ingrese el numero que desea guardar en la posicion %d\n",i);
        scanf("%d",&vector[i]);
    }
    int max = vector[0];
    int min = max;
    for(j=0; j<20; j++){
        if(vector[j]>max){
            max = vector[j];
        }
        if(vector[j]<min){
            min = vector[j];
        }
    }
    printf("\nEl maximo es: %d\n",max);
    printf("\nEl minimo es: %d\n",min);
    printf("\nArray de derecha a izquierda\n");
    for (i = 20-1;i>=0;i--){
        printf("%d ",vector[i]);
    }
    printf("\n");
    return 0;
}
