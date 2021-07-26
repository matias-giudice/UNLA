#include <stdio.h>
#include <stdlib.h>

int main(){
    int c=0;
    while(c<41){
        c = c + 1;
        if(c % 2 == 0){
            printf("%d\n",c);
        }
    }
    return 0;
}
