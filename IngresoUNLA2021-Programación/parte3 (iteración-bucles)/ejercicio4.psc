Algoritmo ejercicio4
	Definir n, acumulador, num, factorial, x, contador Como Real;
//	1ra Forma de hacerlo:
	Escribir "Ingresa un número";
	leer n;
	acumulador<-1;
	Para contador<-n Hasta 1 Con Paso -1
		acumulador<- acumulador * contador;
	FinPara
	Escribir n, "!=", acumulador;
//	2da Forma de hacerlo:
	Escribir "Ingresa un número";
	leer num;
	Si (num < 0) Entonces
		Escribir "El numero ", num, " no se puede calcular.";
	SiNo
		x<-1;
		factorial<-1;    
		Mientras (x <= num) Hacer
			factorial<-factorial * x;
			x<-x + 1;
		FinMientras
		Escribir "El factorial del número ", num, " = ", factorial;
	FinSi 
FinAlgoritmo