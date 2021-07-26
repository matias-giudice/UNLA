#include <stdio.h>
#include <stdlib.h>

int main(){
    int anio;
    printf("Ingrese anio: \n");
    scanf("%d",&anio);
    if(anio%4 == 0){
		if(anio%100 == 0){
			if(anio%400 == 0){
				printf("El anio %d es bisiesto",anio);
			}else{
				printf("El anio %d no es bisiesto",anio);
			}
        }else{
			printf("El anio %d es bisiesto",anio);
		}
	}else{
		printf("El anio %d no es bisiesto",anio);
	}
    return 0;
}
