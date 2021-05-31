#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeroSecreto,maximoIntentos,numeroUsuario,intentos;
    numeroSecreto = 26;
    maximoIntentos = 30;
    printf("Adivina el numero que estoy pensando en %d intentos o menos...\n",maximoIntentos);
    printf("Que numero te parece que es? \n");
    scanf("%d",&numeroUsuario);
    intentos = 1;
    while(numeroUsuario != numeroSecreto && intentos < maximoIntentos){
        if(numeroUsuario > numeroSecreto){
            printf("%d es mayor que el numero que pense.\n",numeroUsuario);
        }else{
            printf("%d es menor que el numero que pense.\n",numeroUsuario);
        }
        printf("Proba de nuevo! Te quedan %d intentos.\n",maximoIntentos-intentos);
        scanf("%d",&numeroUsuario);
        intentos = intentos + 1;
    }
    if(intentos == maximoIntentos){
        printf("Perdiste! No adivinaste en %d intentos o menos.\n",maximoIntentos);
    }else{
        printf("Adivinaste en %d intentos!\n",intentos);
    }
    printf("El numero que pense es: %d",numeroSecreto);
    return 0;
}
