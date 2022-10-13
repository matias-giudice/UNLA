package ejerciciosPropuestos3;

import java.util.Scanner;

public class Ejercicio4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner leer = new Scanner(System.in);
		System.out.println("Ingrese los dias, horas y minutos: ");
		int dias = leer.nextInt();
		int horas = leer.nextInt();
		int minutos = leer.nextInt();
		
		System.out.println("Cantidad de segundos: " + calcularSegundos(dias, horas, minutos));
	}
	public static int calcularSegundos(int valorDias, int valorHoras, int valorMinutos) {
		int cantidadDias = 0, cantidadHoras = 0, cantidadMinutos = 0, cantidadTotal = 0;
		cantidadDias = valorDias * 86400;
		cantidadHoras = valorHoras * 3600;
		cantidadMinutos = valorMinutos * 60;
		cantidadTotal = cantidadDias + cantidadHoras + cantidadMinutos;
		return cantidadTotal;
	}
}
