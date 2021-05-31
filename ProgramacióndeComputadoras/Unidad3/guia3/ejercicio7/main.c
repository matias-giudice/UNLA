#include <stdio.h>
#include <stdlib.h>

int main(){
    int c;
    for(c=1; c<=16; c++){
        if(c % 2 == 0){
            printf("%d\n",c);
        }
    }
    return 0;
}
