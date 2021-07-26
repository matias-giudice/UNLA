#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    printf("Ingrese valor de a: \n");
    scanf("%d",&a);
    if(a % 3 == 0 || a % 7 == 0){
        if(a % 3 == 0){
            printf("%d es multiplo de 3. \n",a);
        }
        if(a % 7 == 0){
            printf("%d es multiplo de 7. \n",a);
        }
    }else{
        printf("%d no es multiplo de ninguno. \n",a);
    }
    return 0;
}
