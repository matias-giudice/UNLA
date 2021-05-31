#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    printf("---------------- U4:Arreglos - Ejercicio 3 ----------------\n\n");
    int op,i,tamanio,renglon,columna;
    int cantVer,cantHor;
    printf("Desea cargar un vector y una matriz?(1=Si o 0=No)\n");
    scanf("%d",&op);
    while(op!=0){
        printf("Ingrese el tamanio del vector: \n");
        scanf("%d",&tamanio);
        int vector[tamanio];
        for(i=0; i<tamanio; i++){
            printf("Ingrese valor para la %d posicion: \n",i);
            scanf("%d",&vector[i]);
        }
        printf("[");
        for(i=0; i<tamanio; i++){
            printf(" %d ",vector[i]);
        }
        printf("]");
        printf("\n----------------------------------------------\n");
        printf("Ingrese el tamanio de la matriz: \n");
        printf("Ingrese cant. de columnas: \n");
        scanf("%d",&cantVer);
        printf("Ingrese cant. de filas: \n");
        scanf("%d",&cantHor);
        int matriz[cantVer][cantHor];
        //cargar la matriz
        for(renglon = 0; renglon < cantHor; renglon ++){
            for(columna = 0; columna<cantVer; columna++){
                printf("Valor [%d][%d] : ",renglon,columna); // nos imprimira por que columna y fila (coordenada) estamos
                scanf("%d",&matriz[renglon][columna]); // se asigna el valor a la matrix
            }
        }
        //mostrar la matriz
        for(renglon = 0; renglon < cantHor; renglon ++){
            for(columna = 0; columna<cantVer; columna++){
                printf("%d " , matriz[columna][renglon] );
            }
            printf("\n" );
        }
        printf("Desea cargar un vector y una matriz?(1=Si o 0=No)\n");
        scanf("%d",&op);
    }
    return 0;
}
