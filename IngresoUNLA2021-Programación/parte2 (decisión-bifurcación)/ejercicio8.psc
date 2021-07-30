Algoritmo ejercicio8
	//Definimos variables
	Definir a Como Entero;
	//Ingresamos valor a esas variables
	Escribir "ingrese valor de a:";
	Leer a;
	//Operacion
	Si (a MOD 3 == 0 O a MOD 7 == 0) Entonces
		Si (a MOD 3 == 0) Entonces
			Escribir "Es multiplo de 3";
		FinSi
		Si (a MOD 7 == 0) Entonces
			Escribir "Es multiplo de 7";
		FinSi
	SiNo
		Escribir "no es multiplo de ninguno";
	Fin Si
	
FinAlgoritmo