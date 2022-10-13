package ejerciciosPropuestos3;

import java.util.Scanner;

public class Ejercicio2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner leer = new Scanner(System.in);
		System.out.println("Ingrese hasta que número mostrar pares: ");
		int numero = leer.nextInt();
	
		muestraPares(numero);
	}

	public static void muestraPares(int numero) {
		for(int i=0; i<=numero; i++) {
			if(i % 2 == 0) {
				System.out.println("Número Par: " + i);
			}
		}
	}
}
