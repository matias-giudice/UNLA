package test;

import java.time.LocalDate;

import modelo.Sistema;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Sistema sistema = new Sistema();
		
		System.out.println("1)");
		try {
			sistema.agregarCliente("S222222222", "Juan", "Ramos", 32654765, LocalDate.of(1984, 10, 5));
			sistema.agregarCliente("S444444444", "Rocio", "Alonso", 33542765, LocalDate.of(1986, 3, 9));
			sistema.agregarCliente("N333333333", "Nicolas", "Suarez", 33542765, LocalDate.of(2005, 3, 9));
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}

		System.out.println("\n2)");
		try {
			sistema.agregarAbonoMensual(sistema.traerCliente("S222222222"), "Plan 1.5Gb", 1165886359, 5, false);
			sistema.agregarAbonoMensual(sistema.traerCliente("S222222222"), "Plan 3Gb", 1165886322, 19, false);
			sistema.agregarAbonoMensual(sistema.traerCliente("S444444444"), "Plan 2Gb", 1187462260, 25, true);
			sistema.agregarAbonoMensual(sistema.traerCliente("S444444444"), "Plan 3Gb", 1187462261, 3, true);
			sistema.agregarPrePago(sistema.traerCliente("N333333333"), "PrePago WApp", 1135746229, LocalDate.of(2022, 9, 25), 30);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}

		System.out.println("\n3)");
		System.out.println(sistema.traerPlanesPorVencimiento(LocalDate.of(2022, 10, 10), LocalDate.of(2022,	11, 10)));

		System.out.println("\n4)");
		try {
			sistema.agregarCliente("S444444444", "Rocio", "Alonso", 33542765, LocalDate.of(1986, 3, 9));
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}

		System.out.println("\n5)");
		try {
			sistema.agregarCliente("SA123456789", "Ernesto", "Perez", 36758952, LocalDate.of(1987, 7, 4));
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}

		System.out.println("\n6)");
		try {
			sistema.agregarAbonoMensual(sistema.traerCliente("N333333333"), "Plan 3Gb", 1135746229, 10, false);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
	}

}
