#include <stdio.h>
#include <stdlib.h>
//Que pida un número del 1 al 7 y diga el día de la semana correspondiente.
int main(){
    int i;
    printf("Introduzca numero del 1 al 7:");
    scanf("%d",&i);

    if (i==1) printf ("Es Lunes");

    if (i==2) printf ("Es Martes");

    if (i==3) printf ("Es Miercoles");

    if (i==4) printf ("Es Jueves");

    if (i==5) printf ("Es Viernes");

    if (i==6) printf ("Es Sabado");

    if (i==7) printf ("Es Domingo");

    if (i<1 || i>7) printf ("Error.");

    system("PAUSE");
    return 0;
}
