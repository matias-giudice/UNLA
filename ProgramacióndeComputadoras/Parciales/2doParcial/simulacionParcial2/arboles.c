#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arboles.h"

struct estructuraArbol{
    char nombre[TAM];
    int edad;
    float altura;
};

/*void agregarArbol(){
    //PASOS PARA ESCRIBIR ARCHIVO
    //1- ABRIR ARCHIVO
    FILE * archivo;
    archivo = fopen("arboles.txt", "a");
    //2- ESCRIIR ARCHIVO
    fprintf(archivo,"Cocotero+233+3.78\n");
    fprintf(archivo,"Sauce lloron+310+5.11\n");
    fprintf(archivo,"Falsa Acacia+20+1.15\n");
    //3- CERRAR ARCHIVO
    fclose(archivo);
}*/

Arbol agregarArbolPorTeclado(char n[TAM]){
    //char auxNombre[TAM];
    int auxEdad;
    float auxAltura;

    /*printf("Ingrese nombre: \n");
    fflush(stdin);
    gets(auxNombre);*/
    printf("Ingrese edad: \n");
    scanf("%d", &auxEdad);
    printf("Ingrese altura: \n");
    scanf("%f", &auxAltura);

    return agregarArbolPorParametros(n,auxEdad,auxAltura);
}

Arbol agregarArbolPorParametros(char n[TAM], int e, float a){
    Arbol elementoArbol = malloc(sizeof(struct estructuraArbol));

    strcpy(elementoArbol->nombre, n);
    elementoArbol->edad = e;
    elementoArbol->altura = a;

    return elementoArbol;
}

void eliminarArbol(Arbol elementoArbol){
    free(elementoArbol);
}

void mostrarArbol(Arbol elementoArbol){
    printf("----DATOS DEL ARBOL----\n");
    printf("Nombre: %s \nEdad: %d \nAltura: %.2f \n", elementoArbol->nombre, elementoArbol->edad, elementoArbol->altura);
}

char *getNombre(Arbol elementoArbol){
    return elementoArbol->nombre;
}
int getEdad(Arbol elementoArbol){
    return elementoArbol->edad;
}
float getAltura(Arbol elementoArbol){
    return elementoArbol->altura;
}

void setNombre(Arbol elementoArbol, char nuevoNombre[TAM]){
    strcpy(elementoArbol->nombre,nuevoNombre);
}
void setEdad(Arbol elementoArbol, int nuevaEdad){
    elementoArbol->edad = nuevaEdad;
}
void setAltura(Arbol elementoArbol, float nuevaAltura){
    elementoArbol->altura = nuevaAltura;
}

Arbol cargarCharAStructArbol(char lectura[], int t){
    Arbol retornoElementoArbol = malloc(sizeof(struct estructuraArbol));

    char auxNombre[TAM] = "";
    char auxEdad[TAM] = "";
    char auxAltura[TAM] = "";

    //BUSCAN EL + [DELIMITADORES]
    int finNombre;
    int finEdad;

    int j;

    //for para encontrar el 1er +
    for (j=0; j<t; j++){
        //Encuentra primer +
        if(lectura[j]=='+'){
            finNombre = j;
            j = t;
        }
    }//cierra el for

    //for para encontrar el 2do +
    for (j=finNombre+1; j<t; j++){
        //Encuentra segundo +
        if(lectura[j]=='+'){
            finEdad = j;
            j = t;
        }
    }//cierra el for

    int carga;
    //cargo el nombre
    for (carga=0; carga<finNombre; carga++){
        auxNombre[carga] = lectura[carga];
    }


    //cargo la edad
    for (carga=(finNombre+1); carga<finEdad; carga++){
        auxEdad[carga-finNombre-1] = lectura[carga];
    }


    //cargo el altura
    for (carga=(finEdad+1); carga<t; carga++){
        auxAltura[carga-finEdad-1] = lectura[carga];
    }


    strcpy(retornoElementoArbol->nombre, auxNombre);
    retornoElementoArbol->edad = atoi(auxEdad); //Transforma char a int
    retornoElementoArbol->altura = atof(auxAltura); //Transforma char a float

    return retornoElementoArbol;

}
