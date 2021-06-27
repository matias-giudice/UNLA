#include <stdio.h>
#include <stdlib.h>
void menu();
int sumaOP(int a, int b);
int restaOP(int a, int b);
int multiplicacionOP(int a, int b);
float divisionOP(int a, int b);
void persona();
int main(){
    menu();
    persona();
    return 0;
}
void menu(){
    int op,resultSuma,resultResta,resultMult,a,b;
    float resultDiv;
    printf("\nIngrese un numero: \n");
    scanf("%d",&a);
    printf("\nIngrese otro numero: \n");
    scanf("%d",&b);
    printf("CALCULADORA 4 OPCIONES BASICAS.\n");
    printf("1- Suma.\n");
    printf("2- Resta.\n");
    printf("3- Multiplicacion.\n");
    printf("4- Division.\n");
    printf("\nElija una opcion: \n");
    scanf("%d",&op);
    switch(op){
        case 1:
            resultSuma = sumaOP(a,b);
            printf("La suma es: %d\n",resultSuma);
            break;
        case 2:
            resultResta = restaOP(a,b);
            printf("La resta es: %d\n",resultResta);
            break;
        case 3:
            resultMult = multiplicacionOP(a,b);
            printf("La multiplicacion es: %d\n",resultMult);
            break;
        case 4:
            resultDiv = divisionOP(a,b);
            printf("La division es: %.1f\n",resultDiv);
            break;
    }
}
int sumaOP(int a, int b){
    int suma = a + b;
    return suma;
}
int restaOP(int a, int b){
    int resta = a - b;
    return resta;
}
int multiplicacionOP(int a, int b){
    int multi = a * b;
    return multi;
}
float divisionOP(int a, int b){
    float divi = ((float)a) / ((float)b);
    return divi;
}
void persona(){
    char nombre[20],apellido[20],genero[20];
    int edad;
    float altura;
    printf("Ingrese nombre: \n");
    fflush(stdin);
    scanf("%s",nombre);
    printf("Ingrese apellido: \n");
    fflush(stdin);
    scanf("%s",apellido);
    printf("Ingrese edad: \n");
    scanf("%d",&edad);
    printf("Ingrese altura: \n");
    scanf("%f",&altura);
    printf("Ingrese genero: \n");
    fflush(stdin);
    scanf("%s",genero);
    printf("---DATOS DE LA PERSONA---\n");
    printf("Nombre: %s\n", nombre);
    printf("Apellido: %s\n", apellido);
    printf("Edad: %d\n", edad);
    printf("Altura: %.2f\n", altura);
    printf("Genero: %s\n", genero);
}
