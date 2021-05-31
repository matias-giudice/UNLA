#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanio,i,j,sP=0,sI=0,cI=0,p=0,posMa=0,posMe=0;
    printf("Ingrese la cantidad de posiciones del vector: \n");
    scanf("%d",&tamanio);

    int vector[tamanio];

    for (i=0; i<tamanio; i++){
        printf ("Ingrese un numero entero: \n");
        scanf ("%d",&vector[i]);
        if(vector[i]%2==0){
            sP=sP+vector[i];
        }else{
            cI=cI+1;
            sI=sI+vector[i];
            p=sI/cI;
        }
    }

    int maximo = vector[0];
    int minimo = vector[0];
    int cont=0,cont2=0;

    for (i = 0;i<tamanio;i++){
        cont=cont+1;
        if (maximo < vector[i]){
            maximo = vector[i];
            posMa = cont - 1;
        }
    }
    for (i = 0;i<tamanio;i++){
        cont2 = cont2 + 1;
        if (minimo > vector[i]){
            minimo = vector[i];
            posMe = cont2 - 1;
        }
    }

    printf("La suma de los numeros pares es: %d \n",sP);
    printf("El promedio de los impares es: %d \n",p);
    printf("El valor maximo es %d y su posicion es: %d \n",maximo,posMa);
    printf("El valor minimo es %d y su posicion es: %d \n",minimo,posMe);

    printf("\nArray de derecha a izquierda\n");
    for (i = tamanio-1;i>=0;i--){
        printf("%d ",vector[i]);
    }
    printf("\n");
    printf("Array de izquierda a derecha\n");
    for (i = 0;i<tamanio;i++){
        printf("%d ",vector[i]);
    }
    printf("\n");

    return 0;
}
