#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int numeroUsuario,numeroAleatorio,numeroGuardado;
    printf("Ingrese un numero del 1 al 20: \n");
    scanf("%d",&numeroUsuario);
    numeroAleatorio = rand() % 20 + 1;
    numeroGuardado = 1;
    while(numeroUsuario != numeroAleatorio){
        numeroGuardado = numeroGuardado + 1;
        printf("Proba de nuevo!\n");
        scanf("%d",&numeroUsuario);
    }
    printf("Se escribieron %d numeros.\n",numeroGuardado);
    printf("Salio el numero ingresado!\n");
    printf("%d = %d",numeroUsuario,numeroAleatorio);
    return 0;
}
