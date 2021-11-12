#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arboles.h"
const char* FORMATO_ESCRITURA = "%s+%d+%.2f\n\0";

// CONSTRUCTOR
void agregarArbol(char str[], int edad, float altura){
    actualizarStructArbol();
    FILE * archivo = fopen("arboles.txt", "a");
    fprintf(archivo, FORMATO_ESCRITURA, str, edad, altura);
    fclose(archivo);
    return actualizarStructArbol();
}
void actualizarStructArbol(void){
    FILE * archivo = fopen("arboles.txt", "r");
    if(!archivo){
        printf("No se pudo abrir el archivo.\n");
        exit(1);
    }
    int i = -1;
    while(!feof(archivo)){
        i++;
        char nombre[50] = "";
        int edad = -1;
        float altura = -1;
        char str_aux[100] = "";
        fgets(str_aux, 100, archivo);
        if(strlen(str_aux) == 0){
            strcpy(arboles[i].nombre, "No hay arboles cargados.\n");
            arboles[i].edad = -1;
            arboles[i].altura = -1;
            break;
        }

        get_nombre(str_aux, nombre);
        edad = get_edad(str_aux);
        altura = get_altura(str_aux);

        strcpy(arboles[i].nombre, nombre);
        arboles[i].edad = edad;
        arboles[i].altura = altura;

        strcpy(arboles[i+1].nombre, "N/A");
        arboles[i+1].edad = -1;
        arboles[i+1].altura = -1;
    }
    fclose(archivo);
}

// DESTRUCTOR
void eliminarArbol(char str[]){
    FILE * archivo = fopen("arboles.txt","w");
    int i;
    for(i=0; i<TAM; i++){
        if(arboles[i].edad == -1) break;
        if(strcmp(arboles[i].nombre, str) == 0) continue;
        fprintf(archivo, FORMATO_ESCRITURA, arboles[i].nombre, arboles[i].edad, arboles[i].altura);
    }
    fclose(archivo);
    return actualizarStructArbol();
}

// MOSTRAR
void mostrarArbol(void){
    printf("----------- ARBOLES -----------\n");
    int i;
    for(i=0; i<TAM; i++){
        if(arboles[i].edad == -1) break;
        printf("Nombre: %s \nEdad: %d \nAltura: %.2f \n", arboles[i].nombre, arboles[i].edad, arboles[i].altura);
    }
}

// GETTERS
void get_nombre(char str[], char n[]){
    int delimitador = -1; // DELIMITADOR
    int i;
    for(i=0; i<strlen(str); i++){
        if(str[i] == '+'){
            delimitador = i;
            break;
        }
    }
    for(i=0; i<delimitador; i++){
        n[i] = str[i];
    }
}
int get_edad(char str[]){
    char auxEdad[100];
    // DELIMITADORES
    int delimitador1 = -1;
    int delimitador2 = -1;
    int count = 0;
    int i;
    for(i=0; i<strlen(str); i++){
        if(str[i] == '+'){
            count++;
            if(count == 1){
                delimitador1 = i+1;
                continue;
            }else if(count == 2){
                delimitador2 = i;
                break;
            }
        }
    }
    for(i=0; i<strlen(str); i++){
        if(i+delimitador1 == delimitador2) break;
        auxEdad[i] = str[i+delimitador1];
    }
    return atoi(auxEdad);
}
float get_altura(char str[]){
    char auxFloat[100];
    // DELIMITADORES
    int delimitador1 = -1;
    int delimitador2 = -1;
    int count=0;
    int i;
    for(i=0; i<strlen(str); i++){
        if(str[i] == '+'){
            count++;
            if(count == 1){
                delimitador1 = i+1;
                continue;
            }else if(count == 2){
                delimitador2 = i;
                break;
            }
        }else{
            continue;
        }
    }
    for(i=0; i<strlen(str); i++){
        if(i+delimitador2 == strlen(str)) break;
        auxFloat[i]=str[i+delimitador2];
    }
    return atof(auxFloat);
}

// SETTER
void modificarArbol(char str[]){
    int clave = -1;
    int i;
    for(i=0; i<TAM; i++){
        if(strcmp(arboles[i].nombre, str) == 0){
            clave = i;
            break;
        }
    }
    if(clave == -1){
        printf("No se ha encontrado ese arbol.\n");
        return;
    }else{
        int edad;
        float altura;
        int codigo;
        do{
            codigo = 0;
            printf("Nueva edad del arbol %s? \n", str);
            scanf("%d",&edad);
            printf("Nueva altura del arbol %s? \n", str);
            scanf("%f",&altura);
            if(edad<=0 || altura<=0){
                printf("La edad y la altura no pueden ser menores a 1. \n");
                codigo = -1;
            }
        }while(codigo == -1);
        system("cls");
        mostrarArbol();
        arboles[clave].edad = edad;
        arboles[clave].altura = altura;
        return eliminarArbol("N/A");
    }
}
