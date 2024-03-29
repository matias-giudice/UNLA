#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#define cantHor 4
#define LARGO_ORACION 20
#define LINEA1 "----------------MENU-------------------\n"
#define LINEA2 "---------------------------------------\n"
//Declaraciones de las funciones o procedimientos
void menu();
int elegirTamanio();
int numeroAleatorio();
void cargarVectorAleatorio(int v[], int t);
void mostrarVector(int v[], int t);
int posMin(int v[], int t);
int posMax(int v[], int t);
int minVector(int v[], int t);
int maxVector(int v[], int t);
int promVector(int v[], int t);
int sumVector(int v[], int t);
int resVector(int v[], int t);
int aleatorioEntre(int mini, int maxi);
void cargarVectorConAleatorios(int v[], int t, int mini,int maxi);
void cargarVectorConAleatoriosSinRepetir(int v[], int t, int mini,int maxi);
void ordenamientoBurbuja(int v[], int t);
void ordenamientoSeleccion(int v[], int t);
void ordenamientoInsercion(int v[], int t);
int busquedaSecuencial(int v[], int t, int busco);
int busquedaBinaria(int v[], int t, int busco);
int sonIguales(char nombre1[], char nombre2[], int t);
void calcularFrecuencia(int v[], int t, int n); // Tambien es MODA
void eliminarNumRepetidos(int v[], int t, int n);
void mostrarFrecuencia(int v[], int t);
int calcularMedia(int v[], int t);
float calcularDesvioEstandar(int v[], int t, int media);
void menuMatrices();
void cargarMatriz(int matriz[][cantHor], int cantVer);
void mostrarMatriz(int matriz[][cantHor], int cantVer);
void sumarPorRenglones(int matriz[][cantHor], int cantVer);
void sumarPorColumnas(int matriz[][cantHor], int cantVer);
void promedioPorRenglones(int matriz[][cantHor], int cantVer);
void promedioPorColumnas(int matriz[][cantHor], int cantVer);
void cargarMatrizDeAleatorios(int matriz[][cantHor],int cantVer, int mini, int maxi);
bool VerificarMatriz(int matriz[][cantHor],int cantVer, int num); //NO ME FUNCIONA
void cargarMatrizDeAleatoriosSinRepetir(int matriz[][cantHor],int cantVer, int mini, int maxi); //NO ME FUNCIONA
void sumaDeMatrices(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer);
void restaDeMatrices(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer);
void multiplicacionDeMatrices(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer);
void menuBuscarPalabraEnOracion();
int main(){
    srand(time(0));
    menu();
    menuMatrices();
    menuBuscarPalabraEnOracion();
    return 0;
}
void menu(){
    int tam = elegirTamanio();
    int vector[tam];
    cargarVectorAleatorio(vector,tam);
    mostrarVector(vector,tam);
    int posicionMenor = posMin(vector, tam);
    int posicionMayor = posMax(vector, tam);
    int minimo = minVector(vector, tam);
    int maximo = maxVector(vector, tam);
    int promedio = promVector(vector, tam);
    int sumaVector = sumVector(vector, tam);
    int restaVector = resVector(vector, tam);
    printf("\nLa posicion del minimo es: %d\n",posicionMenor);
    printf("\nLa posicion del maximo es: %d\n",posicionMayor);
    printf("\nEl minimo es: %d\n",minimo);
    printf("\nEl maximo es: %d\n",maximo);
    printf("\nEl promedio del vector es: %d\n",promedio);
    printf("\nLa suma del vector es: %d\n",sumaVector);
    printf("\nLa resta del vector es: %d\n",restaVector);
    cargarVectorConAleatorios(vector, tam, 1 ,50);
    mostrarVector(vector,tam);
    cargarVectorConAleatoriosSinRepetir(vector, tam, 1 ,50);
    mostrarVector(vector,tam);
    ordenamientoBurbuja(vector,tam);
    mostrarVector(vector,tam);
    ordenamientoSeleccion(vector,tam);
    mostrarVector(vector,tam);
    ordenamientoInsercion(vector,tam);
    mostrarVector(vector,tam);
    int num;
    printf("\nQue numero desea buscar en el vector? \n");
    scanf("%d",&num);
    int numBuscado = busquedaSecuencial(vector,tam,num);
    if(numBuscado == -1){
        printf("\nEl numero no se encuentra en el vector.");
    }else{printf("\nEl numero esta en la posicion %d.",numBuscado);}
    int num2;
    printf("\nQue numero desea buscar en el vector? \n");
    scanf("%d",&num2);
    int numBuscado2 = busquedaBinaria(vector,tam,num2);
    if(numBuscado2 == -1){
        printf("\nEl numero no se encuentra en el vector.");
    }else{printf("\nEl numero esta en la posicion %d.",numBuscado2);}
    char nombre1[20],nombre2[20];
    printf("\nIngrese un nombre: \n");
    fflush(stdin);
    scanf("%s",&nombre1);
    printf("\nIngrese otro nombre: \n");
    fflush(stdin);
    scanf("%s",&nombre2);
    int parecidos = sonIguales(nombre1,nombre2,20);
    if(parecidos == 1){
            printf("Son iguales.  %d \n",parecidos);
    }else{
        printf("No son iguales.  %d \n",parecidos);
    }
    mostrarFrecuencia(vector,tam);
    int media = calcularMedia(vector,tam);
    float desvioEstandar = calcularDesvioEstandar(vector,tam,media);
    printf("El desvio estandar del vector es: %f",desvioEstandar);
}
int elegirTamanio(){
    int tamanio;
    printf(LINEA2);
    printf("Ingrese tamanio del vector: \n");
    scanf("%d",&tamanio);
    printf(LINEA2);
    return tamanio;
}
int numeroAleatorio(){
    int numero = rand() % 51;
    return numero;
}
void cargarVectorAleatorio(int v[], int t){
    int i;
    for(i=0; i<t; i++){
        v[i] = numeroAleatorio();
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
int posMin(int v[], int t){
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
int posMax(int v[], int t){
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
int minVector(int v[], int t){
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
int maxVector(int v[], int t){
    int i,j;
    int max = v[0];
    for(j=0; j<t; j++){
        if(v[j]>max){
            max = v[j];
        }
    }
    return max;
}
int promVector(int v[], int t){
    int i,suma=0,prom=0;
    for(i=0; i<t; i++){
        suma = suma + v[i];
    }
    prom = suma / t;
    return prom;
}
int sumVector(int v[], int t){
    int i,suma=0;
    for(i=0; i<t; i++){
        suma = suma + v[i];
    }
    return suma;
}
int resVector(int v[], int t){
    int i,resta=v[0];
    for(i=t-1; i>0; i--){
        resta = resta - v[i];
    }
    return resta;
}
int aleatorioEntre(int mini, int maxi){
    int aleatorio = mini + rand() % (maxi-mini+1);
    return aleatorio;
}
void cargarVectorConAleatorios(int v[], int t, int mini,int maxi){
    int i;
    for(i=0; i<t; i++){
        v[i] = aleatorioEntre(mini, maxi);
    }
}
void cargarVectorConAleatoriosSinRepetir(int v[], int t, int mini,int maxi){ // Toma uno solo
    int i,j,k;
    for(i=0; i<t; i++){
		for(j=i+1; j<t; j++){
			if(v[i] == v[j]){
                for(k=j; k<t-1; k++){
                    v[k] = v[k+1];
                    t = t - 1;
                    j = i;
                }
			}
		}
	}
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
int busquedaSecuencial(int v[], int t, int busco){
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
int busquedaBinaria(int v[], int t, int busco){
    int sup = 0;
    int inf = 0;
    int centro = 0;
    sup = t - 1;
    while(inf<=sup){
        centro = (sup + inf)/2;
        if(v[centro]==busco){
            return centro;
        }else{
            if(busco>v[centro]){
                inf = centro + 1;
            }else{
                sup = centro - 1;
            }
        }
    }
    return -1;
}
int sonIguales(char nombre1[], char nombre2[], int t){
    int igual = strcmp(nombre1,nombre2);
    if(igual == 0){
        igual = 1;
    }else{ return igual;}
    return igual;
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
int calcularMedia(int v[], int t){
    int i,s=0,m=0;
    for(i=0; i<t; i++){
        s = s + v[i];
    }
    m = s / t;
    return m;
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
void menuMatrices(){
    int cantVer = 4; //meses
    //int cantHor = 4; //empresas
    int matriz[cantVer][cantHor]; //matriz[12][4]
    int matriz1[cantVer][cantHor];
    int matriz2[cantVer][cantHor];
    cargarMatriz(matriz,cantVer);
    mostrarMatriz(matriz,cantVer);
    sumarPorRenglones(matriz,cantVer);
    sumarPorColumnas(matriz,cantVer);
    promedioPorRenglones(matriz,cantVer);
    promedioPorColumnas(matriz,cantVer);
    aleatorioEntre(10,20);
    cargarMatrizDeAleatorios(matriz,cantVer,10,20);
    mostrarMatriz(matriz,cantVer);
    cargarMatrizDeAleatoriosSinRepetir(matriz,cantVer,10,20);
    mostrarMatriz(matriz,cantVer);
    cargarMatriz(matriz1,cantVer);
    cargarMatriz(matriz2,cantVer);
    mostrarMatriz(matriz1,cantVer);
    mostrarMatriz(matriz2,cantVer);
    sumaDeMatrices(matriz1,matriz2,cantVer);
    restaDeMatrices(matriz1,matriz2,cantVer);
    multiplicacionDeMatrices(matriz1,matriz2,cantVer);
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
void sumarPorRenglones(int matriz[][cantHor], int cantVer){
    int renglon,columna,sumarFilas=0;
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            sumarFilas = sumarFilas + matriz[columna][renglon];
        }
        printf("FILA [%d] su suma: %d \n", (renglon+1), sumarFilas );
        sumarFilas = 0;
        printf("\n" );
    }
}
void sumarPorColumnas(int matriz[][cantHor], int cantVer){
    int columna,renglon,sumarColumnas=0;
    for(columna = 0; columna<cantVer; columna++){
        for(renglon = 0; renglon < cantHor; renglon ++){
            sumarColumnas = sumarColumnas + matriz[columna][renglon];
        }
        printf("COLUMNA [%d] su suma: %d \n", (columna+1), sumarColumnas );
        sumarColumnas = 0;
        printf("\n" );
    }
}
void promedioPorRenglones(int matriz[][cantHor], int cantVer){
    int renglon,columna,sumarFilas=0;
    float promedioF=0;
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            sumarFilas = sumarFilas + matriz[columna][renglon];
        }
        promedioF = ((float)sumarFilas) / ((float)cantVer);
        printf("FILA [%d] su promedio: %.2f \n", (renglon+1), promedioF );
        sumarFilas = 0;
        promedioF = 0;
        printf("\n" );
    }
}
void promedioPorColumnas(int matriz[][cantHor], int cantVer){
    int columna,renglon,sumarColumnas=0;
    float promedioC=0;
    for(columna = 0; columna<cantVer; columna++){
        for(renglon = 0; renglon < cantHor; renglon ++){
            sumarColumnas = sumarColumnas + matriz[columna][renglon];
        }
        promedioC = ((float)sumarColumnas) / ((float)cantHor);
        printf("COLUMNA [%d] su promedio: %.2f \n", (columna+1), promedioC );
        sumarColumnas = 0;
        promedioC = 0;
        printf("\n" );
    }
}
void cargarMatrizDeAleatorios(int matriz[][cantHor],int cantVer, int mini, int maxi){
    int renglon,columna;
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            matriz[columna][renglon] = aleatorioEntre(mini,maxi);
        }
    }
}
bool VerificarMatriz(int matriz[][cantHor], int cantVer, int num){
    int renglon,columna;
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            if(num == matriz[columna][renglon]){
                return true;
            }
        }
    }
    return false;
}
void cargarMatrizDeAleatoriosSinRepetir(int matriz[][cantHor],int cantVer, int mini, int maxi){
    int renglon,columna,num=0;
    for(renglon = 0; renglon < cantHor; renglon ++){
        for(columna = 0; columna<cantVer; columna++){
            while(VerificarMatriz(matriz,cantVer,num)){
                num = aleatorioEntre(mini,maxi);
            }
            matriz[columna][renglon] = num;
        }
    }
}
void sumaDeMatrices(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer){
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
void restaDeMatrices(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer){
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
void multiplicacionDeMatrices(int matriz1[][cantHor], int matriz2[][cantHor], int cantVer){
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
void menuBuscarPalabraEnOracion(){
    char frase[500];
    char busqueda[50];
    int x=0,y=0,z=0,w=0;
    int validar=0;
    printf("Ingrese la frase: \n");
    gets(frase);
    printf("Que palabra deseas buscar dentro de la frase: \n");
    gets(busqueda);
    while(frase[x]!='\0'){
        x=x+1; //tama�o de frase
    }
    while(busqueda[w]!='\0'){
        w=w+1; //tama�o de busqueda
    }
    for(y=0; y<x; y++){
        z=0;
        while(busqueda[z]!='\0'){
            if(busqueda[z]==frase[y+z]){
                validar=validar+1;
            }
            z=z+1;
        }
        if(validar==w){
            printf("Se ha encontrado la palabra y empieza en la posicion %d.\n",y+1);
            y=x;
        }else{
            validar=0;
        }
    }
    if(validar!=w){
        printf("No se encontro la palabra en la frase.\n");
    }
}
