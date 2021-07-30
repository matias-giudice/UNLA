Algoritmo ejercicio11
	Definir precio, unidad, subTotal, unGratis, descuento, total Como Real;
	Escribir "Precio?";
	Leer precio;
	Escribir "Unidades?";
	Leer unidad;
	
	Si (unidad>3) Entonces
		Escribir "Paga con descuento.";
		subTotal<-precio*unidad;
		unGratis<-TRUNC(unidad/3);
		descuento<-unGratis*precio;
		total<-subTotal-descuento;
		Escribir "Total a pagar: ", total;
	SiNo
		Escribir "Paga sin descuento.";
		subTotal<-precio*unidad;
		total<-subTotal;
		Escribir "Total a pagar: ", total;
	Fin Si
FinAlgoritmo
