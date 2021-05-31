 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 int main(){
    srand(time(0));
    printf("---------------- U4:Arreglos - Ejercicio 1 ----------------\n\n");
    int renglon,columna,i,j;
    int cantVer = 12; //meses
    int cantHor = 4; //empresas
    int matriz[cantVer][cantHor]; //matriz[12][4]
    int sumarFilas = 0;
    int sumarColumnas = 0;
    int totalGanado = 0;
    //cargar la matriz
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            matriz[columna][renglon] = rand() % 50;
        }
    }
    //mostrar la matriz
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("%d " , matriz[columna][renglon] );
        }
        printf("\n" );
    }
    printf("\n" );
    //total ganado por cada empresa al año
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            sumarFilas = sumarFilas + matriz[columna][renglon];
        }
        printf("Total ganado por la empresa %d al anio es: %d \n", (renglon+1), sumarFilas );
        sumarFilas = 0;
        printf("\n" );
    }
    //se gano por mes contando a todas las empresas
    for(columna = 0; columna<cantVer; columna++){
        for(renglon = 0; renglon < cantHor; renglon ++){
            sumarColumnas = sumarColumnas + matriz[columna][renglon];
        }
        printf("Se gano en el mes %d contando a todas las empresas: %d \n", (columna+1), sumarColumnas );
        sumarColumnas = 0;
        printf("\n" );
    }
    //total ganado por todas las empresas juntas
    int suma = 0;//  Suma va aqui...
    for(columna = 0; columna<cantVer; columna++){
        for(renglon = 0; renglon < cantHor; renglon ++){
            suma = suma + matriz[columna][renglon];
        }
    }
    printf ( "Total ganado por todas las empresas juntas: %d\n", suma );
    //encontrar que empresa gano mas y en qué mes
    int menor = matriz[0][0];
    int mayor = matriz[0][0];
    //char mayorPosicion = "0,0";
    //char menorPosicion = "0,0";
    // Recorrer la matriz y comparar
    for(columna = 0; columna<cantVer; columna++){
        for(renglon = 0; renglon < cantHor; renglon ++){
            int elementoActual = matriz[columna][renglon];
            if(elementoActual > mayor){
                mayor = elementoActual;
                //mayorPosicion = renglon + "," + columna;
            }
            if(elementoActual < menor){
                menor = elementoActual;
                //menorPosicion = renglon + "," + columna;
            }
        }
    }
    printf("\n" );
    printf("Valor mas alto: %d \n",mayor);
    printf("Valor mas bajo: %d \n",menor);
    printf("\n" );
    //printf("El numero mayor de la matriz es %d en la posicion %d\n",mayor,mayorPosicion);
    //printf("El numero menor de la matriz es %d en la posicion %d\n",menor,menorPosicion);
    //Calcular el promedio de ganancias de cada empresa por bimestres. ¿Cuál gano mas en cada bimestre?
    int promedio = 0;
    int grande=0;
    int bajo=0;
    for(columna = 0; columna<cantVer; columna+=2){
        for(renglon = 0; renglon < cantHor; renglon ++){
            sumarColumnas = sumarColumnas + matriz[columna][renglon];
        }
        promedio = sumarColumnas / 2;
        printf("Promedio de ganancias de la empresa %d por bimestre es: %d \n", (columna+2), promedio);
        sumarColumnas = 0;
        if(promedio > grande){
            grande = promedio;
        }
        if(promedio < bajo){
            bajo = promedio;
        }
    }
    printf("\n" );
    printf("Valor mas alto: %d \n",grande);
    printf("Valor mas bajo: %d \n",bajo);
    printf("\n" );
    return 0;
}
