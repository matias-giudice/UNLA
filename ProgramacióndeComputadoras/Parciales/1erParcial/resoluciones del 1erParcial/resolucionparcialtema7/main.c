#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int tamanioTema7();
void cargarTema7(float v[], int t);
void mostrarTema7(float v[], int t);
void ordenarTema7(float v[], int t);
int main(){
    srand(time(0));
    int tam = tamanioTema7();
    float vector[tam];
    cargarTema7(vector,tam);
    mostrarTema7(vector,tam);
    ordenarTema7(vector,tam);
    mostrarTema7(vector,tam);
    return 0;
}
int tamanioTema7(){
    int resultado;
    do{
        printf("Por favor ingrese un numero impar divisible por 3.\n");
        scanf("%d",&resultado);
    }while(resultado%2==0 || resultado%3!=0);
    return resultado;
}
void cargarTema7(float v[], int t){
    int i;
    for(i=0; i<t; i++){
        int tipeo = 0;
        do{
            printf("Ingrese un numero > 100 o multiplo de 15 para la posicion: %d\n",i);
            scanf("%d",&tipeo);
        }while(tipeo<100 && tipeo%15!=0);
        v[i] = (float) tipeo;
    }
}
void mostrarTema7(float v[], int t){
    int i;
    printf("\n[");
    for (i=0; i<t; i++){
        printf(" %.1f ", v[i]);
    }
    printf("]\n ");
}
void ordenarTema7(float v[], int t){
    int i,j,aux;
    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
            if(v[j]>=v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}
