#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){ //NO funciona
    int i,j,e=5,aux=0,s=0;
    for(i=1;i<=70;i++){
        //e= e-1;
        /*for(aux=1; aux<=e;aux++){
            printf(" ");
        }*/
        printf(" ");
        for(j=2;j>70;j++){
            s = i + j;
            printf("%d+%d=%d",i,j,s);

        }
        Sleep(1000);
        system("cls");
        printf("\n");
    }
    return 0;
}
