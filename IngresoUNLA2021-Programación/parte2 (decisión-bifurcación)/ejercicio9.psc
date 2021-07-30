Algoritmo ejercicio9
	Definir a,b,c Como Entero;
	Escribir "Ingrese valor de a";
	Leer a;
	Escribir "Ingrese valor de b";
	Leer b;
	Escribir "Ingrese valor de c";
	Leer c;
	Si (a<b) Entonces
		Si (b<c) Entonces
			Escribir "Orden: ", a, " , ", b, " , ", c;
		SiNo
			Si (a<c) Entonces
				Escribir "Orden: ", a, " , ", c, " , ", b;
			SiNo
				Escribir "Orden: ", c, " , ", a, " , ", b;
			FinSi
		FinSi
	SiNo
		Si (a<c) Entonces
			Escribir "Orden: ", b, " , ", a, " , ", c;
		SiNo
			Si (b<c) Entonces
				Escribir "Orden: ", b, " , ", c, " , ", a;
			SiNo
				Escribir "Orden: ", c, " , ", b, " , ", a;
			FinSi
		FinSi
	FinSi
FinAlgoritmo
