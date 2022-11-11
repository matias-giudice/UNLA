package test;

import java.util.Scanner;

import modelo.PuestoFronterizo;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		menuPrincipal();
	}
	public static void menuPrincipal() {
		PuestoFronterizo sistema = new PuestoFronterizo();
		Scanner leer = new Scanner(System.in);
		int opcion = 0;
		do {
			System.out.println("\nElija opción: \n1-Paso de frontera.\n2-Mostrar todas las personas.\n3-Búsqueda por nombre.\n4-Búsqueda por dni.\n5-Salir\n");
			opcion = Integer.parseInt(leer.next());
			switch(opcion) {
				case 1:
					System.out.println("\nIngrese dni: ");
					int dniIngresado = leer.nextInt();
					System.out.println("\nIngrese nombre completo: ");
					String nombreCompletoIngresado = leer.next();
					try {
						sistema.agregarPersona(dniIngresado, nombreCompletoIngresado);
						System.out.println(sistema.toString());
					} catch (Exception e) {
						// TODO Auto-generated catch block
						System.out.println("\nERROR: " + e.getMessage());
					}
					break;
				case 2:
					System.out.println(sistema.traerPersonas(true).toString());
					break;
				case 3:
					System.out.println("\nIngrese nombre completo para traer personas con ese nombre: ");
					String busquedaPorNombre = leer.next();
					System.out.println(sistema.traerPersonas(busquedaPorNombre).toString());
					break;
				case 4:
					System.out.println("\nIngrese dni para traer persona con ese dni: ");
					int busquedaPorDni = leer.nextInt();
					System.out.println(sistema.traerPersona(busquedaPorDni).toString());
					break;
				case 5:
					System.out.println("\nUsted salio del programa.");
					break;
				default:
					System.out.println("\nError! Vuelva a ingresar una opción.");
					break;
			}
		}while(opcion!=5);
		
	}
}

