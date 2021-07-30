Algoritmo ejercicio1
	Definir n, acum3, acum7, resto, contador, nAleatorio Como Entero;
	acum3<-0;
	acum7<-0;
	Escribir "Ingrese n: ";
	Leer n;
	Para contador<-1 Hasta n Hacer
		
		nAleatorio<-Aleatorio(1, 1000);
		Escribir nAleatorio;
		
		resto<-nAleatorio MOD 3;
		Si resto == 0 Entonces
			acum3 <- acum3 + nAleatorio;
			Escribir "Es multiplo de 3, la suma de multiplos de 3 es: ", acum3;
		Fin Si
		
		resto<-nAleatorio MOD 7;
		Si resto == 0 Entonces
			acum7 <- acum7 + nAleatorio;
			Escribir "Es multiplo de 7, la suma de multiplos de 7 es: ", acum7;
		Fin Si
		
	Fin Para
FinAlgoritmo
