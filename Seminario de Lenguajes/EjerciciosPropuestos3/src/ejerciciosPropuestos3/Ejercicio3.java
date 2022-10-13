package ejerciciosPropuestos3;

import java.util.Scanner;

public class Ejercicio3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner leer = new Scanner(System.in);
		System.out.println("Ingrese los puntos x1, y1: ");
		double valorX1 = leer.nextDouble();
		double valorY1 = leer.nextDouble();
		System.out.println("Ingrese los puntos x2, y2: ");
		double valorX2 = leer.nextDouble();
		double valorY2 = leer.nextDouble();
		
		System.out.println("Distancia: " + distancia(valorX1, valorY1, valorX2, valorY2));
	}

	public static double distancia(double x1, double y1, double x2, double y2) {
		double distancia = 0;
		distancia = Math.sqrt(Math.pow(x1-x2, 2) + Math.pow(y1-y2, 2));
		return distancia;
	}
}
