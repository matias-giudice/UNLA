Algoritmo ejercicio3
	Definir dividendo, divisor, resultado, cociente, resto Como Entero;
	Escribir "Ingrese el dividendo: ";
	Leer dividendo;
	Escribir "Ingrese el dvisor: ";
	Leer divisor;
	resultado<-(dividendo - divisor);
	Mientras resultado <= 0 Hacer
		Escribir "Ingrese nuevamente el dividendo: ";
		Leer dividendo;
		Escribir "Ingrese nuevamente el dvisor: ";
		Leer divisor;
	Fin Mientras
	cociente<- (resultado-divisor);
	resto<- (cociente-divisor);
	Escribir dividendo, " - ", divisor, " = ", resultado;
	Escribir resultado, " - ", divisor, " = ", cociente;
	Escribir cociente, " - ", divisor, " = ", resto;
	Escribir "El cociente es: ", cociente, " y el resto de la division es: ", resto;
FinAlgoritmo
