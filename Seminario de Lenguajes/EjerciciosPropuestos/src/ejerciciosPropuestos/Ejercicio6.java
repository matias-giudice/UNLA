package ejerciciosPropuestos;

import java.util.Scanner;

public class Ejercicio6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner leer = new Scanner(System.in);
		System.out.println("Ingrese cantidad de segundos: ");
		int cantidadSeg = leer.nextInt();
		
		int horas = (cantidadSeg / 3600);
		int residuo = (cantidadSeg % 3600);
		
		int minutos = (residuo / 60);
		
		int segundos = (cantidadSeg % 60);
		
		System.out.println("Horas: " + horas);
		System.out.println("Minutos: " + minutos);
		System.out.println("Segundos: " + segundos);
	}

}
