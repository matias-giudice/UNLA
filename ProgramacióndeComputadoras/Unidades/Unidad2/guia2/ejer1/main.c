#include <stdio.h>
#include <stdlib.h>
//Escribir un programa que solicite el ingreso de la temperatura en grados, si la temperatura está por encima de 100 grados desplegar
//el mensaje “arriba del punto de ebullición del agua”, de lo contrario desplegar el mensaje “abajo del punto de ebullición del agua”.
int main(){
    int tg;
    printf("Ingrese temperatura en grados: \n");
    scanf("%d", &tg);
    if(tg>100){
        printf("Temperatura arriba del punto de ebullicion del agua. \n");
    }else{
        printf("Temperatura abajo del punto de ebullicion del agua. \n");
    }
    return 0;
}
