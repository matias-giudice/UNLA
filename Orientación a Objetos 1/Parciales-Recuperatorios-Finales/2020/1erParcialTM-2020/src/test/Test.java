package test;

import java.time.LocalDate;

import modelo.Sistema;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Sistema sistema = new Sistema();
		System.out.println("1-1)");
		try {
			sistema.agregarGastronomia("4892", 15.0, true, "Hamburguesa criolla", 180.0, 4);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("1-2)");
		try {
			sistema.agregarGastronomia("489235", 15.0, true, "Hamburguesa criolla", 180.0, 4);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("1-3)");
		try {
			sistema.agregarHospedaje("2872", 10.0, true, "Cabaña 3 personas", 1500.0);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("1-4)");
		try {
			sistema.agregarHospedaje("287282", 10.0, true, "Cabaña 3 personas", 1500.0);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		} 
		System.out.println("2-1)");
		System.out.println(sistema.traerServicio("489235").calcularPrecioFinal(LocalDate.of(2020, 10, 28)));
		System.out.println("2-2)");
		System.out.println(sistema.traerServicio("287282").calcularPrecioFinal(LocalDate.of(2020, 10, 27)));
		System.out.println("3)");
		try {
			sistema.agregarGastronomia("858927", 15.0, true, "Milanesa con pure", 350.0, 3);
			sistema.agregarHospedaje("489259", 10.0, true, "Habitación triple", 2200.0);
			sistema.agregarGastronomia("182835", 20.0, false, "Gaseosa", 120.0, 3);
			sistema.agregarHospedaje("758972", 15.0, false, "Habitación simple", 1000.0);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("4-1)");
		System.out.println(sistema.traerServicio(true).toString());
		
		System.out.println("4-2)");
		System.out.println(sistema.traerServicio(true, LocalDate.of(2020, 10, 28)).toString());

	}

}
