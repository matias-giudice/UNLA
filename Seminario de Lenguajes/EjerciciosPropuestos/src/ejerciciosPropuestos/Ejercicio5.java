package ejerciciosPropuestos;

import java.util.Scanner;

public class Ejercicio5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner leer = new Scanner(System.in);
		System.out.println("Ingrese coeficiente a: ");
		double valorA = leer.nextDouble();
		System.out.println("Ingrese coeficiente b: ");
	    double valorB = leer.nextDouble();
	    System.out.println("Ingrese coeficiente c: ");
		double valorC = leer.nextDouble();
		System.out.println("Ingrese valor de x: ");
		double valorX = leer.nextDouble();
		
	    double valorY = ((valorA * Math.pow(valorX, 2)) + (valorB * valorX) + valorC);
	 
	    System.out.println("Valor de y: " + valorY);
	}

}
