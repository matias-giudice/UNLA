#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int vector[30],i;
    for(i=0; i<30; i++){
        vector[i] = rand() % 30;
        printf("Pos: %d Num: %d\n",i,vector[i]);
    }
    return 0;
}
