Algoritmo ejercicio2
	Definir anio Como Entero;
	Escribir "Ingrese año:";
	Leer anio;
	
	Si (anio MOD 4 == 0) Entonces
		Si (anio MOD 100 == 0) Entonces
			Si (anio MOD 400 == 0) Entonces
				Escribir "El año ", anio, " es bisiesto";
			SiNo
				Escribir "El año ", anio, " no es bisiesto";
			FinSi
		SiNo
			Escribir "El año ", anio, " es bisiesto";
		FinSi
	SiNo
		Escribir "El año ", anio, " no es bisiesto";
	Fin Si
FinAlgoritmo