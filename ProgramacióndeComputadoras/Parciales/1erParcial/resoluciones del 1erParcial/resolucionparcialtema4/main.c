#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int elegirEntero4();
void cargarTema4(double v[], int t);
void mostrarVectorTema4(double v[], int t);
int main(){
    srand(time(0));
    int tam = elegirEntero4();
    double vector[tam];
    cargarTema4(vector,tam);
    mostrarVectorTema4(vector,tam);
    return 0;
}
int elegirEntero4(){
    int resultado = -1;
    while(resultado<7 || resultado>20 || resultado%2==1){
        printf("Elegir el tam del array: \n");
        scanf("%d",&resultado);
    }
    return resultado;
}
void cargarTema4(double v[], int t){
    int i;
    for(i=0; i<t; i++){
        double carga = 10;
        while(carga<100 || carga>200){
            printf("Por favor cargar el elemento %d del array, entre 100 y 200:\n",i);
            scanf("%lf",&carga);
        }
        v[i] = carga;
    }
}
void mostrarVectorTema4(double v[], int t){
    int i;
    for(i=0; i<t; i++){
        printf(" -- %lf --",v[i]);
    }
    //Se esperaba que lo hacen en dos procedimientos distintos
    printf("\n---------------------------\n");
    for(i=t-1; i>=0; i--){
        printf(" -- %lf --",v[i]);
    }
}
