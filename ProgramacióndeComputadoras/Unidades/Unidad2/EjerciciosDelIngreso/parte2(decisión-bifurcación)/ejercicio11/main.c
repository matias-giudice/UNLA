#include <stdio.h>
#include <stdlib.h>

int main(){
    float precio, unidad, subTotal, unGratis, descuento, total;
	printf("Precio: \n");
	scanf("%f",&precio);
	printf("Unidades: \n");
	scanf("%f",&unidad);

	if(unidad>3){
		printf("Paga con descuento. \n");
		subTotal = precio*unidad;
		unGratis = unidad / 3;
		descuento = unGratis*precio;
		total = subTotal-descuento;
		printf("Total a pagar: $ %.2f \n", total);
	}else{
		printf("Paga sin descuento. \n");
		subTotal = precio*unidad;
		total = subTotal;
		printf("Total a pagar: $ %.2f \n", total);
	}
    return 0;
}
