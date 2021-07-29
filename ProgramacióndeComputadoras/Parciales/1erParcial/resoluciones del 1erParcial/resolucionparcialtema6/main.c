#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int tamanioTema6();
void cargarTema6(float v[], int t);
void mostrarTema6(float v[], int t);
int buscarTema6(float v[], int t, float busco);
int main(){
    srand(time(0));
    int tam = tamanioTema6();
    float vector[tam];
    cargarTema6(vector,tam);
    mostrarTema6(vector,tam);
    printf("\nEstoy buscando el 22.5: %.1f",buscarTema6(vector,tam,22.5));
    return 0;
}
int tamanioTema6(){
    int resultado;
    do{
        resultado = 10 + rand() % (15-10+1);
    }while(resultado%2!=0);
    return resultado;
}
void cargarTema6(float v[], int t){
    int i;
    for(i=0; i<t; i++){
        int tipeo = 0;
        do{
            printf("Ingrese un numero > 500 que no sea divisible por 3 para la posicion: %d\n",i);
            scanf("%d",&tipeo);
        }while(tipeo%3==0 || tipeo<500);
        v[i] = (float) tipeo;
    }
}
void mostrarTema6(float v[], int t){
    int i;
    printf("\n[");
    for (i=0; i<t; i++){
        printf(" %.1f ", v[i]);
    }
    printf("]\n ");
}
int buscarTema6(float v[], int t, float busco){
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
