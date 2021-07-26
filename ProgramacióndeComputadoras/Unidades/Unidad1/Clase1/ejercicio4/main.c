#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Primero definimos y asigamos valores a las variables a y b.\n\n");
    printf("a=1\nb=2\n\n");
    int a = 1;
    int b = 2;

    printf("Luego se muestra el resultado de las operaciones.\n\n");
    printf("Sabiendo que si la operacion se cumple es V=1,en el caso contrario, F=0\n\n");
    printf("1-Compara si 3 es igual a 5.\n");
    printf("Que muestra:  %d \n\n" , 3==5);
    printf("2-Compara si 3 es menor o igual a 5.\n");
    printf("Que muestra:  %d \n\n" , 3<=5);
    printf("3-Compara si -3 es menor o igual a -5.\n");
    printf("Que muestra:  %d \n\n" , -3<=-5);
    printf("4-Compara si 3 es menor o igual a 5 Y si 3 es igual 3.\n");
    printf("Que muestra:  %d \n\n" , (3<=5)&&(3==3));
    printf("5-Compara si a es menor o igual a b O si b es igual a 4.\n");
    printf("Que muestra:  %d \n\n" , (a<=b)||(b==4));
    printf("6-Realiza la division de 8 dividido 3.\n");
    printf("Que muestra:  %d \n\n" , (8 % 3));

    return 0;
}
