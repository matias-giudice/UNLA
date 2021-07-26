#include <stdio.h>
#include <stdlib.h>

int main(){
    int p, q, NOTp, NOTq, pANDq, pORq;
    printf("1=Verdadero\n0=Falso\n");
    printf("Ingrese valor logico para p(0 o 1): \n");
    scanf("%d",&p);
    printf("Ingrese valor logico para q(0 o 1): \n");
    scanf("%d",&q);
    if(p==0){NOTp = 1;}else{NOTp = 0;}
    if(q==0){NOTq = 1;}else{NOTq = 0;}
    if(p==1 && q==1){pANDq = 1;}else{pANDq = 0;}
    if(p==0 && q==0){pORq = 0;}else{pORq = 1;}
    printf("p: %d\n",p);
    printf("q: %d\n",q);
    printf("not p: %d\n",NOTp);
    printf("not q: %d\n",NOTq);
    printf("p and q: %d\n",pANDq);
    printf("p or q: %d\n",pORq);
    return 0;
}
