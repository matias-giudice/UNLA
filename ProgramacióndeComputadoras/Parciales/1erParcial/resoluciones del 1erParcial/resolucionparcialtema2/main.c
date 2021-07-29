#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int elegirEntero2();
void cargarTema2(int v[], int t);
int aleatorioImpar();
void mostrarVectorTema2(int v[], int t);
int main(){
    srand(time(0));
    int tam = elegirEntero2();
    int vector[tam];
    cargarTema2(vector,tam);
    mostrarVectorTema2(vector,tam);
    return 0;
}
int elegirEntero2(){
    int resultado = -1;
    while(resultado<4 || resultado>8){
        printf("Por favor elegir un entero: \n");
        scanf("%d",&resultado);
    }
    return resultado;
}
void cargarTema2(int v[], int t){
    int i;
    for(i=0; i<t; i++){
        v[i] = aleatorioImpar();
    }
}
int aleatorioImpar(){
    int resultado = 2;
    while(resultado%2==0){
        resultado = rand()%31;
    }
    return resultado;
}
void mostrarVectorTema2(int v[], int t){
    int i;
    printf("\n[");
    for (i=0; i<t; i++){
        printf(" %d ", v[i]);
    }
    printf("]\n ");
}
