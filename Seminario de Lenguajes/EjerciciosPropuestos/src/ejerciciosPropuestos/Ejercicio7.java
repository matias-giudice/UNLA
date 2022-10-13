package ejerciciosPropuestos;

import java.util.Scanner;

public class Ejercicio7 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner leer = new Scanner(System.in);
		System.out.println("Ingrese medida en milímetros: ");
		int valorEnMm = leer.nextInt();
		System.out.println("Ingrese medida en centímetros: ");
		float valorEnCm = leer.nextFloat();
		System.out.println("Ingrese medida en metros: ");
		double valorEnM = leer.nextDouble();
		
		double pasarValorEnMmACm = (valorEnMm / 10);
		double pasarValorEnMACm = (valorEnM * 100);
		double suma = (pasarValorEnMmACm + valorEnCm + pasarValorEnMACm);
		
		System.out.println("Suma de las tres longitudes introducidas: " + suma);
	}

}
