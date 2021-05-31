#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia;
    printf("Ingrese un numero que represente un dia de la semana!(del 1 al 7)\n");
    scanf("%d", &dia);

    switch(dia){
        case 1:
            printf("1 - Lunes\n");
        break;
        case 2:
            printf("2 - Martes\n");
        break;
        case 3:
            printf("3 - Miercoles\n");
        break;
        case 4:
            printf("4 - Jueves\n");
        break;
        case 5:
            printf("5 - Viernes\n");
        break;
        case 6:
            printf("6 - Sabado\n");
        break;
        case 7:
            printf("7 - Domingo\n");
        break;
        default:
            printf("ERROR!\n");
        break;
    }
    return 0;
}
