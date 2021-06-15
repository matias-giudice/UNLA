#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu();
float numeroAleatorioEntre(int min, int max);
void cargarVectorManualmente(float v[],int t);
void cargarVectorAleatoriamente(float v[],int t,int min,int max);
void mostrarVector(float v[],int t);
void ordenamientoBurbuja(float v[],int t);
float busquedaSecuencial(float v[],int t, float busco);
int main(){
    srand(time(0));
    int op,tam;
    float num;
    printf("Ingrese tamanio del vector: \n");
    scanf("%d",&tam);
    float vector[tam];
    while(op!=6){
        menu();
        printf("\nElija una opcion: \n");
        scanf("%d",&op);
        switch(op) {
            case 1:
                cargarVectorManualmente(vector,tam);
                break;
            case 2:
                cargarVectorAleatoriamente(vector,tam,1.0,5.0);
                break;
            case 3:
                mostrarVector(vector,tam);
                break;
            case 4:
                ordenamientoBurbuja(vector,tam);
                mostrarVector(vector,tam);
                break;
            case 5:
                printf("Busco el valor 5.3, esta en la pos: %d",busquedaSecuencial(vector,tam,5.3));
                break;
        }
    }
    return 0;
}
void menu(){
    printf("----------Menu----------\n");
    printf("1- Cargar vector manualmente. \n");
    printf("2- Cargar vector aleatoriamente. \n");
    printf("3- Mostrar vector. \n");
    printf("4- Ordenar vector por ordenamiento burbuja. \n");
    printf("5- Buscar numero en el vector. \n");
    printf("6- Salir del menu. \n");
}
void cargarVectorManualmente(float v[],int t){
    int i;
    for(i=0; i<t; i++){
        printf("Ingrese valor en la posicion [%d]: ",i);
        scanf("%f", &v[i]);
    }
}
float numeroAleatorioEntre(int min, int max){
    return (float) min + rand()%(max-min+1);
}
void cargarVectorAleatoriamente(float v[],int t,int min,int max){
    int i;
    for(i=0; i<t; i++){
        v[i] = (float) numeroAleatorioEntre(min,max);
    }
}
void mostrarVector(float v[],int t){
    int i;
    for(i=0; i<t; i++){
        printf("--- %f ---",v[i]);
    }
    printf("\n\n");
}
void ordenamientoBurbuja(float v[],int t){
    int i,j;
    float aux=0.0f;
    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
            if(v[j]>=v[j+1]){
                aux=v[j+1];
                v[j+1]=v[j];
                v[j]=aux;
            }
        }
    }
}

float busquedaSecuencial( float v[], int t, float busco){
    int contador=0;
    int encontrado=0;
    int posEncontrado= -1;

    while (contador<t && encontrado==0){
        if (v[contador]==busco){
            encontrado=1;
            posEncontrado=contador;
        }
        contador ++;
   }
   return posEncontrado;
}
