#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Definimos las variables nombre, apellido, edad, altura y genero
    char nombre[30], apellido[30], genero[10];
    int edad;
    float altura;

    //Asignamos valores a las variables nombre, apellido, edad, altura y genero
    printf("Ingrese nombre: \n");
    fflush(stdin);
    scanf("%s", nombre);

    printf("Ingrese apellido: \n");
    fflush(stdin);
    scanf("%s", apellido);

    printf("Ingrese edad: \n");
    scanf("%d", &edad);

    printf("Ingrese altura: \n");
    scanf("%f", &altura);

    printf("Ingrese genero: \n");
    scanf("%s", genero);

    //Resultado
    printf("------------------Datos de la persona------------------\n");
    printf("Nombre: %s \n", nombre);
    printf("Apellido: %s \n", apellido);
    printf("Edad: %d \n", edad);
    printf("Altura: %.2f \n", altura);
    printf("Genero: %s \n", genero);

    return 0;
}
