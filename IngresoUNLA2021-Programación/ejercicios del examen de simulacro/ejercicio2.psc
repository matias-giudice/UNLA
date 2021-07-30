Algoritmo ejercicio2
	Definir n, f, i Como Entero;
	Escribir "n?";
	Leer n;
	f<-1;
	si(n<0)
		Escribir "error";
	SiNo
		si(n>1)
			Para i<-4 Hasta n Con Paso 1 Hacer
				f<-f*i;
			Fin Para
		FinSi
		Escribir n, "!=", f;
	FinSi
FinAlgoritmo
