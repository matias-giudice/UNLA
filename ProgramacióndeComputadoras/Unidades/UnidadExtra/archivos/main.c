#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Persona{
    int dni;
    char nombre[30];
};
struct Persona pasarCharAStruct(char c[], int tam);
int main(){
    printf("ARCHIVOS\n");
/*
    //PASOS PARA ESCRIBIR ARCHIVO
    //1- ABRIR ARCHIVO
    FILE * archivoEscribir;
    archivoEscribir = fopen("archivo1.txt", "a");
    //2- ESCRIIR ARCHIVO
    fprintf(archivoEscribir,"Estoy escribiendo un archivo\nAhora muestro con entero %d",55);
    fprintf(archivoEscribir,"\n\nBasta, ya escribi demasiado");
    //3- CERRAR ARCHIVO
    fclose(archivoEscribir);
*/
/*
    //PASOS PARA LEER ARCHIVO
    //1- ABRIR ARCHIVO
    FILE * archivoLeer;
    archivoLeer = fopen("archivo2.txt", "r");
    //2- LEER ARCHIVO
    while(!feof(archivoLeer)){
        char aux[40] = " ";
        fgets(aux, 40, archivoLeer);
        printf("-----> %s", aux);
    }
    //3- CERRAR ARCHIVO
    fclose(archivoLeer);
*/
    //PASOS PARA USAR DATOS ARCHIVO
    struct Persona personasVector[50];
    int contador = 0;
    //1- ABRIR ARCHIVO
    FILE * archivoAStruct;
    archivoAStruct = fopen("personas.txt", "r");
    //2- LEER ARCHIVO
    while(!feof(archivoAStruct)){
        char aux[30] = " ";
        fgets(aux, 30, archivoAStruct);
        personasVector[contador] = pasarCharAStruct(aux, 30);
        contador++;
    }
    //3- CERRAR ARCHIVO
    fclose(archivoAStruct);
    //3- MOSTRAR PERSONAS
    int i;
    for(i=0; i<50; i++){
        printf("%s\n",personasVector[i].nombre);
    }
    return 0;
}
struct Persona pasarCharAStruct(char c[], int tam){
    struct Persona p;
    //OLVIDAMOS DE LOS ARCHIVOS
    int posicionPrimerMas = 0; //BUSCA EL +
    //DOS VARIABLES PARA GUARDAR DNI Y NOMBRE
    char dniChar[10] = "";
    char nombreChar[20] = "";
    int i;
    for(i = 0; i<tam; i++){
        //DONDE ESTA EL + ???
        if(c[i]=='+'){
            posicionPrimerMas = i;
        }
    }
    for(i = 0; i<posicionPrimerMas; i++){
        dniChar[i] = c[i];
    }
    for(i = posicionPrimerMas+1; i<tam; i++){
        nombreChar[i-posicionPrimerMas-1] = c[i];
    }
    strcpy(p.nombre, nombreChar);
    p.dni = atoi(dniChar);
    return p;
};
