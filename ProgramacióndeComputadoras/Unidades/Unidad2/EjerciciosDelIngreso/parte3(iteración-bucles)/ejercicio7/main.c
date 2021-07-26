#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c,contador,valorHasta;
    a = 1;
	b = 1;
	c = a + b;
    printf("ingrese hasta que posicion desea imprimir la sucesion: \n");
    scanf("%d",&valorHasta);
    for(c=1; c<=valorHasta; c++){
        if(c <= 2){
            printf("%d\n",a);
        }else{
            c = a + b;
            printf("%d\n",c);
			a = b;
			b = c;
        }
    }
    return 0;
}
