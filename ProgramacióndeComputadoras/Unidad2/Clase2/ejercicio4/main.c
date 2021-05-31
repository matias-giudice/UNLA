#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Definimos variables
    float peso, altura, alt,imc;

    //Le damos valores a las variables
    printf("Ingrese su peso: \n");
    scanf("%f", &peso);
    printf("Ingrese su altura: \n");
    scanf("%f", &altura);

    //Operaciones
    alt = altura * altura;
    imc = peso / alt;

    //Resultado
    if(imc<18.5){
        printf("\nResultado: %.1f \n", imc);
        printf("Peso inferior al normal. \n");
    }
    if(imc>=18.5 && imc<=24.9){
        printf("\nResultado: %.1f \n", imc);
        printf("Peso normal. \n");
    }
    if(imc>=25.0 && imc<=29.9){
        printf("\nResultado: %.1f \n", imc);
        printf("Peso superior al normal. \n");
    }
    if(imc>=30.0){
        printf("\nResultado: %.1f \n", imc);
        printf("Obesidad. \n");
    }
    return 0;
}
