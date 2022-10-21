package test;

import java.time.LocalDate;

import modelo.CampingNacional;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		CampingNacional camping = new CampingNacional();
		System.out.println("\n1)");
		try {
			camping.agregarPersona("Sergio", "Lopez", 11111111);
			camping.agregarPersona("Juan", "Rodriguez", 22222222);
			camping.agregarPersona("Maria", "Fernandez", 33333333);
			camping.agregarPersona("Juan", "Vazquez", 44444444);
			camping.agregarPersona("Ana", "Martinez", 55555555);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println(e.getMessage());
		}
		System.out.println("\n2)");
		try {
			camping.agregarRecreo("7358902", LocalDate.of(2022, 9, 2), false, camping.traerPersona(11111111), 5, 300.0);
			camping.agregarCampamento("6573540", LocalDate.of(2022, 9, 3), false, camping.traerPersona(22222222), null, 1, 1500.0);
			camping.agregarRecreo("3571398", LocalDate.of(2022, 9, 3), false, camping.traerPersona(33333333), 10, 300.0);
			camping.agregarCampamento("2583941", LocalDate.of(2022, 9, 3), true, camping.traerPersona(44444444), LocalDate.of(2022, 9, 8), 2, 1500.0);
			camping.agregarRecreo("5243925", LocalDate.of(2022, 9, 3), true, camping.traerPersona(55555555), 8, 300.0);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println(e.getMessage());
		}
		System.out.println("\n3)");
		System.out.println(camping.traerServiciosPorPrecioFinal(1000));
		System.out.println("\n4)");
		System.out.println(camping.traerCampamentosPorDias(5));
		System.out.println("\n5)");
		try {
			camping.agregarPersona("Maria", "Fernandez", 33333333);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println(e.getMessage());
		}
		System.out.println("\n6)");
		try {
			camping.agregarRecreo("5732927", LocalDate.of(2022, 10, 2), false, camping.traerPersona(11111111), 5, 300.0);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println(e.getMessage());
		}
	}

}
