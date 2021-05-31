#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int esBisiesto(int anio);
int sonIguales(char nombre1[20], char nombre2[20]);
int esMayorDeEdad(int anioNacimiento, int anioHoy);
int esPalindromo(char oracion[100]);
int main(){
    //0 = Falso //1 = Verdadero
    int anio,bisiesto;
    printf("Verifica si el anio es bisiesto o no.\n");
	printf("Ingrese anio:\n");
	scanf("%d",&anio);
	bisiesto = esBisiesto(anio);
	printf("%d\n",bisiesto);
	printf("\n-----------------------\n");
	printf("Verifica si los nombres son iguales o no.\n");
	char nombre1[20];
	char nombre2[20];
	int iguales;
	printf("Ingrese nombre1:\n");
    fflush(stdin);
    scanf("%s",&nombre1);
    printf("Ingrese nombre2:\n");
    fflush(stdin);
    scanf("%s",&nombre2);
    iguales = sonIguales(nombre1,nombre2);
    printf("%d\n",iguales);
    printf("\n-----------------------\n");
    printf("Verifica si es mayor de edad o no.\n");
    int anioNacimiento,anioHoy,mayorEdad;
    printf("Ingrese anio de nacimiento:\n");
    scanf("%d",&anioNacimiento);
    printf("Ingrese anio actual:\n");
    scanf("%d",&anioHoy);
    mayorEdad = esMayorDeEdad(anioNacimiento,anioHoy);
    printf("%d\n",mayorEdad);
    printf("\n-----------------------\n");
    printf("Verifica si la palabra/frase es palindroma o no.\n");
    char oracion[100];
    printf("introducir una frase: \n"); //No pude con una frase pero si con una palabra(o poner toda la frase junta si me deja)
    fflush(stdin);
    gets(oracion);
    if(esPalindromo (oracion)){
        printf("Dicha frase es palindroma.\n");
        printf("1\n");
    }else{
        printf("Dicha frase no es palindroma.\n");
        printf("0\n");
        getchar();
    }
    return 0;
}
int esBisiesto(int anio){
    if(anio % 4 == 0){
        if(anio % 100 == 0){
            if(anio % 400 == 0){
				printf("El anio %d es bisiesto.\n",anio);
				anio = 1;
			}else{
				printf("El anio %d no es bisiesto.\n",anio);
				anio = 0;
			}
		}else{
			printf("El anio %d es bisiesto.\n",anio);
			anio = 1;
		}
    }else{
		printf("El anio %d no es bisiesto.\n",anio);
		anio = 0;
    }
    return anio;
}
int sonIguales(char nombre1[20], char nombre2[20]){
    int igual = strcmp(nombre1,nombre2);
    if(igual == 0){
        printf("Los nombres son iguales.\n");
        igual = 1;
    }else{
        printf("Los nombres no son iguales.\n");
        igual = 0;
    }
    return igual;
}
int esMayorDeEdad(int anioNacimiento, int anioHoy){
    int edad = anioHoy - anioNacimiento;
    if(edad>=18){
        printf("Es mayor.\n");
        edad = 1;
    }else{
        printf("No es mayor.\n");
        edad = 0;
    }
    return edad;
}
int esPalindromo(char oracion[100]){
    int longitud = strlen(oracion);
    int i = 0;
    while(i<=longitud/2 && oracion[i]==oracion[longitud-1-i]){
        i++;
    }
    if(i>longitud/2){
        return 1;
    }else{
        return 0;
    }
}
