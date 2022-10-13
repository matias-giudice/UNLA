package ejerciciosPropuestos;

import java.util.Scanner;

public class Ejercicio4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner leer = new Scanner(System.in);
		System.out.println("Ingrese base: ");
		double base = leer.nextDouble();
		System.out.println("Ingrese altura: ");
	    double altura = leer.nextDouble();
	    
	    double area = ((base * altura)/2);
	 
	    System.out.println("Area: " + area);
	}

}
