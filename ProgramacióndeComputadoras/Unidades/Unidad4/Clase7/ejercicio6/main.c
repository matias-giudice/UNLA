#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Escribir un programa que pida tres cadenas al usuario y muestre su longitud (número de letras).
int main(){
    char cadenaUno[20] = " ";
    char cadenaDos[20] = " ";
    char cadenaTres[20] = " ";
    printf("ingrese una palabra: ");
    fflush(stdin);
    scanf("%s",cadenaUno);
    printf("ingrese otra palabra: ");
    fflush(stdin);
    scanf("%s",cadenaDos);
    printf("ingrese otra palabra: ");
    fflush(stdin);
    scanf("%s",cadenaTres);
    printf("La longitud de %s es de: %d\n",cadenaUno,strlen(cadenaUno));
    printf("La longitud de %s es de: %d\n",cadenaDos,strlen(cadenaDos));
    printf("La longitud de %s es de: %d\n",cadenaTres,strlen(cadenaTres));
    return 0;
}
