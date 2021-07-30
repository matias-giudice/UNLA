Algoritmo ejercicio5
	Definir  num, contador, dado, par, impar Como Entero;
	Escribir "Cuantas veces quiere tirar un dado? ";
	Leer  num;
	par<-0;
	impar<-0;
	acumulador<-0;
	Para contador<-1 Hasta num Hacer
		dado<-Aleatorio(1, 6);
		Escribir contador, "-", dado;
		Si (dado MOD 2 == 0) Entonces
			par<-par + 1;
		Sino
			impar<-impar + 1;
		Fin Si
	Fin Para
	Escribir "Salió ", par, " veces una cara con número par.";
	Escribir "Salió ", impar, " veces una cara con número impar.";
FinAlgoritmo
