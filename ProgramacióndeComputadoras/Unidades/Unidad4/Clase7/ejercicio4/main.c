#include <stdio.h>
#include <stdlib.h>

int main(){
    //Defnimos variables
    char nombre1[20], nombre2[20];
    int i;
    //Ingresamos valores
    printf("Ingrese un nombre: \n");
    gets(nombre1);
    printf("Ingrese otro nombre: \n");
    gets(nombre2);
    //Verificamos que los nombres sean iguales o no(en ese caso se juntan ambos en uno)
    if(nombre1[i] != nombre2[i]){
        printf("Tercer nombre componiendo ambos: \n");
        printf("%s %s\n",nombre1,nombre2);
    }else{
        printf("\nLos nombres son iguales.\n");
    }
    return 0;
}
