package ejerciciosPropuestos3;

import java.util.Scanner;

public class Ejercicio1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner leer = new Scanner(System.in);
		System.out.println("Ingrese radio de la esfera: ");
		int radio = leer.nextInt();
		
		System.out.println("Superficie de la esfera: " + calcularSuperficieEsfera(radio));
		System.out.println("Volumen de la esfera: " + calcularVolumenEsfera(radio));
	}
	
	public static double calcularSuperficieEsfera(double radio) {
		double superficie = 0, PI = 3.14; 
		superficie = (4*PI) * Math.pow(radio, 2);
		return superficie;
	}
	
	public static double calcularVolumenEsfera(double radio) {
		double volumen = 0, PI = 3.14; 
		volumen = (4/3*PI) * Math.pow(radio, 3);
		return volumen;
	}
}
