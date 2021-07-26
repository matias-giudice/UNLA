#include <stdio.h>
#include <stdlib.h>
int calcularSegundos (int horas, int minutos, int segundos){
    int total;
    total = horas * 3600 + minutos * 60 + segundos;
    return total;
}
int main(){
    int horas, minutos, segundos, dia;

    printf( "\n   Ingresar horas: " );
    scanf( "%d", &horas );
    printf( "\n   Ingresar minutos: " );
    scanf( "%d", &minutos );
    printf( "\n   Ingresar segundos: " );
    scanf( "%d", &segundos );

    dia = calcularSegundos(horas, minutos, segundos);
    printf( "\n   Desde las 0:0:0 horas han pasado %d segundos.", dia );

    getch(); /* Pausa */

    return 0;
}
