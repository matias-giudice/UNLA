package ejerciciosPropuestos;

import java.util.Scanner;

public class Ejercicio8 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner leer = new Scanner(System.in);
		System.out.println("Ingrese cantidad de hormigas capturadas: ");
		int cantidadHormigas = leer.nextInt();
		System.out.println("Ingrese cantidad de arañas capturadas: ");
		int cantidadAranias = leer.nextInt();
		System.out.println("Ingrese cantidad de cochinillas capturadas: ");
		int cantidadCochinillas = leer.nextInt();
		
		int totalCantHormigas = (cantidadHormigas * 6);
		int totalCantAranias = (cantidadAranias * 8);
		int totalCantCochinillas = (cantidadCochinillas * 14);
		
		int totalPatasAnimales = (totalCantHormigas + totalCantAranias + totalCantCochinillas);
		
		System.out.println("Total de patas de hormigas: " + totalCantHormigas);
		System.out.println("Total de patas de arañas: " + totalCantAranias);
		System.out.println("Total de patas de cochinillas: " + totalCantCochinillas);
		System.out.println("Total de patas de todos los animales: " + totalPatasAnimales);
	}

}
