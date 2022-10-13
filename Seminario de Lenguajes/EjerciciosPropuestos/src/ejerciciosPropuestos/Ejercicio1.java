package ejerciciosPropuestos;

import java.util.Scanner;

public class Ejercicio1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner leer = new Scanner(System.in);
		System.out.println("Ingrese base: ");
		double base = leer.nextDouble();
		System.out.println("Ingrese porcentaje de IVA: ");
	    double porcentajeIVA = leer.nextDouble();
	    
	    double iva = ((base * porcentajeIVA) / 100);
	    double total = base + iva;
	 
	    System.out.println("Base: " + base);
	    System.out.println("Importe correspondiente al IVA: " + iva);
	    System.out.println("Total: " + total);
	}

}
