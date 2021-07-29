#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int elegirEntero();
void cargarTema1(float v[], int t);
void mostrarVectorTema1(float v[], int t);
void burbujeo(float v[], int t);
int main(){
    srand(time(0));
    int tam = elegirEntero();
    float tema1[tam];
    cargarTema1(tema1,tam);
    mostrarVectorTema1(tema1,tam);
    burbujeo(tema1,tam);
    mostrarVectorTema1(tema1,tam);
    return 0;
}
int elegirEntero(){
    int tamanio;
    printf("Ingrese tamanio del vector: \n");
    scanf("%d",&tamanio);
    return tamanio;
}
void cargarTema1(float v[], int t){
    int i;
    for(i=0; i<t; i++){
        v[i] = 0; //Para evitar basura inicial
        do{
            printf("Por favor ingresar la posicion: %d\n",i);
            scanf("%f", &v[i]);
        }while(!(v[i]>200 && v[i]<1500));
    }
}
void mostrarVectorTema1(float v[], int t){
    int i;
    printf("\n[");
    for(i=0; i<t; i++){
        printf(" %.1f ", v[i]);
    }
    printf("]\n ");
}
void burbujeo(float v[], int t){
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
