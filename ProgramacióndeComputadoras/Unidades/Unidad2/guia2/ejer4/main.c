#include <stdio.h>
#include <stdlib.h>
//Escribir un programa que simule un calculador simple. Utilizando un procedimiento.
int calculadora( float a, float b, char op ){ /* Metemos los parámetros a y b a la función */
    float resultado, valido=1;
    switch (op) {
        case '+':
            resultado = a + b;
            break;
        case '-':
            resultado = a - b;
            break;
        case '*':
        case 'x':
            resultado = a * b;
            break;
        case '/':
            resultado = a / b;
            break;
        default:
            valido = 0;
    }
    if (valido){
        printf("El resultado es %.1f\n", resultado);
    }else{
        printf("Operacion invalida\n");
    }
    return resultado;
}
int main(){
    float x, y;
    float resultadoT;
    char op;

    printf("Ingrese operacion: ");
    scanf("%c", &op);
    printf("Ingrese x: ");
    scanf("%f", &x);
    printf("Ingrese y: ");
    scanf("%f", &y);

    resultadoT = calculadora( x, y, op ); /* Almacenamos en resultado el valor que devuelve la función */

    printf("", resultadoT);

    return 0;
}
