#include <stdio.h>
#include <stdlib.h>
//Un programa que pida 3 números y los muestre de menor a mayor.
int main()
{
    int a,b,c;
    printf("Ingrese nro1: \n");
    scanf("%d", &a);
    printf("Ingrese nro2: \n");
    scanf("%d", &b);
    printf("Ingrese nro3: \n");
    scanf("%d", &c);
    printf("\n");
    if(a<b){
        if(b<c){
            printf("%d \n",a);
            printf("%d \n",b);
            printf("%d \n",c);
        }else{
            if(a<c){
                printf("%d \n",a);
                printf("%d \n",c);
                printf("%d \n",b);
            }else{
                printf("%d \n",c);
                printf("%d \n",a);
                printf("%d \n",b);
            }
        }
    }else{
        if(a<c){
            printf("%d \n",b);
            printf("%d \n",a);
            printf("%d \n",c);
        }else{
            if(b<c){
                printf("%d \n",b);
                printf("%d \n",c);
                printf("%d \n",a);
            }else{
                printf("%d \n",c);
                printf("%d \n",b);
                printf("%d \n",a);
            }
        }
    }
    return 0;
}
