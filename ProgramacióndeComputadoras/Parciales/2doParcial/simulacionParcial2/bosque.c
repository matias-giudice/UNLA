#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bosque.h"
#include "arboles.h"

struct estructuraBosque{
    char nombre[30];
    int anios;
    Arbol arboles[CANT];
};

Bosque crearBosquePorParametros(char nombre[30], int a){
    Bosque arboleda = malloc(sizeof(struct estructuraBosque));

    strcpy(arboleda->nombre,nombre);
    arboleda->anios = a;

    //cargo el archivo en las primeras 3 pos

    FILE * archivo = fopen("arboles.txt","r");

    int renglon = 0;
    while (!feof(archivo)){
        char variable[TAM] = "";

        fgets(variable,TAM,archivo); //Lee hasta que encuentra un \n, \0
        //Luego pasa al siguiente renglon

        arboleda->arboles[renglon] = cargarCharAStructArbol(variable, TAM); //SUMA LA INFO EXTRAIDA

        //printf("Renglon %d -----> %s\n\n\n",renglon, variable);
        renglon++;
    }

    fclose(archivo);
    int i;
    for(i=renglon; i<TAM; i++){
        arboleda->arboles[i] = agregarArbolPorParametros("vacio",-1,-1);
    }

    return arboleda;
}

void eliminarBosque(Bosque elementoBosque){
    free(elementoBosque);
}

void mostrarBosque(Bosque elementoBosque){
    printf("----DATOS DEL BOSQUE----\n");
    printf("Nombre: %s \nCreación: %d \n", elementoBosque->nombre, elementoBosque->anios);

    int i;
    for(i=0; i<CANT; i++){
        if (getEdad(elementoBosque->arboles[i]) != -1){
            printf("\n----------------------- Arbol -------------------- %d \n\n",i);
            mostrarArbol(elementoBosque->arboles[i]);
        }
    }
}

char *getNombreBosque(Bosque elementoBosque){

    return printf("Nombre del Bosque: %s \n", elementoBosque->nombre);

}
int getAniosBosque(Bosque elementoBosque){

  return printf("Creación del Bosque: %d \n",elementoBosque->anios);

}

void setNombreBosque(Bosque elementoBosque, char nuevoNombre[30]){
    strcpy(elementoBosque->nombre,nuevoNombre);
}
void setAniosBosque(Bosque elementoBosque, int nuevoAnio){
    elementoBosque->anios = nuevoAnio;
}

int buscarPosVacia(Bosque elementoBosque){
    //buscamos la pos vacia
    int retornoPos = -1; //En caso de no encontrar
    int i;
    for(i=0; i<CANT; i++){
        if(getEdad(elementoBosque->arboles[i]) == -1){
            retornoPos = i;
            //salgo del for
            i = CANT;
        }
    }
    return retornoPos;
}
int buscarPosNombre(Bosque elementoBosque, char nombre[30]){
    int retornoPos = -1;
    int i;
    for(i=0; i<CANT; i++){
        if(strcmp(getNombre(elementoBosque->arboles[i]),nombre) == 0){
            retornoPos = i;
            i = CANT;
        }
    }
    return retornoPos;
}

void agregarBosque(Bosque elementoBosque, Arbol nuevoArbol){
    //agregamos un arbol nuevo
    int posVacia = buscarPosVacia(elementoBosque);

    if(posVacia != -1){
        elementoBosque->arboles[posVacia] = nuevoArbol;
    }
}
void modificarDatos(Bosque elementoBosque, char nombreAModificar[30]){
    int posVacia = buscarPosNombre(elementoBosque,nombreAModificar);

    if(posVacia != -1){
        elementoBosque->arboles[posVacia] = agregarArbolPorTeclado(nombreAModificar);
    }
}
void eliminarArboles(Bosque elementoBosque, char nombreAEliminar[30]){
    int posVacia = buscarPosNombre(elementoBosque,nombreAEliminar);

    if(posVacia != -1){
        elementoBosque->arboles[posVacia]=agregarArbolPorParametros("eliminado",-1,-1);
    }
}
void copiarEnArchivo(Bosque elementoBosque){
    //cerrar el archivo y crear un clon
    FILE * archivo = fopen("arboles2.txt","w");
    int i;
    for(i=0; i<TAM; i++){
        if(getEdad(elementoBosque->arboles[i]) != -1){
            fprintf(archivo,"%s+%d+%.2f \n",getNombre(elementoBosque->arboles[i]),getEdad(elementoBosque->arboles[i]),getAltura(elementoBosque->arboles[i]));
        }
    }

    fclose(archivo);
}
