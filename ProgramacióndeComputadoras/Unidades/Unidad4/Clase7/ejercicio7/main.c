/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Escribir un programa que pida tres cadenas al usuario y muestre el resultado de concatenar las dos primeras letras de las cadenas
//introducidas y que indique si las dos primeras cadenas son iguales.
int main(){
    char cadenaUno[20] = " ";
    char cadenaDos[20] = " ";
    char cadenaTres[20] = " ";
    int resComparacion;
    printf("ingrese una palabra: ");
    fflush(stdin);
    scanf("%s",cadenaUno);
    printf("ingrese otra palabra: ");
    fflush(stdin);
    scanf("%s",cadenaDos);
    printf("ingrese otra palabra: ");
    fflush(stdin);
    scanf("%s",cadenaTres);
    resComparacion = strcmp(cadenaUno,cadenaDos);
    if(resComparacion == 0){
        printf("Las dos primeras palabras son iguales.\n");
    }else{
        printf("Las dos primeras palabras no son iguales.\n");
    }
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    typedef char TipoCadenas[50]; //
    TipoCadenas cadenas[3];
    TipoCadenas nuevaCadena[3];
    int i = 0;
    int j = 0;
    int resComparacion = 0;
    for(i = 0; i < 3; i++){ // Se piden tres cadenas de texto
        printf("Introduzca una cadena de texto: ");
        gets(cadenas[i]);
    }
    for(i=0; i<3; i++){ // Se recuperan las dos primeras letras de cada cadena de texto y se guardan en una variable.
        for(j=0; j<3; j++){
            if(j==2){
                nuevaCadena[i][j] = '\0'; // Después de recuperar las dos letras, introducimos el final de cadena.
            }else{
                nuevaCadena[i][j] = cadenas[i][j];
            }
        }
    }
    printf("\nEl resultado de concatenar las dos primeras letras de las cadenas es: \"%s\".\n\n",
    strcat(strcat(nuevaCadena[0], nuevaCadena[1]), nuevaCadena[2]));
    resComparacion = strcmp(cadenas[0], cadenas[1]);
    if (resComparacion ==0) {
        printf("La primera cadena, \"%s\", es igual a la segunda cadena, \"%s\".\n", cadenas[0], cadenas[1]);
    } else {
        printf("La primera cadena, \"%s\", no es igual a la segunda cadena, \"%s\".\n", cadenas[0], cadenas[1]);
    }
    return 0;
}
