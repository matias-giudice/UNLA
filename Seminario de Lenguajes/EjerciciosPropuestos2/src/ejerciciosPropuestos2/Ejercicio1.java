package ejerciciosPropuestos2;

import java.util.Scanner;

public class Ejercicio1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner leer = new Scanner(System.in);
		System.out.println("Ingrese número de tres cifras: ");
		int numero = leer.nextInt();
	    
		if(numero > 999 || numero < 100) {
			System.out.println("Por favor vuelva a ingresar un número de tres cifras. ");
	    } else {
	    	int cifraA, cifraB, cifraC;
	    	cifraA = numero / 100;
	    	cifraB = (numero % 100) / 10;
	    	cifraC = numero % 10;
	    	
	    	System.out.println("1er Cifra: " + cifraA);
	    	System.out.println("2da Cifra: " + cifraB);
	    	System.out.println("3er Cifra: " + cifraC);
	    }
	}
}
