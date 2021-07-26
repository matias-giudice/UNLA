#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int calcularEdad(int nacimiento, int anioHoy);
float calcularIndiceDeMasaCorporal(float peso,float altura);
void dibujarTriangulo(int base, int altura);
void calcularHipotenusa(float cateto1, float catero2);
int cantidadDeVecesQueApareceLaLetra(char letra, char oracion[100]);
int pedirEnteroPorTeclado();
float pedirFloatPorTeclado();
void cargarVector(); //definir un vector global solo por ahora
void mostrarVector();
int maximoVector();
int minimoVector();
int cantidadNumerosRepetidosEnElVector();
int tamanio=0;
int main(){
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
    cargarVector();
    printf("\n---------------------------------\n");
    mostrarVector();
    printf("\n---------------------------------\n");
    maximoVector();
    printf("\n---------------------------------\n");
    minimoVector();
    printf("\n---------------------------------\n");
    cantidadNumerosRepetidosEnElVector();
    printf("\n---------------------------------\n");
    return 0;
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
void cargarVector(){
    int i;
    printf("Ingrese el tamanio del vector: \n");
    scanf("%d",&tamanio);
    int vector[tamanio];
    for(i=0; i<tamanio; i++){
        printf("Ingrese un valor para el vector: \n");
        scanf("%d",&vector[i]);
    }
}
void mostrarVector(){
    int i;
    printf("Ingrese el tamanio del vector: \n");
    scanf("%d",&tamanio);
    int vector[tamanio];
    for(i=0; i<tamanio; i++){
        printf("Ingrese un valor para el vector: \n");
        scanf("%d",&vector[i]);
    }
    printf("Vector: \n");
    for(i=0; i<tamanio; i++){
        printf("Pos[%d] = %d \n",i,vector[i]);
    }
}
int maximoVector(){
    int i,j;
    printf("Ingrese el tamanio del vector: \n");
    scanf("%d",&tamanio);
    int vector[tamanio];
    for(i=0; i<tamanio; i++){
        printf("Ingrese un valor para el vector: \n");
        scanf("%d",&vector[i]);
    }
    printf("Vector: \n");
    for(i=0; i<tamanio; i++){
        printf("Pos[%d] = %d \n",i,vector[i]);
    }
    int max = vector[0];
    int min = max;
    for(j=0; j<tamanio; j++){
        if(vector[j]>max){
            max = vector[j];
        }
    }
    printf("\nEl maximo es: %d\n",max);
}
int minimoVector(){
    int i,j;
    printf("Ingrese el tamanio del vector: \n");
    scanf("%d",&tamanio);
    int vector[tamanio];
    for(i=0; i<tamanio; i++){
        printf("Ingrese un valor para el vector: \n");
        scanf("%d",&vector[i]);
    }
    printf("Vector: \n");
    for(i=0; i<tamanio; i++){
        printf("Pos[%d] = %d \n",i,vector[i]);
    }
    int max = vector[0];
    int min = max;
    for(j=0; j<tamanio; j++){
        if(vector[j]>max){
            max = vector[j];
        }
        if(vector[j]<min){
            min = vector[j];
        }
    }
    printf("\nEl minimo es: %d\n",min);
}
int cantidadNumerosRepetidosEnElVector(){
    int i,j,buscarNum=0,contador=0;
    printf("Ingrese el tamanio del vector: \n");
    scanf("%d",&tamanio);
    int vector[tamanio];
    for(i=0; i<tamanio; i++){
        printf("Ingrese un valor para el vector: \n");
        scanf("%d",&vector[i]);
    }
    printf("Vector: \n");
    for(i=0; i<tamanio; i++){
        printf("Pos[%d] = %d \n",i,vector[i]);
    }
    printf("Que numero desea buscar? \n");
    scanf("%d",&buscarNum);
    for(i=0; i<tamanio; i++){
        if(vector[i]==buscarNum){
            contador++;
        }
    }
    printf("El numero %d aparece %d veces. \n",buscarNum,contador);
}
