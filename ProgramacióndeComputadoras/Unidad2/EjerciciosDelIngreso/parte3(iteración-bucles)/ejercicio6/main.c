#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int n,c,m,cantCaras,cantCecas;
    float cara,ceca;
    printf("Cuantas veces quiere tirar una moneda? \n");
    scanf("%d",&n);
    cantCaras = 0;
    cantCecas = 0;
    for(c=1; c<=n; c++){
        m = rand() % 2;
        printf("%d = %d\n",c,m);
        if(m == 1){
            cantCaras = cantCaras + 1;
        }else{
            cantCecas = cantCecas + 1;
        }
    }
    cara = (((float)cantCaras)/((float)n)*100);
    ceca = (((float)cantCecas)/((float)n)*100);
    printf("Hay %.0f de probabilidad que salga cara. \n",cara);
    printf("Hay %.0f de probabilidad que salga ceca. \n",ceca);
    return 0;
}
