package ejerciciosBasicos;

import java.util.Scanner;

public class IngresoDeDatos {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		/*Scanner s = new Scanner(System.in);
		System.out.println("Ingrese nombre: ");
		String nombre = s.nextLine();
		System.out.println("Hola " + nombre);
		
		Scanner nota = new Scanner(System.in);
		System.out.println("Ingrese nota 1: ");
		int nota1 = nota.nextInt();
		System.out.println("Ingrese nota 2: ");
		int nota2 = nota.nextInt();
		System.out.println("Ingrese nota 3: ");
		int nota3 = nota.nextInt();
		
		double promedio = (nota1+nota2+nota3)/3.0;
		System.out.println("Promedio: " + promedio);
		
		Scanner radio = new Scanner(System.in);
		System.out.println("Ingrese radio: ");
		int valorRadio = radio.nextInt();
		final double PI = 3.14; //constante
		double area = (PI * Math.pow(valorRadio, 2));
		System.out.println("Area del circulo: " + area);*/
		
		Scanner infoUsuario = new Scanner(System.in);
		System.out.println("Ingrese nombre: ");
		String nombre = infoUsuario.nextLine();
		final String MAIL = "@empres.com"; //constante
		System.out.println("Correo: " + nombre + MAIL);
	}

}
