Algoritmo ejercicio5
	Definir dado, par, impar Como Entero;
	dado<-Aleatorio(1,6);
	par<-2*dado;
	impar<-2*dado+1;
	Escribir dado;
	Si (dado MOD 2 == 0) Entonces
		Escribir "PAR";
	SiNo
		Escribir "IMPAR";
	Fin Si
FinAlgoritmo
