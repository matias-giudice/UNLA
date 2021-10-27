#include <stdio.h>
#include <string.h>
#include <stdlib.h>



//Estructura a usar
struct EstructuraEmpleado{
int legajo;
char nombre[20];
int sueldo;
}Empleados[6];



//Carga personas leidas... recibe, un texto con comas y la persona a guardar
void cargarPersona(char lectura[30], int i);


void menu();
void ingresarEmpleado();
void mostrarEmpleados();
void mostrarEmpleado();
void eliminarEmpleado();
void eliminarArchivo();

int main(){

    menu();

    /*
    Personas[0].dni = 111; strcpy(Personas[0].nombre, "Nico"); Personas[0].edad = 28;
    Personas[1].dni = 22222; strcpy(Personas[1].nombre, "Brenda"); Personas[1].edad = 19;



    FILE * g;
    g = fopen("personas.txt", "w+");



    int i;
    for( i = 0; i<2; i++){
    fprintf(g,"%d,%d,%s\n",Personas[i].dni, Personas[i].edad, Personas[i].nombre);
        }


    fclose(g) ;



    /////////////////

    int i = 0;
    FILE * archivo;
    archivo = fopen("personas.txt", "r");


    while(!feof(archivo)){
    char lectura[30];


    fgets(lectura, 30, archivo);


    if(!feof(archivo)){
    printf("El renglon es: %s", lectura);
    cargarPersona(lectura, i);
    i++;
    }



    } //Cierra la lectura del archivo

    int indice;
    //Muestro lo que cargue desde el archivo
        for( indice = 0; indice<i; indice++){
    printf("Persona cargana con DNI, %d, edad, %d, y nombre %s\n",Copias[indice].dni, Copias[indice].edad, Copias[indice].nombre);
        }
    */

    return 0;
}
void menu(){
    int op;
    do{
        printf("\n--------------MENU----------------\n");
        printf("[1]. Abrir archivo e ingresar datos.\n");
        printf("[2]. Mostrar datos de un empleado.\n");
        printf("[3]. Mostrar todos los empleados.\n");
        printf("[4]. Eliminar datos de un empleado.\n");
        printf("[5]. Eliminar archivo.\n");
        printf("[6]. Salir.\n");
        printf("Elija una opcion: \n");
        scanf("%d", &op);
        printf("----------------------------------\n");

        switch(op){
            case 1: ingresarEmpleado();
                break;
            case 2: mostrarEmpleado();
                break;
            case 3: mostrarEmpleados();
                break;
            case 4: eliminarEmpleado();
                break;
            case 5: eliminarArchivo();
                break;
            case 6:
                printf("Salio del programa.\n");
                exit(1);
                break;
            default:
                printf("Error al elegir opcion, vuelva a intentar.\n");
                break;
        }
    }while(op!=6);
}
void ingresarEmpleado(){
    FILE * archivoEmpleado = fopen("empleados.txt", "a");
    int legajo;
    char nombre[20]=" ";
    int sueldo;
    int aux=0,nuevo;
    do{
        system("cls");
        printf("Legajo del empleado: \n");
        scanf("%d",&legajo);
        system("cls");
        printf("Nombre del empleado: \n");
        fflush(stdin);
        gets(nombre);
        system("cls");
        printf("Sueldo del empleado: \n");
        scanf("%d",&sueldo);
        fprintf(archivoEmpleado, "%d;%s;%d\n\0",legajo,nombre,sueldo);

        printf("Quiere ingresar mas empleados? \nIngrese [1] para ingresar otro empleado.\nIngrese [2] para salir.\n");
        scanf("%d",&nuevo);
    }while(nuevo==1);
    fclose(archivoEmpleado);
}
void mostrarEmpleados(){

    system("cls");

    int i=0;
    FILE * archivoEmpleado = fopen("empleados.txt", "r");

    while(!feof(archivoEmpleado)){
        char lectura[30];
        fgets(lectura, 30, archivoEmpleado);

        if(!feof(archivoEmpleado)){
            //printf("El renglon es: %s", lectura);
            cargarPersona(lectura, i);
            i++;
        }

    } //Cierra la lectura del archivo
    fclose(archivoEmpleado);
    printf("---------EMPLEADOS---------\n");
    int indice;
    //Muestro lo que cargue desde el archivo
    for(indice=0; indice<6; indice++){
        printf("Legajo: %d \nNombre: %s \nSueldo: %d \n",Empleados[indice].legajo, Empleados[indice].nombre, Empleados[indice].sueldo);
    }
}
void mostrarEmpleado(){
    /* Ver todos los datos de una persona */
    char textoAux[30];
    system("cls");
    puts("Legajo a buscar:");
    fflush(stdin);
    gets(textoAux);
    int i,j = 0;
    for (i=0; i<=Empleados; i++){
        if (strcmp (textoAux, Empleados[i].legajo) == 0){
            puts (Empleados[i].legajo);
            if (strcmp(Empleados[i].nombre, "") == 0){
                printf("%d %s %d.\n", Empleados[i].legajo, Empleados[i].nombre, Empleados[i].sueldo);
                j ++;
            }
        }
        if (j == 0){
            printf("No existe ningun empleado con ese legajo.\n");
        }
    }
}
void eliminarEmpleado(){
 //No pude lograr hacerlo de esta forma :(
   /* system("cls");
    struct EstructuraEmpleado empleadoAEliminar;
    FILE * archivoEliminarEmpleado = fopen("empleados.txt", "r");
    int count = -1;
    char auxLegajo[10] = "";
    char auxNombre[20] = "";
    char auxSueldo[10] = "";
    while(!feof(archivoEliminarEmpleado)){
        count++;
        int auxLegajo;
        printf("Ingrese legajo que desea eliminar: \n");
        scanf("%d",&auxLegajo);
        while(fread(&empleadoAEliminar, sizeof(struct EstructuraEmpleado),1, archivoEliminarEmpleado)){
            if(auxLegajo==empleadoAEliminar.legajo){
                fwrite(&empleadoAEliminar, sizeof(struct EstructuraEmpleado),1,archivoEliminarEmpleado);
            }
        }
    }

    fclose(archivoEliminarEmpleado);

    FILE * archivoEmp = fopen("empleados.txt", "w");
    int i;
    for(i=0; i<6; i++){
        if(empleadoAEliminar[i]==0){
            break;
        }
        fprintf(archivoEmp,"%d;%s;%d\n\0",empleadoAEliminar[i].legajo,empleadoAEliminar[i].nombre,empleadoAEliminar[i].sueldo);
    }

    fclose(archivoEmp);*/
    /*FILE * archivoTemporal = fopen("temporal.txt", "w");
    FILE * archivoEliminarEmpleado = fopen("empleados.txt", "r");
    struct EstructuraEmpleado listaEmpleados;
    if(!archivoEliminarEmpleado){
        printf("Vacio.\n");
    }else{
        int auxLegajo;
        printf("Ingrese legajo que desea eliminar: \n");
        scanf("%d",&auxLegajo);
        while(fread(&listaEmpleados, sizeof(struct EstructuraEmpleado),1, archivoEliminarEmpleado)){
            if(auxLegajo==listaEmpleados.legajo){
                fwrite(&listaEmpleados, sizeof(struct EstructuraEmpleado),1,archivoTemporal);
            }
            fclose(archivoTemporal);
            fclose(archivoEliminarEmpleado);
            FILE * archivoTemporal = fopen("temporal.txt", "r");
            FILE * archivoEliminarEmpleado = fopen("empleados.txt", "w");
            while(fread(&listaEmpleados, sizeof(struct EstructuraEmpleado),1, archivoTemporal)){
                fwrite(&listaEmpleados, sizeof(struct EstructuraEmpleado),1, archivoEliminarEmpleado);
            }
        }
        if(ferror(archivoTemporal)){
            printf("Error al eliminar.\n");
        }else{
            printf("Eliminado correctamente.\n");
        }
    }
    fclose(archivoEliminarEmpleado);
    fclose(archivoTemporal);
    rename(archivoTemporal, archivoEliminarEmpleado);*/
}
void eliminarArchivo(){
    char nombreArchivo[20];
    system("cls");
    printf("Nombre del archivo: \n");
    fflush(stdin);
    gets(nombreArchivo);
    strcat(nombreArchivo,".txt");
    fflush(stdin);
    FILE * archivoEmpleado = fopen(nombreArchivo,"a");
    if(archivoEmpleado == NULL){
        puts("El archivo no existe.\n");
    }
    fclose(archivoEmpleado);
    remove(archivoEmpleado);

    remove("empleados.txt");

}
void cargarPersona(char lectura[30], int i){
    int tamanio = strlen(lectura);

    char auxLegajo[10] = "";
    char auxNombre[20] = "";
    char auxSueldo[10] = "";

    int finLegajo;
    int finNombre;
    int j;

    //for para encontrar la primer coma
    for (j=0; j<tamanio; j++){
        //Encontre primer coma
        if(lectura[j]==';'){
            finLegajo = j;
            j = tamanio;
        }
    }//cierra el for

    //for para encontrar la 2da coma
    for (j=finLegajo+1; j<tamanio; j++){
        //Encontre primer coma
        if(lectura[j]==';'){
            finNombre = j;
            j = tamanio;
        }
    }//cierra el for

    int carga;
    //cargo el DNI
    for (carga=0; carga<finLegajo; carga++){
        auxLegajo[carga] = lectura[carga];
    }


    //cargo la edad
    for (carga=(finLegajo+1); carga<finNombre; carga++){
        auxNombre[carga-finLegajo-1] = lectura[carga];
    }


    //cargo el nombre
    for (carga=(finNombre+1); carga<tamanio; carga++){
        auxSueldo[carga-finNombre-1] = lectura[carga];
    }


    Empleados[i].legajo = atoi(&auxLegajo);
    strcpy(Empleados[i].nombre, auxNombre);
    Empleados[i].sueldo = atoi(&auxSueldo);

}

