#include <stdio.h>
#include <stdlib.h>
//Escribir un programa que simule un calculador simple.
int main()
{
    float x, y, resultado;
    char op;
    int valido = 1;

    printf("Ingrese operacion: ");
    scanf("%c", &op);
    printf("Ingrese x: ");
    scanf("%f", &x);
    printf("Ingrese y: ");
    scanf("%f", &y);

    switch (op) {
        case '+':
            resultado = x + y;
            break;
        case '-':
            resultado = x - y;
            break;
        case '*':
        case 'x':
            resultado = x * y;
            break;
        case '/':
            resultado = x / y;
            break;
        default:
            valido = 0;
    }

    if (valido)
        printf("El resultado es %.1f\n", resultado);
    else
        printf("Operacion invalida\n");

    return 0;
}
