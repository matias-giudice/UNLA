package ejerciciosPropuestos3;

import java.util.Scanner;

public class Ejercicio5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner leer = new Scanner(System.in);
		System.out.println("Ingrese la primera instancia de tiempo(hora1, minuto1): ");
		int hora1 = leer.nextInt();
		int minuto1 = leer.nextInt();
		System.out.println("Ingrese la segunda instancia de tiempo(hora2, minuto2): ");
		int hora2 = leer.nextInt();
		int minuto2 = leer.nextInt();
		
		System.out.println("Diferencia: " + diferenciaMin(hora1, minuto1, hora2, minuto2));
	}

	public static int diferenciaMin(int hora1, int minuto1, int hora2, int minuto2) {
		int horasDif = 0, minutosDif = 0, totalMinutosDif = 0;
		horasDif = hora2 - hora1;
		minutosDif = minuto2 - minuto1;
		totalMinutosDif = horasDif * 60 + minutosDif;
		return totalMinutosDif;
	}
}
