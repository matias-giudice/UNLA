Algoritmo ejercicio4
	Definir n, cant_divisores, i Como Entero;;
	Escribir "Ingrese un número: ";
	Leer n;
	Si n<=0 Entonces
		Escribir "El número debe ser mayor que 0.";
	SiNo
		cant_divisores<-0;
		i<-2;
		Mientras i<n Hacer
			Si n MOD i=0 Entonces
				cant_divisores<-cant_divisores + 1;
			FinSi
			i<-i +1;
		Fin Mientras
		Si cant_divisores=0 Y n>1 Entonces
			Escribir "El número ", n, " es primo.";
		SiNo
			Escribir "El número ", n, " es compuesto.";
		FinSi
	Fin Si
FinAlgoritmo
