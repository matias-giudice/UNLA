Algoritmo ejercicio6
	Definir  num, contador, moneda, cantCaras, cantSecas Como Entero;
	Definir cara, seca Como Real;
	Escribir "Cuantas veces quiere tirar un moneda? ";
	Leer  num;
	cantCaras<-0;
	cantSecas<-0;
	Para contador<-1 Hasta num Con Paso 1
		moneda<- Aleatorio(0,1);
		Escribir contador, "-", moneda;
		Si (moneda = 1) Entonces
			cantCaras<-cantCaras + 1;
		SiNo
			cantSecas<-cantSecas + 1;
		Fin Si
	Fin Para
	cara<-(cantCaras/num)*100;
	seca<-(cantSecas/num)*100;
	Escribir "Hay ", cara, "% de probabilidad que salga cara.";
	Escribir "Hay ", seca, "% de probabilidad que salga seca.";
FinAlgoritmo
