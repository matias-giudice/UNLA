#include <stdio.h>
#include <stdlib.h>

int main(){
    int anio1,anio2,c;
    printf("Ingrese desde que anio empieza: \n");
    scanf("%d",&anio1);
    printf("Ingrese hasta que anio termina: \n");
    scanf("%d",&anio2);
    for(c=anio1; c<anio2; c++){
        if(c % 4 == 0){
            if(c % 100 == 0){
                if(c % 400 == 0){
                    printf("Anio: %d\n",c);
                }
            }else{
                printf("Anio: %d\n",c);
            }
        }
    }
    return 0;
}
