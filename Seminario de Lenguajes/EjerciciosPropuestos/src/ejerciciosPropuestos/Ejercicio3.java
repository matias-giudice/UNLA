package ejerciciosPropuestos;

import java.util.Scanner;

public class Ejercicio3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int valorN, valorM, suma, resultado;
		
		Scanner leer = new Scanner(System.in);
	    System.out.println("Ingrese el valor de n: ");
	    valorN = leer.nextInt();
	    System.out.println("Ingrese el valor de m: ");
	    valorM = leer.nextInt();
	    
	    resultado = (valorN % valorM);
	    suma = (valorM - resultado);
	      
	    System.out.println("Para que sea multiplo de " + valorM + " hay que sumar: " + suma);
	}

}
