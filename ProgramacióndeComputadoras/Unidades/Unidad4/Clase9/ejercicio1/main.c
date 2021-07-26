#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int numeroAleatorio();
int cargarVector(int v[], int t);
void mostrarVector(int v[], int t);
int maximoVector(int v[], int t);
int minimoVector(int v[], int t);
int promedioVector(int v[], int t);
int posicionMenor(int v[], int t);
int posicionMayor(int v[], int t);
int main(){
    srand(time(0));
    int tamanio = 5;
    int vector[tamanio];
    int maximo,minimo,promedio,posMin,posMax;

    cargarVector(vector, tamanio);
    mostrarVector(vector, tamanio);
    maximo = maximoVector(vector, tamanio);
    minimo = minimoVector(vector, tamanio);
    promedio = promedioVector(vector, tamanio);
    posMin = posicionMenor(vector, tamanio);
    posMax = posicionMayor(vector, tamanio);

    printf("\nEl minimo es: %d\n",minimo);
    printf("\nEl maximo es: %d\n",maximo);
    printf("\nEl promedio del vector es: %d\n",promedio);
    printf("\nLa posicion del minimo es: %d\n",posMin);
    printf("\nLa posicion del maximo es: %d\n",posMax);
    return 0;
}
int numeroAleatorio(){
    int numero = rand() % 50;
    return numero;
}
int cargarVector(int v[], int t){
    int i;
    for(i=0; i<t; i++){
        v[i] = numeroAleatorio();
    }
    return v[i];
}
void mostrarVector(int v[], int t){
    int i;
    for(i=0; i<t; i++){
        printf("--- %d ---",v[i]);
    }
    printf("\n\n");
}
int maximoVector(int v[], int t){
    int i,j;
    int max = v[0];
    for(j=0; j<t; j++){
        if(v[j]>max){
            max = v[j];
        }
    }
    return max;
}
int minimoVector(int v[], int t){
    int i,j;
    int max = v[0];
    int min = max;
    for(j=0; j<t; j++){
        if(v[j]>max){
            max = v[j];
        }
        if(v[j]<min){
            min = v[j];
        }
    }
    return min;
}
int promedioVector(int v[], int t){
    int i,suma=0,prom=0;
    for(i=0; i<t; i++){
        suma = suma + v[i];
    }
    prom = suma / t;
    return prom;
}
int posicionMenor(int v[], int t){
    int i,j,cont2=0,posMe=0;
    int max = v[0];
    int min = max;
    for(j=0; j<t; j++){
        cont2 = cont2 + 1;
        if(v[j]>max){
            max = v[j];
        }
        if(v[j]<min){
            min = v[j];
            posMe = cont2 - 1;
        }
    }
    return posMe;
}
int posicionMayor(int v[], int t){
    int i,j,cont=0,posMa=0;
    int max = v[0];
    for(j=0; j<t; j++){
        cont=cont+1;
        if(v[j]>max){
            max = v[j];
            posMa = cont - 1;
        }
    }
    return posMa;
}
