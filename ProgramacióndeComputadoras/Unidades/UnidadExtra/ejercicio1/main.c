#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 6
///ENUMERADORES
enum {ERROR = -1, FALSE, TRUE}; //ERROR = -1, FALSE = 0, TRUE = 1

struct EstructuraProducto{
    float precio;
    char nombre[20];
};

struct EstructuraProducto vectorProductos[TAM];
struct EstructuraProducto pasarCharAStruct(char c[], int t);

void menu();
void ingresarProducto();
void mostrarProducto();

int main(){
    menu();
    return 0;
}

void menu(){
    int op;
    do{
        printf("\n--------------MENU----------------\n");
        printf("1- Abrir archivo e ingresar datos.\n");
        printf("2- Mostrar datos ingresados.\n");
        printf("3- Salir.\n");
        printf("Elija una opcion:\n");
        scanf("%d", &op);
        printf("----------------------------------\n");

        switch(op){
            case 1: ingresarProducto();
                break;
            case 2: mostrarProducto();
                break;
            case 3:
                printf("Salio del programa.\n");
                exit(1);
                break;
            default:
                printf("Error al elegir opcion, vuelva a intentar.\n");
                break;
        }
    }while(op!='3');
}

void ingresarProducto(){
    FILE * archivoEscribir = fopen("productos.txt", "a");
    char nombre[50]=" ";
    float precio=-1;
    int aux=0;
    printf("Nombre del producto: \n");
        fflush(stdin);
        gets(nombre);
    system("cls");
    printf("Precio del producto: \n");
    scanf("%f",&precio);
    fprintf(archivoEscribir, "%.2f;%s\n\0",precio,nombre);
    fclose(archivoEscribir);
}
void mostrarProducto(){
    int renglon = 0;
    char nombreArchivo[20];

    printf("Nombre del archivo: \n");
    fflush(stdin);
    gets(nombreArchivo);
    strcat(nombreArchivo,".txt");
    fflush(stdin);
    FILE * archivoProducto = fopen(nombreArchivo ,"r");
    if(archivoProducto == NULL){
        puts("El archivo no existe.\n");
    }
    while (!feof(archivoProducto)){
            char aux[20] = " ";
            fgets(aux, 20, archivoProducto);
            vectorProductos[renglon] = pasarCharAStruct(aux,20);
            renglon++;
    }

    fclose(archivoProducto);

    printf("\n\nMOSTRAR PRODUCTOS\n\n");
    int i;
    for (i = 0 ; i<6; i++){
        printf("Precio: %.2f \nNombre: %s \n", vectorProductos[i].precio, vectorProductos[i].nombre);
    }
}
struct EstructuraProducto pasarCharAStruct(char c[], int t){
    struct EstructuraProducto productoRetorno;

    char auxPrecio[30] = " ";
    char auxNombre[30] = " ";

    int  posDelPuntoYComa = ERROR;
    int i;
    //Buscar el delimitador ----
    for (  i = 0; i<t;i++){
        if ( c[i]==';' ){  //encontre el delimitador
            posDelPuntoYComa = i;
        }
    }
    //Leemos el primer dato "precio"
    for (  i = 0 ; i<posDelPuntoYComa; i++){
        auxPrecio[i] = c[i];
    }
    //Leemos el segundo dato
    for (  i = posDelPuntoYComa+1; i<t; i++){
        auxNombre[i-posDelPuntoYComa-1]   = c[i];
    }
    productoRetorno.precio = atof(auxPrecio); //Trasnformar un char[] a float
    strcpy(productoRetorno.nombre, auxNombre);

    return productoRetorno;
};
