Algoritmo ejercicio3
	Definir anioUno, anioDos, contador Como Entero;
	Escribir "ingrese desde que año empieza: ";
	Leer anioUno;
	Escribir "ingrese hasta que año termina: ";
	Leer anioDos;
	Para contador<-anioUno Hasta anioDos Con Paso 1
		//Escribir contador;
		Si (contador MOD 4 == 0) Entonces
			Si (contador MOD 100 == 0) Entonces
				Si (contador MOD 400 == 0) Entonces
					Escribir contador;
				FinSi
			SiNo
				Escribir contador;
			FinSi
		Fin Si
	Fin Para
FinAlgoritmo
