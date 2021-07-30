Algoritmo ejercicio7
	Definir a, b, c, contador, valorHasta Como Entero;
	a<-1;
	b<-1;
	c<-a + b;
	Escribir "ingrese hasta que posicion desea imprimir la sucesión: ";
	Leer valorHasta;
	Para contador<-1 Hasta valorHasta Con Paso 1 Hacer
		Si contador <= 2 Entonces
			Escribir a;
		SiNo
			c<-a + b;
			Escribir c;
			a<-b;
			b<-c;
		Fin Si
	Fin Para
FinAlgoritmo
