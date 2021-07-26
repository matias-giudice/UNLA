#include <stdio.h>
#include <stdlib.h>
/*Ejercicio 1: Escribir una oración, contar la cantidad de letras vocales y la
  cantidad de consonantes. Cuidado, las oraciones pueden tener símbolos y números.*/
int main(){
    char oracion[40]=" ";
    char vocales[11]={'a','e','i','o','u','A','E','I','O','U'};
    char consonantes[43]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z','B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z'};
    printf("\nEscriba una oracion: ");
    gets(oracion);
    int cantVoc=0;
    int cantCon=0;
    int i=0,j;
    while(oracion[i]!='\0'){
        for (j=0; j<=10; j++){
            if (oracion[i]==vocales[j]){
                cantVoc=cantVoc+1;
            }
        }
        for (j=0; j<43; j++){
            if (oracion[i]==consonantes[j]){
                cantCon=cantCon+1;
            }
        }
        i=i+1;
    }
    printf("\n\nCantidad de vocales ---> %d", cantVoc);
    printf("\n\nCantidad de consonantes ---> %d", cantCon);
    printf("\n");
    return 0;
}
