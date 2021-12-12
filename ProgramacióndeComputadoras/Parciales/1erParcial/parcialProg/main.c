#include <stdio.h>
#include <stdlib.h>
void menu();
int cargarTamanio();
void cargarVector(int v[],int t,int min,int max);
void arrayDerechaAizquieda(int v[],int t);
void arrayIzquierdaAderecha(int v[],int t);
int main(){
    printf("xxxxxxxxxxx DNI: xx.xxx.xxx\n\n");
    menu();
    return 0;
}
void menu(){
    int tam = cargarTamanio();
    float vector[tam];
    //Al cargar el primer valor del vector tipo double se me rompe el programa, no lo pude solucionar por eso lo deje como tipo int
    cargarVector(vector,tam,100,200);
    arrayDerechaAizquieda(vector,tam);
    arrayIzquierdaAderecha(vector,tam);
}
int cargarTamanio(){
    int tamanio;
    printf("El tamanio tiene que estar entre 7 y 20 y debe ser par. \n");
    printf("Ingrese el tamanio del vector: \n");
    scanf("%d",&tamanio);
    if(tamanio>=7 && tamanio<=20 && tamanio%2==0){
        return tamanio;
    }else{
        printf("El tamanio tiene que estar entre 7 y 20 y debe ser par. \n");
        printf("Ingrese el tamanio del vector nuevamente: \n");
        scanf("%d",&tamanio);
        if(tamanio>=7 && tamanio<=20 && tamanio%2==0){
            return tamanio;
        }
    }
}
/*void cargarVector(int v[],int t,int min,int max){
    int i;
    printf("\nLos numeros ingresados tienen que estar entre 100 y 200. \n");
    for(i=0; i<t; i++){
        printf("\nIngrese un numero para el vector: \n");
        scanf("%lf",v[i]);
        if(v[i]>=min && v[i]<=max){
            printf("\nLos numeros ingresados tienen que estar entre 100 y 200. \n");
            printf("\nIngrese nuevamente un numero para el vector: \n");
            scanf("%lf",v[i]);
        }
    }
}*/
void cargarVector(int v[],int t,int min,int max){
    int i;
    printf("\nLos numeros ingresados tienen que estar entre 100 y 200. \n");
    for(i=0; i<t; i++){
        if(v[i]>=min && v[i]<=max){
            printf("Ingrese un numero para el vector: \n");
            scanf("%d",&v[i]);
        }else{
            printf("Ingrese nuevamente un numero para el vector: \n");
            scanf("%d",&v[i]);
        }
    }
}
void arrayDerechaAizquieda(int v[],int t){
    int i;
    printf("\nArray de derecha a izquierda\n");
    for(i=t-1; i>=0; i--){
        printf("%d ",v[i]);
    }
    printf("\n");
}
void arrayIzquierdaAderecha(int v[],int t){
    int i;
    printf("\nArray de izquierda a derecha\n");
    for(i=0; i<t; i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}
