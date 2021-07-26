#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anio;

    printf("Ingrese anio: \n");
    scanf("%d", &anio);

    if(anio%4==0){
        if(anio%100==0){
            if(anio%400==0){
                printf("Es bisiesto el anio %d", anio);
            }else printf("No es bisiesto el anio %d", anio);
        }else printf("Es bisiesto el anio %d", anio);
    }else printf("No es bisiesto el anio %d", anio);

    return 0;
}
