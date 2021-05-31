#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    printf("---------------- U4:Arreglos - Ejercicio 2 ----------------\n\n");
    int renglon,columna,i,j;
    int cantVer = 4; //meses
    int cantHor = 4; //empresas
    int matriz1[cantVer][cantHor]; //matriz1[4][4]
    int matriz2[cantVer][cantHor]; //matriz2[4][4]
    //cargar la matriz
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            matriz1[columna][renglon] = rand() % 10;
            matriz2[columna][renglon] = rand() % 10;
        }
    }
    //mostrar la matriz
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("%d " , matriz1[columna][renglon] );
        }
        printf("\n" );
    }
    printf("\n" );
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("%d " , matriz2[columna][renglon] );
        }
        printf("\n" );
    }
    printf("\n" );
    //Se calcula la suma:
    printf("La suma de las matrices es: \n");
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("[%d] + [%d] = [%d]    ",matriz1[columna][renglon],matriz2[columna][renglon], (matriz1[columna][renglon])+matriz2[columna][renglon]);
        }
        printf("\n");
    }
    printf("\n");
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("[%d] ",(matriz1[columna][renglon])+matriz2[columna][renglon]);
        }
        printf("\n");
    }
    printf("\n----------------------------------------------\n");
    //Se calcula la resta:
    printf("La resta de las matrices es: \n");
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("[%d] - [%d] = [%d]    ",matriz1[columna][renglon],matriz2[columna][renglon], (matriz1[columna][renglon])-matriz2[columna][renglon]);
        }
        printf("\n");
    }
    printf("\n");
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("[%d] ",(matriz1[columna][renglon])-matriz2[columna][renglon]);
        }
        printf("\n");
    }
    printf("\n----------------------------------------------\n");
    //Se calcula la multiplicacion:
    printf("La resta de las matrices es: \n");
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("[%d] * [%d] = [%d]    ",matriz1[columna][renglon],matriz2[columna][renglon], (matriz1[columna][renglon])*matriz2[columna][renglon]);
        }
        printf("\n");
    }
    printf("\n");
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("[%d] ",(matriz1[columna][renglon])*matriz2[columna][renglon]);
        }
        printf("\n");
    }
    return 0;
}
