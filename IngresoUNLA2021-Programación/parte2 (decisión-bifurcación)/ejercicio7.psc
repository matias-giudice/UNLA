Algoritmo ejercicio7
	//Definimos variables
	Definir a, resto Como Entero;
	Definir esMultiploDeDos, noEsMultiploDeCinco Como Logico;
	//Ingresamos valor a esas variables
	Escribir "ingrese valor de a:";
	Leer a;
	//Operacion
	resto<-a MOD 2;
	esMultiploDeDos<-(resto=0);
	resto<-a MOD 5;
	noEsMultiploDeCinco<-(resto!=0);
	Si esMultiploDeDos y noEsMultiploDeCinco Entonces
		Escribir a, " es multiplo de 2 y no de 5";
	SiNo
		Escribir a, " no es multiplo de 2 o es multiplo de 2 y 5.";
	Fin Si
FinAlgoritmo