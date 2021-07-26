#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int m;
    m = rand() % 2;
    if(m==1){
        printf("Salio %d = CARA\n",m);
    }else{
        if(m==0){
            printf("Salio %d = CECA\n",m);
        }
    }
    return 0;
}
