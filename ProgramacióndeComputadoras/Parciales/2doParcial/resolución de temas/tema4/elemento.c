#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "elemento.h"

Elemento crearElemento(int nroAtomoElemento, char simbElemento[30], char nombreElemento[30], char tipoElemento[30], int cantNeutronesElemento){
    Elemento e = malloc(sizeof(struct estructuraElemento));

    e->nroAtomo = nroAtomoElemento;
    strcpy(e->simb, simbElemento);
    strcpy(e->nombre, nombreElemento);
    strcpy(e->tipo, tipoElemento);
    e->cantNeutrones = cantNeutronesElemento;
    setCantProtones(e);
    setMasico(e);
    setCantElectrones(e);


    return e;
}

void destruirElemento(Elemento e){
    free(e);
}

void mostrarElementos(Elemento e[], int tam){
    int i;
    for(i=0; i<tam; i++){
        printf("----------------------------\n");
        printf("%d              <---Numero Masico\n  %s            <---Numero Simbolo\n%d              <---Numero Atomico\n", e[i]->nroMasico, e[i]->simb, e[i]->nroAtomo);
        printf("\nEse es el elemento llamado %s\n", e[i]->nombre);
        printf("PROTONES: %d \nELECTRONES: %d \nNEUTRONES: %d \n",e[i]->cantProtones, e[i]->cantElectrones, e[i]->cantNeutrones);
        printf("Y es del tipo: %s \n", e[i]->tipo);
        printf("----------------------------\n");
    }
}

int getNroAtomo(Elemento e){
    return e->nroAtomo;
}
char *getSimb(Elemento e){
    return e->simb;
}
char *getNombre(Elemento e){
    return e->nombre;
}
char *getTipo(Elemento e){
    return e->tipo;
}
int getCantNeutrones(Elemento e){
    return e->cantNeutrones;
}
int getNroMasico(Elemento e){
    return e->nroMasico;
}
int getCantProtones(Elemento e){
    return e->cantProtones;
}
int getCantElectrones(Elemento e){
    return e->cantElectrones;
}

void setNroAtomo(Elemento e, int nuevoNroAtomo){
    e->nroAtomo = nuevoNroAtomo;
}
void setSimb(Elemento e, int nuevoSimb[30]){
    strcpy(e->simb, nuevoSimb);
}
void setNombre(Elemento e, int nuevoNombre[30]){
    strcpy(e->nombre, nuevoNombre);
}
void setTipo(Elemento e, int nuevoTipo[30]){
    strcpy(e->tipo, nuevoTipo);
}
void setCantNeutrones(Elemento e, int nuevaCantNeutrones){
    e->cantNeutrones = nuevaCantNeutrones;
}
void setMasico(Elemento e){
    e->nroMasico =  e->cantProtones + e->cantNeutrones;
}
void setCantProtones(Elemento e){
    e->cantProtones = getNroAtomo(e);
}
void setCantElectrones(Elemento e){
    e->cantElectrones = getCantProtones(e);
}

void ordenarElementos(Elemento tabla[], int tam){
    Elemento aux;
    int i;
    for(i=0; i<tam; i++){
        int j;
        for(j=0; j<tam-1; j++){
            if(getNroMasico(tabla[j]) > getNroMasico(tabla[j+1])){
                aux = tabla[j];
                tabla[j] = tabla[j+1];
                tabla[j+1] = aux;
            }
        }
    }
}
