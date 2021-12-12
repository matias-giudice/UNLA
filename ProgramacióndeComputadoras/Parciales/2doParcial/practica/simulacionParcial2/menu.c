#include <stdio.h>
#include <stdlib.h>
#include "arboles.h"
#include "bosque.h"
#define CLEAR "cls"
/*enum {CREAR = 1, CARGAR = 2, MOSTRAR = 3, MODIFICAR = 4, ELIMINAR = 5, COPIAR = 6, SALIR = 7};

void informacionEstudiante(){
    printf("NOMBRE Y APELLIDO: MATÍAS DAMIAN GIUDICE\n");
    printf("DNI: 43.626.738 \n");
    system("pause");
}
void menuPrincipal(){
    int op;
    do{
        printf("\n--------------MENU PRINCIPAL----------------\n");
        printf("[1]. CREAR ARCHIVO CON DATOS AUTOMATICAMENTE.\n");
        printf("[2]. CARGAR DATOS MANUALMENTE.\n");
        printf("[3]. MOSTRAR TODOS LOS ARBOLES CARGADOS.\n");
        printf("[4]. MODIFICAR DATOS DE UN ARBOL.\n");
        printf("[5]. ELIMINAR DATOS DE UN ARBOL.\n");
        printf("[6]. Salir.\n");
        printf("Elija una opcion: \n");
        scanf("%d", &op);
        printf("--------------------------------------------\n");

        switch(op){
            case CREAR: menuCrear(); //ingresarEmpleado();
                break;
            case CARGAR: menuCargar(); //mostrarEmpleado();
                break;
            case MOSTRAR: menuMostrar(); //mostrarEmpleados();
                break;
            case MODIFICAR: menuModificar(); //eliminarEmpleado();
                break;
            case ELIMINAR: menuEliminar();
                break;
            case COPIAR: menuCopiar();
                break;
            case SALIR:
                printf("Salio del programa.\n");
                exit(1);
                break;
            default:
                printf("Error al elegir opcion, vuelva a intentar.\n");
                break;
        }
    }while(op!=SALIR);
}*/
/*void menuCrear(){
    //agregarArbol();
}
void menuCargar(char n[TAM]){
    //Bosque amazona = crearBosquePorParametros("Amazona", 1987);
    //mostrarBosque(amazona);
    Arbol arbol3 = agregarArbolPorParametros("Laurel", 210, 2.55);
    Arbol arbol4 = agregarArbolPorParametros("Secuoya Caucho", 150, 1.99);
    Arbol arbol5 = agregarArbolPorParametros("Gikgo biloba", 90, 1.88);

    agregarBosque(n,arbol3);
    agregarBosque(n,arbol4);
    agregarBosque(n,arbol5);
}
void menuMostrar(){
    //mostrarBosque();
}
void menuModificar(){
    printf("---------------Luego de las modificaciones-----------------\n\n\n");

    //modificarDatos(amazona,"Laurel");
}
void menuEliminar(){
    printf("---------------Eliminamos 2 arboles-----------------\n\n\n");


    //eliminararbolse(amazona,"Cocotero");
    //eliminararbolse(amazona,"Falsa Acacia");
}
void menuCopiar(){
    copiarEnArchivo(amazona);
}*/
