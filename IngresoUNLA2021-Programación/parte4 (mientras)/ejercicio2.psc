Algoritmo ejercicio2
	Definir numeroUsuario, numeroAleatorio, numeroGuardado Como Entero;
	Escribir "Ingrese un número del 1 al 20.";
	Leer numeroUsuario;
	numeroAleatorio<-Aleatorio(1,20);
	numeroGuardado<-1;
	Mientras numeroUsuario != numeroAleatorio Hacer
		numeroGuardado<- numeroGuardado + 1;
		Escribir "Probá de nuevo! ";
		Leer numeroUsuario;
	Fin Mientras
	Escribir "Se escribieron ", numeroGuardado, " números. ";
	Escribir "Salió el número ingresado. ";
	Escribir numeroUsuario ," = ", numeroAleatorio;
FinAlgoritmo
