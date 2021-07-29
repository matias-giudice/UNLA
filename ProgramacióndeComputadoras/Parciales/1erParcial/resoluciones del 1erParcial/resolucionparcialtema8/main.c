#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int tamanioTema8();
void cargarTema8(int v[], int t);
void mostrarTema8(int v[], int t);
int buscarTema8(int v[], int t, int busco);
int main(){
    srand(time(0));
    int tam = tamanioTema8();
    int vector[tam];
    cargarTema8(vector,tam);
    mostrarTema8(vector,tam);
    printf("\nEstoy buscando el 33: %d",buscarTema8(vector,tam,33));
    return 0;
}
int tamanioTema8(){
    int resultado;
    do{
        resultado = 5 + rand() % (15-5+1);
    }while(resultado%2!=0);
    return resultado;
}
void cargarTema8(int v[], int t){
    int i;
    for(i=0; i<t; i++){
        do{
            v[i] = 10 + rand() % 100;
        }while(v[i]%3!=0);
    }
}
void mostrarTema8(int v[], int t){
    int i;
    printf("\n[");
    for (i=0; i<t; i++){
        printf(" %d ", v[i]);
    }
    printf("]\n ");
}
int buscarTema8(int v[], int t, int busco){
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
