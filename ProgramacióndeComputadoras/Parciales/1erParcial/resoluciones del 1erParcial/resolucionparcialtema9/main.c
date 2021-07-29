#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TEMA9 6
int cargarRenglones();
void cargarMatrizTema9(int m[][TEMA9], int r);
void mostrarMatrizTema9(int m[][TEMA9], int r);
void mostrarPromedioTema9(int m[][TEMA9], int r);
int main(){
    int ren = cargarRenglones();
    int matriz[ren][TEMA9];
    cargarMatrizTema9(matriz,ren);
    mostrarMatrizTema9(matriz,ren);
    mostrarPromedioTema9(matriz,ren);
    return 0;
}
int cargarRenglones(){
    int renglones = 1;
    while(renglones<3){
        printf("Ingrese la cant de renglones que va a tener la matriz(mayor a 3): \n");
        scanf("%d",&renglones);
    }
    return renglones;
}
void cargarMatrizTema9(int m[][TEMA9], int r){
    int renglon,columna;
    do{
        for(renglon = 0; renglon < TEMA9; renglon ++){
            for(columna = 0; columna<r; columna++){
                m[columna][renglon] = 10 + rand() % 33;
            }
        }
    }while(m[columna][renglon]%2!=0);
}
void mostrarMatrizTema9(int m[][TEMA9], int r){
    int renglon,columna;
    for(columna = 0; columna<r; columna++){
        for(renglon = 0; renglon < TEMA9; renglon ++){
            printf("%d " , m[columna][renglon] );
        }
        printf("\n" );
    }
    printf("\n" );
}
void mostrarPromedioTema9(int m[][TEMA9], int r){
    int renglon,columna;
    int sumatoria = 0;
    int cantidadElementos = TEMA9 * r;
    // Recorrer la matriz y sumar
    for(renglon = 0; renglon < TEMA9; renglon ++){
        for(columna = 0; columna<r; columna++){
            int elementoActual = m[columna][renglon];
            sumatoria = sumatoria + elementoActual;
        }
    }
    // El promedio es = sumatoria / cantidadDeElementos
    double promedio = (float) sumatoria / (float) cantidadElementos;
    printf("Sumatoria: %d\n", sumatoria);
    printf("Promedio: %0.2f\n", promedio);
}
