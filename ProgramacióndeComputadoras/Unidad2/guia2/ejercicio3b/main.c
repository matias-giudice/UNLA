#include <stdio.h>
#include <stdlib.h>
////Que pida un número del 1 al 7 y diga el día de la semana correspondiente.
int main(){
    int i;
    printf("Introduzca numero del 1 al 7:");
    scanf("%d",&i);

    switch(i){
    case 1:
        printf ("Lunes\n");
        break;
    case 2:
        printf ("Martes\n");
        break;
    case 3:
        printf ("Miércoles\n");
        break;
    case 4:
        printf ("Jueves\n");
        break;
    case 5:
        printf ("Viernes\n");
        break;
    case 6:
        printf ("Sábado\n");
        break;
    case 7:
        printf ("Domingo\n");
        break;
    default:
        printf ("Opción no válida\n");
        break;
    }

    system("PAUSE");
    return 0;
}
