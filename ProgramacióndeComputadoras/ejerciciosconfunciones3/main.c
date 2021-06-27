#include <stdio.h>
#include <stdlib.h>
#define LINEA "------------------------\n"
int numero();
void mostrarPrimoOno(int n);
void mostrarBinario(int n);
void mostrarNumerosParesEntre();
void mostrarNumerosDivisiblesPor();
void sucesionFibonacciYposicion(int n);
void valorMedio();
void valorMedia();
void dibujarRectangulo();
void dibujarTriangulo();
void dibujarTrianguloInvertido();
void dibujarPiramide();
void dibujarPiramideInvertida();
void mostrarCantCifras(int n);
int main(){
    mostrarNumerosParesEntre();
    mostrarNumerosDivisiblesPor();
    int p = numero();
    mostrarPrimoOno(p);
    int bi = numero();
    mostrarBinario(bi);
    int su = numero();
    sucesionFibonacciYposicion(su);
    valorMedio();
    valorMedia();
    dibujarRectangulo();
    printf(LINEA);
    dibujarTriangulo();
    printf(LINEA);
    dibujarTrianguloInvertido();
    printf(LINEA);
    dibujarPiramide();
    printf(LINEA);
    dibujarPiramideInvertida();
    int cantCifras = numero();
    mostrarCantCifras(cantCifras);
    return 0;
}
int numero(){
    int num;
    printf("Ingrese un numero: \n");
    scanf("%d",&num);
    return num;
}
void mostrarNumerosParesEntre(){
    int i;
    for(i = 15; i <= 50; i++){
        if(i%2==0){
            printf("%d \n",i);
        }
    }
}
void mostrarNumerosDivisiblesPor(){
    int i;
    for(i = 0; i <= 10000; i++){
        if((i%2==0)&&(i%6==0)&&(i%7==0)&&(i%4!=0)){
            printf("%d \n",i);
        }
    }
}
void mostrarPrimoOno(int n){
    int x=1, contador=0;
    if(n<0){
        n=n*(-1);
    }
    while(x<=n){
        if(n%x==0){
            contador=contador+1;
        }
        x=x+1;
    }
    if(contador==2){
        printf("\nEs primo: %d\n",n);
    }else{
        printf("\nNo es primo: %d\n",n);
    }
}
void mostrarBinario(int n){
    int x=1, b=0;
    while(n>=1){
        if(n%2==1){
            b = b + x;
        }
        n=n/2;
        x=x*10;
    }
    printf("\nBinario: %d \n", b);
}
void sucesionFibonacciYposicion(int n){
    int cont, a, b, c;
    cont = 0;
    a=0;
    b=1;

    while (n != cont) {
        cont = cont + 1;
        c=a+b;
        b=a;
        a=c;
    }
    printf ("El numero en la sucesion de Fibonacci es %d y esta en la posicion: %d", c, cont);
}
void valorMedio(){
    int n,c=0,s=0,p=0;
    while(n != 0){
        n = numero();
        c = c + 1;
        s = s + n;
    }
    p = s / c;
    printf("El valor medio es: %d\n",p);
}
void valorMedia(){
    int n,c=0,s=0,m=0;
    while(c<=6){
        c = c + 1;
        n = numero();
        s = s + n;
        m = s / c;
    }
    printf("\nMedia de numeros: %d\n",m);
}
void dibujarRectangulo(){
    //ALGORITMO: Dibujar rectangulo de 3 x 5
    //i y j para recorrer los renglones y las filas, 3 x 5
    int i = 0;
    int j = 0;
    //Recorremos lso renglones del 1 al 3
    for(i=1;i<=3;i++){
        //por caada Renglon dibujamos 5 *
        for(j=1;j<=5;j++){
            printf("*");
        }
        printf("\n");
    }
}
void dibujarTriangulo(){
    //Algortimo: Dibujar un triangulo de 4 renglones de 1 a 4
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
void dibujarTrianguloInvertido(){
    //Triangulo invertido
    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
void dibujarPiramide(){
    //Piramide
    int i,j;
    int e = 5;
    int aux = 0;
    for(i=1;i<=5;i+=2){
        e= e-1;
        for(aux=1; aux<=e;aux++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
void dibujarPiramideInvertida(){
    //Piramide invertida
    int i,j;
    int e = 0;
    int aux = 5;
    for(i=5;i>=1;i-=2){
        e= e+1;
        for(aux=1; aux<=e;aux++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
void mostrarCantCifras(int n){
    int c=1;
    while(n>=10){
        n /= 10;
        c = c + 1;
    }
    printf("El numero %d tiene %d cifras.\n",n,c);
}
