#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(){
    srand(time(0));
    int vector[5],i,j,n,contador=0,c1,c,moda,s=0,p=0;
    for(i=0; i<5; i++){
        vector[i] = rand() % 5;
        printf("Pos: %d Num: %d\n",i,vector[i]);
        s = s + vector[i];
    }
    p = s / 5;
    printf("Digite el numero que quiere saber cuantas veces se repite: ");
	scanf("%d",&n);
    for (i=0; i<5; i++){
		if (n == vector[i]){
			contador++;
		}
    }
	c1=-1;
	for(i=0; i<5; i++){
        c=0;
        for(j=0; j<5; j++){
            if(vector[i] == vector[j]){
                c = c + 1;
            }
        }
        if(c>c1){
            moda = vector[i];
            c1 = c;
        }
	}
	printf("Frecuencia del %d es %d/5\n",n,contador);
	printf("Moda del vector: %d\n", moda);
	printf("Promedio del vector: %d\n", p);
	printf("Desvio estandar del vector: %d\n",pow(s,5));
    return 0;
}
