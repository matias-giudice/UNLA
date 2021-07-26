#include <stdio.h>
#include <stdlib.h>

int main(){
    float h=0,a=0,p=0,cMe,cMa;
    printf("Ingrese valor de catetoMenor: \n");
    scanf("%f",&cMe);
    printf("Ingrese valor de catetoMayor: \n");
    scanf("%f",&cMa);
    h = sqrt(cMe*cMe+cMa*cMa);
    a = (cMe*cMa)/2;
    p = cMe+cMa+h;
    printf("Hipotenusa: %.1f\n",h);
    printf("Area: %.1f\n",a);
    printf("Perimetro: %.1f\n",p);
    return 0;
}
