#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int tamAleatorio();
void cargarTema3(int v[], int t);
int aleatoriosNegativos();
void mostrarVectorTema3(int v[], int t);
int buscarTema3(int v[], int t, int busco);
int main(){
    srand(time(0));
    int tam = tamAleatorio();
    printf("TAM: %d",tam); //No hacia falta esto
    int vector[tam];
    cargarTema3(vector,tam);
    mostrarVectorTema3(vector,tam);
    printf("\nBusco el -25: %d", buscarTema3(vector,tam,-25));
    return 0;
}
int tamAleatorio(){
    int resultado = 2;
    while(resultado%2==0){
        resultado = 5 + rand() % (20-5+1);
    }
    return resultado;
}
void cargarTema3(int v[], int t){
    int i;
    for(i=0; i<t; i++){
        v[i] = aleatoriosNegativos();
    }
}
int aleatoriosNegativos(){
    int resultado = 1;
    //min -100 max -1
    resultado = -100 + rand() % (-1+100+1);
    return resultado;
}
void mostrarVectorTema3(int v[], int t){
    int i;
    printf("\n[");
    for (i=0; i<t; i++){
        printf(" %d ", v[i]);
    }
    printf("]\n ");
}
int buscarTema3(int v[], int t, int busco){
    int i;
    int pos = -1;
    for(i=0; i<t; i++){
        if(v[i]==busco){
            pos = i;
        }
    }
    return pos;
}
