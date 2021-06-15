#include <stdio.h>
#include <stdlib.h>
void menu();
void cargarVector(int v[], int t);
void mostrarVector(int v[], int t);
void ordenamientoBurbuja(int v[], int t);
void ordenamientoSeleccion(int v[], int t);
void ordenamientoInsercion(int v[], int t);
void ordenarMayorAmenor(int v[], int t);
void ordenarMenorAmayor(int v[], int t);
int main(){
    int op,opDos,opTres,tam;
    printf("Ingrese tamanio del vector: \n");
    scanf("%d",&tam);
    int vector[tam];
    while(op!=6){
        menu();
        printf("\nElija una opcion: \n");
        scanf("%d",&op);
        switch(op) {
            case 1:
                cargarVector(vector, tam);
                break;
            case 2:
                mostrarVector(vector, tam);
                break;
            case 3:
                printf("Elija opcion: \n");
                printf(" 1- Ord. Burbuja.\n");
                printf(" 2- Ord. Seleccion.\n");
                printf(" 3- Ord. Insercion.\n");
                scanf("%d",&opDos);
                switch(opDos) {
                    case 1:
                        ordenamientoBurbuja(vector, tam);
                        break;
                    case 2:
                        ordenamientoSeleccion(vector, tam);
                        break;
                    case 3:
                        ordenamientoInsercion(vector, tam);
                        break;
                }
                break;
            case 4:
                printf("Elija opcion: \n");
                printf(" 1- Ord. de  mayor a menor.\n");
                printf(" 2- Ord. de menor a mayor\n");
                scanf("%d",&opTres);
                switch(opTres) {
                    case 1:
                        ordenarMayorAmenor(vector, tam);
                        break;
                    case 2:
                        ordenarMenorAmayor(vector, tam);
                        break;
                }
                break;
            case 5:
                mostrarVector(vector, tam);
                break;
        }

    }
    return 0;
}
void menu(){
    printf("\n---------Menu---------\n");
    printf("1- Crear vector.\n");
    printf("2- Mostrar vector.\n");
    printf("3- Elegir porque metodo de ordenamiento va a reorganizar el vector.\n");
    printf("4- Elegir en que orden mostrar el vector.\n");
    printf("5- Mostrar vector ordenado.\n");
    printf("6- Salir del menu.\n");
}
void cargarVector(int v[], int t){
    int i;
    for(i=0; i<t; i++ ){
        printf("Ingrese un valor: ");
        scanf("%d",&v[i]);
    }
}
void mostrarVector(int v[], int t){
    int i;
    printf("\n[");
    for (i=0; i<t; i++){
        printf(" %d ", v[i]);
    }
    printf("]\n ");
}
void ordenamientoBurbuja(int v[], int t){
    int i,j,aux;
    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
            if(v[j]>=v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}
void ordenamientoSeleccion(int v[], int t){
    int x,y,min,tmp;
    for(x=0; x<t; x++){
        min = x;
        for(y=x+1; y<t; y++){
            if(v[min]>v[y]){
                min = y;
            }
        }
        tmp = v[min];
        v[min] = v[x];
        v[x] = tmp;
    }
}
void ordenamientoInsercion(int v[], int t){
    int x,y,m,tmp,izq,der;
    for(x=1; x<t; x++){
        tmp = v[x];
        izq = 0;
        der = x - 1;
        while(izq <= der){
            m = (izq + der) / 2;
            if(tmp < v[m]){
                der = m - 1;
            }else{
                izq = m + 1;
            }
        }
        y = x - 1;
        while(y >= izq){
            v[y+1] = v[y];
            y = y - 1;
        }
        v[izq] = tmp;
    }
}
void ordenarMayorAmenor(int v[], int t){
   int i,j,aux;
    for(i=0; i<t; i++){
        for(j=i+1; j<t; j++){
            if(v[i] < v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}
void ordenarMenorAmayor(int v[], int t){
   int i,j,aux;
    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
            if(v[j]>=v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}
