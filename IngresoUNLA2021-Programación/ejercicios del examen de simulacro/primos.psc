Algoritmo primos
	Definir n, resto, contador, contarHasta Como Entero;
	Escribir "ingrese n: ";
	Leer n;
	contarHasta<-trunc(rc(n));
	contador<-2;
	resto<-1;
	Mientras contador<=contarHasta y resto <> 0
		resto<-n mod contador;
		contador<-contador+1;
	FinMientras
	Si resto = 0 Entonces
		Escribir "El numero ", n, " es compuesto.";
	SiNo
		Escribir "El numero ", n, " es primo.";
	FinSi
FinAlgoritmo
