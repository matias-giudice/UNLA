#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int dado;
    dado = rand() % 6 + 1;
    printf("%d \n",dado);
    if(dado % 2 == 0){
        printf("PAR. \n");
    }else{
        printf("IMPAR. \n");
    }
    return 0;
}
