#include <stdio.h>
#include <stdlib.h>

int main(){
    //Definimos variables
    int i, posInicial, posFinal;
    char palabra[20], caracter;
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
    //Verificamos que la posicion inicial sea menor que la posicion final y tambien las comparamos
    while(posInicial<posFinal && palabra[posInicial]==palabra[posFinal]){
        posInicial++; //sumando unidad
        posFinal--;   //restando unidad
    }
    //Si la posicion inicial es mayor o igual que la posicion final va a mostrar que es palindromo sino se cumple muestra que no es palindromo
    if(posInicial>=posFinal){
        printf("La palabra es palindromo. \n");
    }else{
        printf("La palabra no es palindromo. \n");
    }
    return 0;
}
