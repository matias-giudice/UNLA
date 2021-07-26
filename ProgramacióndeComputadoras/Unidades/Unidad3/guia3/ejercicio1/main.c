#include <stdio.h>
#include <stdlib.h>

int main(){
    int clave;
    printf("Ingrese clave(numerica): \n");
    scanf("%d",&clave);
    while(clave!=4567 && clave>=0){
        printf("Ingrese nuevamente clave(numerica): \n");
        scanf("%d",&clave);
    }
    if(clave==4567){
        printf("Clave correcta! \n");
    }else{
        printf("Error!\n");
    }
    return 0;
}
