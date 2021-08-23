#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5
struct Vehiculo{
    char patente[20];
    int anio;
    char color[20];
    float precio;
};
struct Vehiculo crearVehiculoPorTeclado();
void mostrarVehiculo(struct Vehiculo veh);
void cargarVehiculos(struct Vehiculo array[], int t);
void mostrarVehiculos(struct Vehiculo array[], int t);
void ordenarVehiculos(struct Vehiculo array[], int t);
int buscarVehiculo(struct Vehiculo array[], int t, char busco[10]);
int main(){
    struct Vehiculo vehiculos[TAM];
    cargarVehiculos(vehiculos,TAM);
    mostrarVehiculos(vehiculos,TAM);
    ordenarVehiculos(vehiculos,TAM);
    mostrarVehiculos(vehiculos,TAM);
    printf("\n\nResultado de la busqueda: %d",buscarVehiculo(vehiculos,TAM,"AA8344"));
    return 0;
}
struct Vehiculo crearVehiculoPorTeclado(){
    struct Vehiculo v;
    printf("\nIngrese la patente del vehiculo: \n");
    fflush(stdin);
    gets(v.patente);
    printf("Ingrese el anio del vehiculo: \n");
    scanf("%d", &v.anio);
    printf("Ingrese el color del vehiculo: \n");
    fflush(stdin);
    gets(v.color);
    printf("Ingrese el precio del vehiculo: \n");
    scanf("%f", &v.precio);
    return v;
};
void mostrarVehiculo(struct Vehiculo veh){
    printf("\n\n--------VEHICULO--------\n");
    printf("\nPATENTE: %s", veh.patente);
    printf("\nANIO: %d", veh.anio);
    printf("\nCOLOR: %s", veh.color);
    printf("\nPRECIO: %.2f", veh.precio);
}
void cargarVehiculos(struct Vehiculo array[], int t){
    int i;
    for(i=0; i<t; i++){
        array[i] = crearVehiculoPorTeclado();
    }
}
void mostrarVehiculos(struct Vehiculo array[], int t){
    int i;
    for(i=0; i<t; i++){
        mostrarVehiculo(array[i]);
    }
}
void ordenarVehiculos(struct Vehiculo array[], int t){
    struct Vehiculo aux;
    int i,j;
    for(i=0; i<t; i++){
        for(j=0; j<t-1; j++){
            if(strcmp(array[j].patente,array[j+1].patente) == 1){
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }
}
int buscarVehiculo(struct Vehiculo array[], int t, char busco[10]){
    int pos = -1;
    int i;
    for(i=0; i<t; i++){
        if(strcmp(array[i].patente,busco) == 0){
            pos = 1;
        }
    }
    return pos;
}
