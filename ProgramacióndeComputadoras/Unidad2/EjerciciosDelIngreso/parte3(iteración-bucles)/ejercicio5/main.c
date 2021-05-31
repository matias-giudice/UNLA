#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int n,c,dado,par,impar;
    printf("Cuantas veces quiere tirar un dado? \n");
    scanf("%d",&n);
    par = 0;
    impar = 0;
    for(c=1; c<=n; c++){
        dado = 1 + rand() % 6;
        printf("%d = %d\n",c,dado);
        if(dado % 2 == 0){
            par = par + 1;
        }else{
            impar = impar + 1;
        }
    }
    printf("Salio %d veces una cara con numero par. \n",par);
    printf("Salio %d veces una cara con numero impar. \n",impar);
    return 0;
}
