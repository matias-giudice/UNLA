package ejerciciosPropuestos;

import java.util.Scanner;

public class Ejercicio2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int entero, suma, resultado;
		
		Scanner leer = new Scanner(System.in);
	    System.out.println("Ingrese un numero entero: ");
	    entero = leer.nextInt();
	    
	    resultado = (entero % 7);
	    suma = (7 - resultado);
	      
	    System.out.println("Para que sea multiplo de 7 hay que sumar: " + suma);
	}

}
