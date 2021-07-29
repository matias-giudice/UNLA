#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int elegirEntero5();
int aleatorioEntre(int min, int max);
void cargarTema5(int v[], int t, int min, int max);
int buscarTema5(int v[], int t, int busco);
void mostrarVectorTema5(int v[], int t);
int main(){
    srand(time(0));
    int tam = elegirEntero5();
    int vector[tam];
    cargarTema5(vector,tam,10,30);
    mostrarVectorTema5(vector,tam);
    printf("\nBusco el 22: %d",buscarTema5(vector,tam,22));
    return 0;
}
int elegirEntero5(){
    int resultado = -1;
    while(resultado<5 || resultado>30){
        printf("\nElegir tam entre 5 y 10:\n");
        scanf("%d",&resultado);
    }
    return resultado;
} //5 y 10
int aleatorioEntre(int min, int max){
    return min + rand() % (max-min+1);
}
void cargarTema5(int v[], int t, int min, int max){
    int i;
    for(i=0; i<t; i++){
        //Cuidado con la basura que no coincida con tu numero
        v[i] = min -1;
    }
    for(i=0; i<t; i++){
        int aleatorio = aleatorioEntre(min,max);
        while(buscarTema5(v,t,aleatorio)!=-1){
            printf("Encontro un numero repetido.\n");
            aleatorio = aleatorioEntre(min,max);
        }
        v[i] = aleatorio;
    }
}
int buscarTema5(int v[], int t, int busco){
    int i;
    int pos = -1;
    for(i=0; i<t; i++){
        if(v[i]==busco){
            pos = i;
        }
    }
    return pos;
}
void mostrarVectorTema5(int v[], int t){
    int i;
    printf("\n[");
    for (i=0; i<t; i++){
        printf(" %d ", v[i]);
    }
    printf("]\n ");
}
