#include <stdio.h>
#include <stdlib.h>

int main(){
    int c,mult;
    for(c=0; c<=10; c++){
        mult = c * 6;
        printf("6 * %d = %d\n",c,mult);
    }
    return 0;
}
