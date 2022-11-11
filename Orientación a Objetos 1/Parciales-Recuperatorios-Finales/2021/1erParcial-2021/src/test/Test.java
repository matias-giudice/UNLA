package test;

import java.time.LocalDate;

import modelo.Sistema;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Sistema sistema = new Sistema();
		System.out.println("1)");
		sistema.agregarEmpleado("Alvarez", "Martin", "4526", 380.0);
		sistema.agregarEmpleado("Araujo", "Mariana", "2698", 410.0);
		System.out.println(sistema.toString());
		
		System.out.println("2)");
		System.out.println(sistema.traerEmpleado("2698"));
		
		
		System.out.println("3)");
		sistema.agregarTarea("Reparación Córdoba altura 700-800", LocalDate.of(2021, 5, 11), LocalDate.of(2021, 6, 19), sistema.traerEmpleado("4526"), 7, true);
		sistema.agregarTarea("Reparación semaforo Alsina y Balcarce", LocalDate.of(2021, 6, 16), LocalDate.of(2021, 7, 22), sistema.traerEmpleado("2698"), 6, false);
		System.out.println(sistema.toString());
		
		System.out.println("4)");
		System.out.println(sistema.traerTarea(1));
		
		System.out.println("5)");
		System.out.println(sistema.traerTarea(1).calcularJornal());
		
		System.out.println("6)");
		System.out.println(sistema.traerTarea(1).calcularCantDiasTrabajados(6, 2021));
		
		System.out.println("7)");
		System.out.println(sistema.traerTarea(1).calcularHonorarios(6, 2021));
		
		System.out.println("8)");
		System.out.println(sistema.traerTarea(2));
		
		System.out.println("9)");
		System.out.println(sistema.traerTarea(2).calcularJornal());
		
		System.out.println("10)");
		System.out.println(sistema.traerTarea(2).calcularCantDiasTrabajados(6, 2021));
		
		System.out.println("11)");
		System.out.println(sistema.traerTarea(2).calcularHonorarios(6, 2021));
	}

}
