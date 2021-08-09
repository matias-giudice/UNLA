#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Vehiculo{
    char patente[20];
    int anio;
    char color[20];
    float precio;
};
int main(){
    int i;
    struct Vehiculo vehiculos[5];

    for(i=0; i<3; i++){
        printf("\n----INGRESANDO DATOS DEL %d VEHICULO----\n", i);
        printf("Ingrese la patente del vehiculo: \n");
        fflush(stdin);
        gets(vehiculos[i].patente);
        printf("Ingrese el anio del vehiculo: \n");
        scanf("%d", &vehiculos[i].anio);
        printf("Ingrese el color del vehiculo: \n");
        fflush(stdin);
        gets(vehiculos[i].color);
        printf("Ingrese el precio del vehiculo: \n");
        scanf("%f", &vehiculos[i].precio);
    }

    vehiculos[3].anio = 2001;
    strcpy(vehiculos[3].color, "verde");
    strcpy(vehiculos[3].patente, "AR765xk");
    vehiculos[3].precio = 123.12;

    vehiculos[4].anio = 2007;
    strcpy(vehiculos[4].color, "azul");
    strcpy(vehiculos[4].patente, "AR988sd");
    vehiculos[4].precio = 323.12;

    for(i=0; i<3; i++){
        printf("\n\n----DATOS GUARDADOS DEL %d VEHICULO----\n", i);
        printf("\nPatente del vehiculo: %s", vehiculos[i].patente);
        printf("\nAnio del vehiculo: %d", vehiculos[i].anio);
        printf("\nColor del vehiculo: %s", vehiculos[i].color);
        printf("\nPrecio del vehiculo: %.2f", vehiculos[i].precio);
    }
    printf("\n\n----DATOS GUARDADOS DEL 3 VEHICULO----\n");
    printf("\nPatente del vehiculo: %s", vehiculos[3].patente);
    printf("\nAnio del vehiculo: %d", vehiculos[3].anio);
    printf("\nColor del vehiculo: %s", vehiculos[3].color);
    printf("\nPrecio del vehiculo: %.2f", vehiculos[3].precio);

    printf("\n\n----DATOS GUARDADOS DEL 4 VEHICULO----\n");
    printf("\nPatente del vehiculo: %s", vehiculos[4].patente);
    printf("\nAnio del vehiculo: %d", vehiculos[4].anio);
    printf("\nColor del vehiculo: %s", vehiculos[4].color);
    printf("\nPrecio del vehiculo: %.2f", vehiculos[4].precio);
    return 0;
}
