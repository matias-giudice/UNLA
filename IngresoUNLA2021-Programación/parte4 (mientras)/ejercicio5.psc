Algoritmo ejercicio5
	Definir a, b, resto Como Entero;
	Escribir "Ingrese valor de a: ";
	Leer a;
	Escribir "Ingrese valor de b: ";
	Leer b;
	resto<-a MOD b;
	Mientras resto <> 0 Hacer
		a<-b;
		b<-resto;
		resto<- a MOD b;
	FinMientras
	Escribir "MCD es: ", b;
FinAlgoritmo
