Algoritmo ejercicio10
	Definir precio, unidad, subTotal, descuento, total Como Real;
	Escribir "Precio?";
	Leer precio;
	Escribir "Unidades?";
	Leer unidad;

	Si (unidad>4) Entonces
		Escribir "Paga con descuento.";
		subTotal<-precio*unidad;
		descuento<-subTotal*0.05;
		total<-subTotal-descuento;
		Escribir "Total a pagar: ", total;
	SiNo
		Escribir "Paga sin descuento.";
		subTotal<-precio*unidad;
		total<-subTotal;
		Escribir "Total a pagar: ", total;
	Fin Si
FinAlgoritmo
