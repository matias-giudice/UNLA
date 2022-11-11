package test;

import java.time.LocalDate;
import java.time.LocalTime;

import modelo.Sistema;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Sistema sistema = new Sistema();
		System.out.println("1-1)");
		try {
			sistema.agregarTrabajoPresencial(LocalDate.of(2020, 10, 15), "1578", LocalTime.of(9, 00), LocalTime.of(17, 00));
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("1-2)");
		try {
			sistema.agregarTeletrabajo(LocalDate.of(2020, 10, 15), "3782", "Pandemia", 5);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("1-3)");
		try {
			sistema.agregarTrabajoPresencial(LocalDate.of(2020, 10, 15), "1578", LocalTime.of(10, 00), LocalTime.of(18, 00));
			sistema.agregarTeletrabajo(LocalDate.of(2020, 10, 16), "3724", "Pandemia", 9);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("2-1)");
		try {
			System.out.println(sistema.traerAsistencia(LocalDate.of(2020, 10, 15), "1578").calcularHorasTrabajadas());
			System.out.println(sistema.traerAsistencia(LocalDate.of(2020, 10, 15), "3782").calcularHorasTrabajadas());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("3)");
		try {
			sistema.agregarTrabajoPresencial(LocalDate.of(2020, 10, 15), "2839", LocalTime.of(9, 00), LocalTime.of(17, 00));
			sistema.agregarTeletrabajo(LocalDate.of(2020, 10, 16), "3452", "Pandemia", 5);
			sistema.agregarTeletrabajo(LocalDate.of(2020, 10, 16), "5243", "Pandemia", 7);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("4-1)");
		try {
			System.out.println(sistema.traerAsistencia(LocalDate.of(2022, 10, 15)).toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("4-2)");
		try {
			System.out.println(sistema.traerAsistencia(true).toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
	}

}
