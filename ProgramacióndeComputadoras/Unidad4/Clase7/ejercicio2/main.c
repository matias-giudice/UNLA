#include <stdio.h>
#include <stdlib.h>

int main(){
    //Definimos variables
    int i, posInicial, posFinal, cont;
    char palabra[20], caracter,aux;
    //Ingresamos la palabra
    printf("Ingrese una palabra(agregar un '.' al final de la palabra): \n");
    scanf("%c",&caracter);
    i=0;//Inicializamos el contador en 0
    while(i<25 && caracter!='.'){//Almacenamos la palabra
        palabra[i] = caracter;
        i++;
        scanf("%c",&caracter);
    }
    posInicial=0;//Inicializamos la posicion inicial en 0
    posFinal=i-1;//Inicializamos la posicion final restandole 1 al contador
    //Verificamos que la posicion inicial sea menor que la posicion final
    while(posInicial<posFinal){
        aux = palabra[posInicial];
        palabra[posInicial] = palabra[posFinal];
        palabra[posFinal] = aux;
        posInicial++; //sumando unidad
        posFinal--;   //restando unidad
    }
    printf("\n");
    for(cont=0; cont<i; cont++){
        printf("%c",palabra[cont]);
    }
    printf("\n");
    return 0;
}
