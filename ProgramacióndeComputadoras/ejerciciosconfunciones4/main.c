#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#define cantHor 4
void mostrarMaxMinVectorTamanioDefinido();
void mostrarMaxMinPromAltParesVectorTamanioDefinido();
void mostrarMaxMinPosSumPromParImparVectorTamanioIndefinido();
void menu();
int submenu(int op, int v[], int t);
int cargarTamanio();
void cargarVectorAleatorio(int v[], int t);
void mostrarVector(int v[], int t);
int calcularMedia(int v[], int t);
int calcularMediana(int v[], int t);
float calcularDesvioEstandar(int v[], int t, int media);
void calcularFrecuencia(int v[], int t, int n);
void eliminarNumRepetidos(int v[], int t, int n);
void mostrarFrecuencia(int v[], int t);
void menuVectores();
void cargarVector(int v[], int t);
void sumaVectores(int vA[], int vB[], int t);
void restaVectores(int vA[], int vB[], int t);
void multiVectores(int vA[], int vB[], int t);
void multiplicarVectorXunValor(int vA[], int t);
void mostrarOperacionesVectores(int vA[], int vB[], int t, int vS, int vR, int vM, int vMP);
void menuMatrices();
void cargarMatriz(int matriz[][cantHor], int cantVer);
void mostrarMatriz(int matriz[][cantHor], int cantVer);
void totalGanadoXCadaEmpresaalanio(int matriz[][cantHor], int cantVer, int sumarFilas);
void ganadoXMescontandoatodaslasempresas(int matriz[][cantHor], int cantVer, int sumarColumnas);
void totalGanadoportodaslasempresasjuntas(int matriz[][cantHor], int cantVer);
void empresaQueganomasYenquemes(int matriz[][cantHor], int cantVer);
void calcularPromGananciasCadaEmpresaXbimestresQuienGanoMasenCadaBimestre(int matriz[][cantHor], int cantVer, int sumarColumnas);
void menuMatricesDos();
void cargarMatrizDos(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer);
void mostrarMatrizDos(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer);
void sumaMatricesDos(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer);
void restaMatricesDos(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer);
void multiplicacionMatricesDos(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer);
void menuVectoresMatrices();
int submenuVectoresMatrices(int op, int v[], int t, int matriz[][cantHor], int cantVerX);
int cargarRenglones();
int cargarColumnas();
void oracion();
void oracionAtrasHaciaDelante();
void oracionPalindromo();
void nombresPersonas();
void ordenarPalabrasAlfabeticamente();
void longitudPalabra();
void concatenarLetrasCadenas();
void menuMezclado();
int calcularEdad(int nacimiento, int anioHoy);
float calcularIndiceDeMasaCorporal(float peso,float altura);
void dibujarTriangulo(int base, int altura);
void calcularHipotenusa(float cateto1, float catero2);
int cantidadDeVecesQueApareceLaLetra(char letra, char oracion[100]);
int pedirEnteroPorTeclado();
float pedirFloatPorTeclado();
int maximoVector(int v[], int t);
int minimoVector(int v[], int t);
int cantidadNumerosRepetidosEnElVector(int v[], int t);
void menuMezcladoDos();
int esBisiesto(int anio);
int sonIguales(char nombre1[20], char nombre2[20]);
int esMayorDeEdad(int anioNacimiento, int anioHoy);
int esPalindromo(char oracion[100]);
void menuCompletoVector();
int numeroAleatorio();
void mostrarVector(int v[], int t);
int promedioVector(int v[], int t);
int posicionMenor(int v[], int t);
int posicionMayor(int v[], int t);
void ordenamientoBurbuja(int v[], int t);
void ordenamientoSeleccion(int v[], int t);
void ordenamientoInsercion(int v[], int t);
void ordenarMayorAmenor(int v[], int t);
void ordenarMenorAmayor(int v[], int t);
float numeroAleatorioEntre(int min, int max);
void cargarVectorManualmente(float v[],int t);
void cargarVectorAleatoriamente(float v[],int t,int min,int max);
float busquedaSecuencial(float v[],int t, float busco);
int main(){
    srand(time(0));
    /*mostrarMaxMinVectorTamanioDefinido();
    mostrarMaxMinPromAltParesVectorTamanioDefinido();
    mostrarMaxMinPosSumPromParImparVectorTamanioIndefinido();
    menu();
    menuVectores();
    menuMatrices();
    menuMatricesDos();
    menuVectoresMatrices();
    oracion();
    oracionAtrasHaciaDelante();
    oracionPalindromo();
    nombresPersonas();
    ordenarPalabrasAlfabeticamente();
    longitudPalabra();
    concatenarLetrasCadenas();
    menuMezclado();
    menuMezcladoDos();
    menuCompletoVector();*/
    return 0;
}
void mostrarMaxMinVectorTamanioDefinido(){
    int i,j,vector[5];
    for(i=0; i<5; i++){
        printf("Por favor ingrese el numero que desea guardar en la posicion %d\n",i);
        scanf("%d",&vector[i]);
    }
    int max = vector[0];
    int min = max;
    for(j=0; j<5; j++){
        if(vector[j]>max){
            max = vector[j];
        }
        if(vector[j]<min){
            min = vector[j];
        }
    }
    printf("\nEl maximo es: %d\n",max);
    printf("\nEl minimo es: %d\n",min);
    printf("\nArray de derecha a izquierda\n");
    for (i=5-1; i>=0; i--){
        printf("%d ",vector[i]);
    }
    printf("\n");
}
void mostrarMaxMinPromAltParesVectorTamanioDefinido(){
    int i,j;
    float vector[10],s=0,p=0;
    for(i=0; i<10; i++){
        printf("Por favor ingrese la altura que desea guardar en la posicion %d\n",i);
        scanf("%f",&vector[i]);
    }
    float max = vector[0];
    float min = max;
    for(j=0; j<10; j++){
        if(vector[j]>max){
            max = vector[j];
        }
        if(vector[j]<min){
            min = vector[j];
        }
        s = s + vector[j];
        p = ((float)s) / 10;
    }
    printf("\nEl maximo es: %.2f\n",max);
    printf("\nEl minimo es: %.2f\n",min);
    printf("\nEl promedio es: %.2f\n",p);
    printf("\nAlturas en las posicione pares: %.2f %.2f %.2f %.2f %.2f %.2f",vector[0],vector[2],vector[4],vector[6],vector[8],vector[10]);
}
void mostrarMaxMinPosSumPromParImparVectorTamanioIndefinido(){
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
}
void menu(){
    int opcion;
    printf("Primero antes de entrar al menu, cargar tamanio del vector y cargar el vector.\n");
    int tam = cargarTamanio();
    int vector[tam];
    cargarVectorAleatorio(vector,tam);
    do{
        printf("########MENU########\n");
        printf("1- Mostrar vector.\n");
        printf("2- Ordenar vector.\n");
        printf("3- Mostrar media del vector.\n");
        printf("4- Mostrar mediana del vector.\n");
        printf("5- Mostrar desviacion estandar del vector.\n");
        printf("6- Mostrar frecuencia del vector.\n");
        printf("7- Para salir.\n");
        printf("Elija una opcion: \n");
        scanf("%d",&opcion);
        submenu(opcion,vector,tam);
    }while(opcion!=7 && opcion>0 && opcion<7);
}
int submenu(int op, int v[], int t){
    int media,mediana;
    float desvio;
    switch(op){
        case 1:
            mostrarVector(v,t);
            break;
        case 2:
            printf("\nOrdenamiento burbuja: \n");
            ordenamientoBurbuja(v,t);
            mostrarVector(v,t);
            break;
        case 3:
            media = calcularMedia(v,t);
            printf("\nMEDIA: %d\n",media);
            break;
        case 4:
            mediana = calcularMediana(v,t);
            printf("\nMEDIANA: %d\n",mediana);
            break;
        case 5:
            desvio = calcularDesvioEstandar(v,t,media);
            printf("\nDESVIACION ESTANDAR: %f\n",desvio);
            break;
        case 6:
            mostrarFrecuencia(v,t);
            break;
    }
}
int cargarTamanio(){
    int tamanio;
    printf("Ingrese el tamanio del vector: \n");
    scanf("%d",&tamanio);
    return tamanio;
}
void cargarVectorAleatorio(int v[], int t){
    int i;
    for(i=0; i<t; i++){
        v[i] = rand() % 11;
    }
}
void mostrarVector(int v[], int t){
    int i;
    printf("Vector[ ");
    for(i=0; i<t; i++){
        printf(" %d ",v[i]);
    }
    printf(" ]\n");
}
int calcularMedia(int v[], int t){
    int i,s=0,m=0;
    for(i=0; i<t; i++){
        s = s + v[i];
    }
    m = s / t;
    return m;
}
int calcularMediana(int v[], int t){
    int med=0;
    if(t%2==0){
        med = (v[t/2]+v[t/2-1])/2;
    }else{
        med = v[t/2];
    }
    return med;
}
float calcularDesvioEstandar(int v[], int t, int media){
    int i,aux=0;
    float desvi;
    for(i=0; i<t; i++){
        aux = aux + pow(v[i]-media,2);
    }
    aux = aux / t;
    desvi = sqrt(aux);
    return desvi;
}
void calcularFrecuencia(int v[], int t, int n){
    int i,l,x = 0;
    for(i=0; i<t; i++){
        if(n == v[i]){
            x++;
            l = v[i];
        }
    }
    printf("Frecuencia del %d es %d / %d.\n",l,x,t);
}
void eliminarNumRepetidos(int v[], int t, int n){
    int i;
    for(i=0; i<t; i++){
        if(n == v[i]){
            v[i] = 0;
        }
    }
}
void mostrarFrecuencia(int v[], int t){
    int i,n;
    for(i=0; i<t; i++){
        n = v[i];
        if(n != 0){
            calcularFrecuencia(v,t,n);
            eliminarNumRepetidos(v,t,n);
        }
    }
}
void menuVectores(){
    int tam = 3;
    int vA[tam],vB[tam],vS[tam],vR[tam],vM[tam],vMP[tam];
    printf("Ingrese para cada vector 3 valores: \n");
    cargarVector(vA,tam);
    cargarVector(vB,tam);
    mostrarOperacionesVectores(vA,vB,tam,vS,vR,vM,vMP);

}
void cargarVector(int v[], int t){
    int i;
    for(i=0; i<t; i++){
        printf("Ingrese un numero para el vector: \n");
        scanf("%d",&v[i]);
    }
}
void sumaVectores(int vA[], int vB[], int t){
    int i,vectorS[3];
    for(i=0; i<t; i++){
        vectorS[i] = vA[i] + vB[i];
    }
    printf("\nSuma de vectores: \n");
    printf("V3 [ %d %d %d ]\n",vectorS[0],vectorS[1],vectorS[2]);
}
void restaVectores(int vA[], int vB[], int t){
    int i,vectorR[3];
    for(i=0; i<t; i++){
        vectorR[i] = vA[i] - vB[i];
    }
    printf("\nResta de vectores: \n");
    printf("V3 [ %d %d %d ]\n",vectorR[0],vectorR[1],vectorR[2]);
}
void multiVectores(int vA[], int vB[], int t){
    int i,vectorM[3];
    for(i=0; i<t; i++){
        vectorM[i] = vA[i] * vB[i];
    }
    printf("\nProducto escalar de vectores: \n");
    printf("V3 [ %d %d %d ]\n",vectorM[0],vectorM[1],vectorM[2]);
}
void multiplicarVectorXunValor(int vA[], int t){
    int i,n,j,vectorMP[3];
    for(j=0; j<1; j++){
        printf("\nIngrese un numero el cual va a multiplicar el vector 1: \n");
        scanf("%d",&n);
        vectorMP[j] = vA[i] * n;
    }
    printf("\nProducto por un escalar de vectores: \n");
    printf("V3 [ %d %d %d ]\n",vectorMP[0],vectorMP[1],vectorMP[2]);
}
void mostrarOperacionesVectores(int vA[], int vB[], int t, int vS, int vR, int vM, int vMP){
    printf("\nV1 [ %d %d %d ]\n",vA[0],vA[1],vA[2]);
    printf("\nV2 [ %d %d %d ]\n",vB[0],vB[1],vB[2]);
    sumaVectores(vA,vB,t);
    restaVectores(vA,vB,t);
    multiVectores(vA,vB,t);
    multiplicarVectorXunValor(vA,t);
}
void menuMatrices(){
    int renglon,columna,i,j;
    int cantVer = 12; //meses
    //int cantHor = 4; //empresas
    int matriz[cantVer][cantHor]; //matriz[12][4]
    int sumarFilas = 0;
    int sumarColumnas = 0;
    int totalGanado = 0;
    cargarMatriz(matriz,cantVer);
    mostrarMatriz(matriz,cantVer);
    totalGanadoXCadaEmpresaalanio(matriz,cantVer,sumarFilas);
    ganadoXMescontandoatodaslasempresas(matriz,cantVer,sumarColumnas);
    totalGanadoportodaslasempresasjuntas(matriz,cantVer);
    empresaQueganomasYenquemes(matriz,cantVer);
    calcularPromGananciasCadaEmpresaXbimestresQuienGanoMasenCadaBimestre(matriz,cantVer,sumarColumnas);
}
void cargarMatriz(int matriz[][cantHor], int cantVer){
    int renglon,columna;
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            matriz[columna][renglon] = rand() % 50;
        }
    }
}
void mostrarMatriz(int matriz[][cantHor], int cantVer){
    int renglon,columna;
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("%d " , matriz[columna][renglon] );
        }
        printf("\n" );
    }
    printf("\n" );
}
void totalGanadoXCadaEmpresaalanio(int matriz[][cantHor], int cantVer,int sumarFilas){
    int renglon,columna;
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            sumarFilas = sumarFilas + matriz[columna][renglon];
        }
        printf("Total ganado por la empresa %d al anio es: %d \n", (renglon+1), sumarFilas );
        sumarFilas = 0;
        printf("\n" );
    }
}
void ganadoXMescontandoatodaslasempresas(int matriz[][cantHor], int cantVer, int sumarColumnas){
    int columna,renglon;
    for(columna = 0; columna<cantVer; columna++){
        for(renglon = 0; renglon < cantHor; renglon ++){
            sumarColumnas = sumarColumnas + matriz[columna][renglon];
        }
        printf("Se gano en el mes %d contando a todas las empresas: %d \n", (columna+1), sumarColumnas );
        sumarColumnas = 0;
        printf("\n" );
    }
}
void totalGanadoportodaslasempresasjuntas(int matriz[][cantHor], int cantVer){
    int columna,renglon;
    int suma = 0;//  Suma va aqui...
    for(columna = 0; columna<cantVer; columna++){
        for(renglon = 0; renglon < cantHor; renglon ++){
            suma = suma + matriz[columna][renglon];
        }
    }
    printf ( "Total ganado por todas las empresas juntas: %d\n", suma );
}
void empresaQueganomasYenquemes(int matriz[][cantHor], int cantVer){
    int columna,renglon;
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
}
void calcularPromGananciasCadaEmpresaXbimestresQuienGanoMasenCadaBimestre(int matriz[][cantHor], int cantVer, int sumarColumnas){
    int columna,renglon;
    int promedio = 0;
    int grande=0;
    int bajo = 0;
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
        bajo = grande;
        if(promedio < bajo){
            bajo = promedio;
        }
    }
    printf("\n" );
    printf("Valor mas alto: %d \n",grande);
    printf("Valor mas bajo: %d \n",bajo);
    printf("\n" );
}
void menuMatricesDos(){
    int renglon,columna,i,j;
    int cantVer = 4; //meses
    //int cantHor = 4; //empresas
    int matriz1[cantVer][cantHor]; //matriz1[4][4]
    int matriz2[cantVer][cantHor]; //matriz2[4][4]
    cargarMatrizDos(matriz1,matriz2,cantVer);
    mostrarMatrizDos(matriz1,matriz2,cantVer);
    sumaMatricesDos(matriz1,matriz2,cantVer);
    restaMatricesDos(matriz1,matriz2,cantVer);
    multiplicacionMatricesDos(matriz1,matriz2,cantVer);
}
void cargarMatrizDos(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer){
    int renglon,columna;
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            matriz1[columna][renglon] = rand() % 10;
            matriz2[columna][renglon] = rand() % 10;
        }
    }
}
void mostrarMatrizDos(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer){
    int renglon,columna;
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("%d " , matriz1[columna][renglon] );
        }
        printf("\n" );
    }
    printf("\n" );
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("%d " , matriz2[columna][renglon] );
        }
        printf("\n" );
    }
    printf("\n" );
}
void sumaMatricesDos(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer){
    int renglon,columna;
    printf("La suma de las matrices es: \n");
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("[%d] + [%d] = [%d]    ",matriz1[columna][renglon],matriz2[columna][renglon], (matriz1[columna][renglon])+matriz2[columna][renglon]);
        }
        printf("\n");
    }
    printf("\n");
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("[%d] ",(matriz1[columna][renglon])+matriz2[columna][renglon]);
        }
        printf("\n");
    }
    printf("\n----------------------------------------------\n");
}
void restaMatricesDos(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer){
    int renglon,columna;
    printf("La resta de las matrices es: \n");
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("[%d] - [%d] = [%d]    ",matriz1[columna][renglon],matriz2[columna][renglon], (matriz1[columna][renglon])-matriz2[columna][renglon]);
        }
        printf("\n");
    }
    printf("\n");
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("[%d] ",(matriz1[columna][renglon])-matriz2[columna][renglon]);
        }
        printf("\n");
    }
    printf("\n----------------------------------------------\n");
}
void multiplicacionMatricesDos(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer){
    int renglon,columna;
    printf("La multiplicacion de las matrices es: \n");
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("[%d] * [%d] = [%d]    ",matriz1[columna][renglon],matriz2[columna][renglon], (matriz1[columna][renglon])*matriz2[columna][renglon]);
        }
        printf("\n");
    }
    printf("\n");
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            printf("[%d] ",(matriz1[columna][renglon])*matriz2[columna][renglon]);
        }
        printf("\n");
    }
    printf("\n----------------------------------------------\n");
}
void menuVectoresMatrices(){
    int opcion;
    printf("Primero antes de entrar al menu, cargar tamanio del vector y cargar el vector.\n");
    int tam = cargarTamanio();
    int vector[tam];
    cargarVectorAleatorio(vector,tam);
    printf("\nLo mismo pero con la matriz.\n");
    printf("\Renglones predefinidos.\n");
    //int cantHorX = cargarRenglones();
    int cantVerX = cargarColumnas();
    int matriz[cantHor][cantVerX];
    cargarMatriz(matriz,cantVerX);
    do{
        printf("########MENU########\n");
        printf("1- Mostrar vector.\n");
        printf("2- Mostrar matriz.\n");
        printf("0- Para salir.\n");
        printf("Elija una opcion: \n");
        scanf("%d",&opcion);
        submenuVectoresMatrices(opcion,vector,tam,matriz,cantVerX);
    }while(opcion!=0 && opcion>0 && opcion<3);
}
int submenuVectoresMatrices(int op, int v[], int t, int matriz[][cantHor], int cantVerX){
    switch(op){
        case 1:
            mostrarVector(v,t);
            break;
        case 2:
            mostrarMatriz(matriz,cantVerX);
            break;
    }
}
int cargarRenglones(){
    int renglones;
    printf("Ingrese la cant de renglones que va a tener la matriz: \n");
    scanf("%d",&renglones);
    return renglones;
}
int cargarColumnas(){
    int columnas;
    printf("Ingrese la cant de columnas que va a tener la matriz: \n");
    scanf("%d",&columnas);
    return columnas;
}
void oracion(){
    char oracion[40]=" ";
    char vocales[11]={'a','e','i','o','u','A','E','I','O','U'};
    char consonantes[43]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z','B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z'};
    printf("\nEscriba una oracion: ");
    gets(oracion);
    int cantVoc=0;
    int cantCon=0;
    int i=0,j;
    while(oracion[i]!='\0'){
        for (j=0; j<=10; j++){
            if (oracion[i]==vocales[j]){
                cantVoc=cantVoc+1;
            }
        }
        for (j=0; j<43; j++){
            if (oracion[i]==consonantes[j]){
                cantCon=cantCon+1;
            }
        }
        i=i+1;
    }
    printf("\n\nCantidad de vocales ---> %d", cantVoc);
    printf("\n\nCantidad de consonantes ---> %d", cantCon);
    printf("\n");
}
void oracionAtrasHaciaDelante(){
    //Definimos variables
    int i, posInicial, posFinal, cont;
    char palabra[20], caracter,aux;
    //Ingresamos la palabra
    printf("Ingrese una palabra(agregar un '.' al final de la palabra): \n");
    scanf("%c",&caracter);
    i=0;//Inicializamos el contador en 0
    while(i<25 && caracter!='.'){//Almacenamos la palabra
        palabra[i] = caracter;
        i++;
        scanf("%c",&caracter);
    }
    posInicial=0;//Inicializamos la posicion inicial en 0
    posFinal=i-1;//Inicializamos la posicion final restandole 1 al contador
    //Verificamos que la posicion inicial sea menor que la posicion final
    while(posInicial<posFinal){
        aux = palabra[posInicial];
        palabra[posInicial] = palabra[posFinal];
        palabra[posFinal] = aux;
        posInicial++; //sumando unidad
        posFinal--;   //restando unidad
    }
    printf("\n");
    for(cont=0; cont<i; cont++){
        printf("%c",palabra[cont]);
    }
    printf("\n");
}
void oracionPalindromo(){
    //Definimos variables
    int i, posInicial, posFinal;
    char palabra[20], caracter;
    //Ingresamos la palabra
    printf("Ingrese una palabra(agregar un '.' al final de la palabra): \n");
    scanf("%c",&caracter);
    i=0;//Inicializamos el contador en 0
    while(i<25 && caracter!='.'){//Almacenamos la palabra
        palabra[i] = caracter;
        i++;
        scanf("%c",&caracter);
    }
    posInicial=0;//Inicializamos la posicion inicial en 0
    posFinal=i-1;//Inicializamos la posicion final restandole 1 al contador
    //Verificamos que la posicion inicial sea menor que la posicion final y tambien las comparamos
    while(posInicial<posFinal && palabra[posInicial]==palabra[posFinal]){
        posInicial++; //sumando unidad
        posFinal--;   //restando unidad
    }
    //Si la posicion inicial es mayor o igual que la posicion final va a mostrar que es palindromo sino se cumple muestra que no es palindromo
    if(posInicial>=posFinal){
        printf("La palabra es palindromo. \n");
    }else{
        printf("La palabra no es palindromo. \n");
    }
}
void nombresPersonas(){
    //Defnimos variables
    char nombre1[20], nombre2[20];
    int i;
    //Ingresamos valores
    printf("Ingrese un nombre: \n");
    fflush(stdin);
    gets(nombre1);
    printf("Ingrese otro nombre: \n");
    fflush(stdin);
    gets(nombre2);
    int nombres = strcmp(nombre1,nombre2);
    //Verificamos que los nombres sean iguales o no(en ese caso se juntan ambos en uno)
    if(nombres == 0){
        printf("\nLos nombres son iguales.\n");
    }else{
        printf("Tercer nombre componiendo ambos: \n");
        printf("%s\n",strcat(nombre1,nombre2));
    }
}
void ordenarPalabrasAlfabeticamente(){
    int i,j; //Ciclos que ayudaran a ordenar el arreglo
	char palabra[5][10]; //Arreglo que guardara las palabras
	char aux[20]; //Vector auxiliar que guardara palabras temporalmente

	//Ciclo en el que solicitamos las palabras a ingresar
	for(i=0; i<2; i++){
		printf("Ingresa una palabra: ");
		scanf("%s",&palabra[i]);
	}

	for(i=1; i<2; i++){ //Ciclo que se repetirá 5 veces para ordenar cada nombre
        for(j=0; j<2-i; j++){//Ciclo que ordenara un nombre, se va restando pues en cada vuelta queda ordenado el ultimo nombre
            if(strcmp(palabra[j],palabra[j+1])>0){ //Si el nombre actual es mayor al siguiente nombre...
                strcpy(aux,palabra[j]); //Guardamos el nombre actual en Aux
        		strcpy(palabra[j],palabra[j+1]); //Pasamos el nombre siguiente al actual
        		strcpy(palabra[j+1],aux); //Pasamos el Aux al siguiente
    	    }
        }
    }
	printf("\n \n---- PALABRAS ORDENADOS ---- \n");
	//Mostramos los nombres ordenados
	for(i=0; i<2; i++){
		printf("%s \n",palabra[i]);
	}
}
void longitudPalabra(){
    char cadenaUno[20] = " ";
    char cadenaDos[20] = " ";
    char cadenaTres[20] = " ";
    printf("ingrese una palabra: ");
    fflush(stdin);
    scanf("%s",cadenaUno);
    printf("ingrese otra palabra: ");
    fflush(stdin);
    scanf("%s",cadenaDos);
    printf("ingrese otra palabra: ");
    fflush(stdin);
    scanf("%s",cadenaTres);
    printf("La longitud de %s es de: %d\n",cadenaUno,strlen(cadenaUno));
    printf("La longitud de %s es de: %d\n",cadenaDos,strlen(cadenaDos));
    printf("La longitud de %s es de: %d\n",cadenaTres,strlen(cadenaTres));
}
void concatenarLetrasCadenas(){
    typedef char TipoCadenas[50]; //
    TipoCadenas cadenas[3];
    TipoCadenas nuevaCadena[3];
    int i = 0;
    int j = 0;
    int resComparacion = 0;
    for(i = 0; i < 3; i++){ // Se piden tres cadenas de texto
        printf("Introduzca una cadena de texto: ");
        gets(cadenas[i]);
    }
    for(i=0; i<3; i++){ // Se recuperan las dos primeras letras de cada cadena de texto y se guardan en una variable.
        for(j=0; j<3; j++){
            if(j==2){
                nuevaCadena[i][j] = '\0'; // Después de recuperar las dos letras, introducimos el final de cadena.
            }else{
                nuevaCadena[i][j] = cadenas[i][j];
            }
        }
    }
    printf("\nEl resultado de concatenar las dos primeras letras de las cadenas es: \"%s\".\n\n",
    strcat(strcat(nuevaCadena[0], nuevaCadena[1]), nuevaCadena[2]));
    resComparacion = strcmp(cadenas[0], cadenas[1]);
    if (resComparacion ==0) {
        printf("La primera cadena, \"%s\", es igual a la segunda cadena, \"%s\".\n", cadenas[0], cadenas[1]);
    } else {
        printf("La primera cadena, \"%s\", no es igual a la segunda cadena, \"%s\".\n", cadenas[0], cadenas[1]);
    }
}
void menuMezclado(){
    int tamanio=4;
    int vector[tamanio];
    int nacimiento,anioHoy,edadActual;
    float peso,altura,imc;
    printf("\n---------------------------------\n");
    printf("Ingrese anio de nacimiento: \n");
    scanf("%d",&nacimiento);
    printf("Ingrese el anio actual: \n");
    scanf("%d",&anioHoy);
    edadActual = calcularEdad(nacimiento,anioHoy);
    printf("Edad actual: %d\n",edadActual);
    printf("\n---------------------------------\n");
    printf("Ingrese peso: \n");
    scanf("%f",&peso);
    printf("Ingrese altura: \n");
    scanf("%f",&altura);
    imc = calcularIndiceDeMasaCorporal(peso,altura);
    printf("Indice De Masa Corporal: %.2f\n",imc);
    printf("\n---------------------------------\n");
    dibujarTriangulo(4,8);
    printf("\n---------------------------------\n");
    calcularHipotenusa(3,4);
    printf("\n---------------------------------\n");
    char oracion[100]=" ";
    int letra;
    int res = 0;
    printf("\nEscriba una oracion: \n");
    fflush(stdin);
    gets(oracion);
    printf("Escribe la letra que quieres contar:\n");
    scanf("%c",&letra);
    res = cantidadDeVecesQueApareceLaLetra(letra, oracion);
    printf("La letra %c aparece %d veces.\n", letra,res);
    printf("\n---------------------------------\n");
    pedirEnteroPorTeclado();
    printf("\n---------------------------------\n");
    pedirFloatPorTeclado();
    printf("\n---------------------------------\n");
    cargarVector(vector,tamanio);
    printf("\n---------------------------------\n");
    mostrarVector(vector,tamanio);
    printf("\n---------------------------------\n");
    maximoVector(vector,tamanio);
    printf("\n---------------------------------\n");
    minimoVector(vector,tamanio);
    printf("\n---------------------------------\n");
    cantidadNumerosRepetidosEnElVector(vector,tamanio);
    printf("\n---------------------------------\n");
}
int calcularEdad(int nacimiento, int anioHoy){
    int edad = (anioHoy - nacimiento);
    return edad;
}
float calcularIndiceDeMasaCorporal(float peso,float altura){
    int calImc = peso / (altura * altura);
    return calImc;
}
void dibujarTriangulo(int base, int altura){
    int area = (base * altura) / 2;
    printf("Area: %d\n",area);
}
void calcularHipotenusa(float cateto1, float cateto2){
    int hipotenusa = (cateto1*cateto1) + (cateto2*cateto2);
    printf("Hipotenusa: %d\n",hipotenusa);
}
int cantidadDeVecesQueApareceLaLetra(char letra, char oracion[100]){
    char abecedario[53]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int cantLet=0;
    int i=0,j;
    while(oracion[i]!='\0'){
        for (j=0; j<53; j++){
            if (oracion[i]==abecedario[j] && letra==abecedario[j]){
                cantLet = cantLet + 1;
            }
        }
        i=i+1;
    }
    return cantLet;
}
int pedirEnteroPorTeclado(){
    int n;
    printf("Ingrese un numero: \n");
    scanf("%d",&n);
}
float pedirFloatPorTeclado(){
    float n;
    printf("Ingrese un numero: \n");
    scanf("%f",&n);
}
/*int maximoVector(int v[], int t){
    int i,j;
    for(i=0; i<t; i++){
        printf("Ingrese un valor para el vector: \n");
        scanf("%d",&v[i]);
    }
    printf("Vector: \n");
    for(i=0; i<t; i++){
        printf("Pos[%d] = %d \n",i,v[i]);
    }
    int max = v[0];
    int min = max;
    for(j=0; j<t; j++){
        if(v[j]>max){
            max = v[j];
        }
    }
    printf("\nEl maximo es: %d\n",max);
}*/
/*int minimoVector(int v[], int t){
    int i,j;
    for(i=0; i<t; i++){
        printf("Ingrese un valor para el vector: \n");
        scanf("%d",&v[i]);
    }
    printf("Vector: \n");
    for(i=0; i<t; i++){
        printf("Pos[%d] = %d \n",i,v[i]);
    }
    int max = v[0];
    int min = max;
    for(j=0; j<t; j++){
        if(v[j]>max){
            max = v[j];
        }
        if(v[j]<min){
            min = v[j];
        }
    }
    printf("\nEl minimo es: %d\n",min);
}*/
int cantidadNumerosRepetidosEnElVector(int v[], int t){
    int i,j,buscarNum=0,contador=0;
    for(i=0; i<t; i++){
        printf("Ingrese un valor para el vector: \n");
        scanf("%d",&v[i]);
    }
    printf("Vector: \n");
    for(i=0; i<t; i++){
        printf("Pos[%d] = %d \n",i,v[i]);
    }
    printf("Que numero desea buscar? \n");
    scanf("%d",&buscarNum);
    for(i=0; i<t; i++){
        if(v[i]==buscarNum){
            contador++;
        }
    }
    printf("El numero %d aparece %d veces. \n",buscarNum,contador);
}
void menuMezcladoDos(){
    //0 = Falso //1 = Verdadero
    int anio,bisiesto;
    printf("Verifica si el anio es bisiesto o no.\n");
	printf("Ingrese anio:\n");
	scanf("%d",&anio);
	bisiesto = esBisiesto(anio);
	printf("%d\n",bisiesto);
	printf("\n-----------------------\n");
	printf("Verifica si los nombres son iguales o no.\n");
	char nombre1[20];
	char nombre2[20];
	int iguales;
	printf("Ingrese nombre1:\n");
    fflush(stdin);
    scanf("%s",&nombre1);
    printf("Ingrese nombre2:\n");
    fflush(stdin);
    scanf("%s",&nombre2);
    iguales = sonIguales(nombre1,nombre2);
    printf("%d\n",iguales);
    printf("\n-----------------------\n");
    printf("Verifica si es mayor de edad o no.\n");
    int anioNacimiento,anioHoy,mayorEdad;
    printf("Ingrese anio de nacimiento:\n");
    scanf("%d",&anioNacimiento);
    printf("Ingrese anio actual:\n");
    scanf("%d",&anioHoy);
    mayorEdad = esMayorDeEdad(anioNacimiento,anioHoy);
    printf("%d\n",mayorEdad);
    printf("\n-----------------------\n");
    printf("Verifica si la palabra/frase es palindroma o no.\n");
    char oracion[100];
    printf("introducir una frase: \n"); //No pude con una frase pero si con una palabra(o poner toda la frase junta si me deja)
    fflush(stdin);
    gets(oracion);
    if(esPalindromo (oracion)){
        printf("Dicha frase es palindroma.\n");
        printf("1\n");
    }else{
        printf("Dicha frase no es palindroma.\n");
        printf("0\n");
        getchar();
    }
}
int esBisiesto(int anio){
    if(anio % 4 == 0){
        if(anio % 100 == 0){
            if(anio % 400 == 0){
				printf("El anio %d es bisiesto.\n",anio);
				anio = 1;
			}else{
				printf("El anio %d no es bisiesto.\n",anio);
				anio = 0;
			}
		}else{
			printf("El anio %d es bisiesto.\n",anio);
			anio = 1;
		}
    }else{
		printf("El anio %d no es bisiesto.\n",anio);
		anio = 0;
    }
    return anio;
}
int sonIguales(char nombre1[20], char nombre2[20]){
    int igual = strcmp(nombre1,nombre2);
    if(igual == 0){
        printf("Los nombres son iguales.\n");
        igual = 1;
    }else{
        printf("Los nombres no son iguales.\n");
        igual = 0;
    }
    return igual;
}
int esMayorDeEdad(int anioNacimiento, int anioHoy){
    int edad = anioHoy - anioNacimiento;
    if(edad>=18){
        printf("Es mayor.\n");
        edad = 1;
    }else{
        printf("No es mayor.\n");
        edad = 0;
    }
    return edad;
}
int esPalindromo(char oracion[100]){
    int longitud = strlen(oracion);
    int i = 0;
    while(i<=longitud/2 && oracion[i]==oracion[longitud-1-i]){
        i++;
    }
    if(i>longitud/2){
        return 1;
    }else{
        return 0;
    }
}
void menuCompletoVector(){
    int tamanio = 5;
    int vector[tamanio];
    int maximo,minimo,promedio,posMin,posMax;

    cargarVector(vector, tamanio);
    mostrarVector(vector, tamanio);
    maximo = maximoVector(vector, tamanio);
    minimo = minimoVector(vector, tamanio);
    promedio = promedioVector(vector, tamanio);
    posMin = posicionMenor(vector, tamanio);
    posMax = posicionMayor(vector, tamanio);

    printf("\nEl minimo es: %d\n",minimo);
    printf("\nEl maximo es: %d\n",maximo);
    printf("\nEl promedio del vector es: %d\n",promedio);
    printf("\nLa posicion del minimo es: %d\n",posMin);
    printf("\nLa posicion del maximo es: %d\n",posMax);
}
int numeroAleatorio(){
    int numero = rand() % 50;
    return numero;
}
int maximoVector(int v[], int t){
    int i,j;
    int max = v[0];
    for(j=0; j<t; j++){
        if(v[j]>max){
            max = v[j];
        }
    }
    return max;
}
int minimoVector(int v[], int t){
    int i,j;
    int max = v[0];
    int min = max;
    for(j=0; j<t; j++){
        if(v[j]>max){
            max = v[j];
        }
        if(v[j]<min){
            min = v[j];
        }
    }
    return min;
}
int promedioVector(int v[], int t){
    int i,suma=0,prom=0;
    for(i=0; i<t; i++){
        suma = suma + v[i];
    }
    prom = suma / t;
    return prom;
}
int posicionMenor(int v[], int t){
    int i,j,cont2=0,posMe=0;
    int max = v[0];
    int min = max;
    for(j=0; j<t; j++){
        cont2 = cont2 + 1;
        if(v[j]>max){
            max = v[j];
        }
        if(v[j]<min){
            min = v[j];
            posMe = cont2 - 1;
        }
    }
    return posMe;
}
int posicionMayor(int v[], int t){
    int i,j,cont=0,posMa=0;
    int max = v[0];
    for(j=0; j<t; j++){
        cont=cont+1;
        if(v[j]>max){
            max = v[j];
            posMa = cont - 1;
        }
    }
    return posMa;
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
float busquedaSecuencial( float v[], int t, float busco){
    int contador=0;
    int encontrado=0;
    int posEncontrado= -1;

    while (contador<t && encontrado==0){
        if (v[contador]==busco){
            encontrado=1;
            posEncontrado=contador;
        }
        contador ++;
   }
   return posEncontrado;
}
float numeroAleatorioEntre(int min, int max){
    return (float) min + rand()%(max-min+1);
}
void cargarVectorAleatoriamente(float v[],int t,int min,int max){
    int i;
    for(i=0; i<t; i++){
        v[i] = (float) numeroAleatorioEntre(min,max);
    }
}
void cargarVectorManualmente(float v[],int t){
    int i;
    for(i=0; i<t; i++){
        printf("Ingrese valor en la posicion [%d]: ",i);
        scanf("%f", &v[i]);
    }
}
