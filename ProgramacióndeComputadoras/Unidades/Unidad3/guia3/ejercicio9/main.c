#include <stdio.h>
#include <stdlib.h>

int main(){
    int c;
    for(c=1; c<=50; c++){
        if(c % 3 == 0){
            printf("%d\n",c);
        }
    }
    return 0;
}
