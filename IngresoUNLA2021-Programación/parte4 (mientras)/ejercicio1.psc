Algoritmo ejercicio1
	Definir numeroSecreto, maximoIntentos, numeroUsuario, intentos Como Entero;
	numeroSecreto<-26;
	maximoIntentos<-30;
	Escribir "Adivina el número que estoy pensando en ", maximoIntentos, " intentos o menos...";
	Escribir "Qué número te parece que es? ";
	Leer numeroUsuario;
	intentos<-1;
	Mientras numeroUsuario != numeroSecreto Y intentos < maximoIntentos Hacer
		Si numeroUsuario > numeroSecreto Entonces
			Escribir numeroUsuario, " es mayor que el número que pensé.";
		SiNo
			Escribir numeroUsuario, " es menor que el número que pensé.";
		Fin Si
		Escribir "Probá de nuevo! Te quedan ", maximoIntentos-intentos, " intentos.";
		Leer numeroUsuario;
		intentos<-intentos + 1;
	Fin Mientras
	Si intentos = maximoIntentos Entonces
		Escribir "Perdiste! no adivinaste en ", maximoIntentos, " intentos o menos.";
	SiNo
		Escribir "Adivinaste en ", intentos, " intentos!";
	Fin Si
	Escribir "El número que pensé es: ", numeroSecreto;;
FinAlgoritmo
