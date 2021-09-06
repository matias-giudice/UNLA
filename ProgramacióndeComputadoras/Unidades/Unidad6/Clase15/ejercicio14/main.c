#include <stdio.h>
#include <stdlib.h>
void suma_dos(int *x, int *y, int *z);
int main(){
    int x,y,z;
    x=3;
    y=10;
    z=15;
    suma_dos(&x,&y,&z);
    printf("%d %d %d",x,y,z);
    return 0;
}
void suma_dos(int *x, int *y, int *z){
    *x=*x+2;
    *y=*y+2;
    *z=*z+2;
}
/*
    En el ejercicio 14 imprime 5, 12 y 17 porque le suma 2 al valor que esta guardado en cada puntero.
*/
