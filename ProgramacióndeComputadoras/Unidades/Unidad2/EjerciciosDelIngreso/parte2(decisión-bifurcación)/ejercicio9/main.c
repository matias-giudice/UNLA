#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    printf("Ingrese valor de a: \n");
    scanf("%d",&a);
    printf("Ingrese valor de b: \n");
    scanf("%d",&b);
    printf("Ingrese valor de c: \n");
    scanf("%d",&c);
	if(a<b){
        if(b<c){
			printf("Orden: %d - %d - %d",a,b,c);
        }else{
            if(a<c){
				printf("Orden: %d - %d - %d",a,c,b);
            }else{
				printf("Orden: %d - %d - %d",c,a,b);
            }
        }
	}else{
		if(a<c){
			printf("Orden: %d - %d - %d",b,a,c);
		}else{
			if(b<c){
				printf("Orden: %d - %d - %d",b,c,a);
			}else{
				printf("Orden: %d - %d - %d",c,b,a);
			}
		}
	}
	return 0;
}
