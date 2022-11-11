package test;

import java.time.LocalDate;
import java.time.LocalTime;

import modelo.Acumar;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Acumar acumar = new Acumar();
		System.out.println("1)");
		try {
			acumar.agregarEstacion("Lanus", "Carlos Casares 2000", -34.7, -58.4, 100.0f);
			acumar.agregarEstacion("Avellaneda", "Av. Manuel Belgrano 2800", -34.681667, -58.349722, 200.0f);
			System.out.println(acumar.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		
		System.out.println("2)");
		System.out.println(acumar.traerEstacion("Lanus").toString());
		
		System.out.println("3)");
		try {
			acumar.agregarEstacion("Lanus", "Carlos Casares 2000", -34.7, -58.4, 100.0f);
			System.out.println(acumar.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		
		System.out.println("4)");
		acumar.agregarMedicion(acumar.traerEstacion("Lanus"), LocalDate.of(2022, 9, 1), LocalTime.of(13, 00), 17.6f, 49.0f, 9.7f, "E", 0.0f);
		acumar.agregarMedicion(acumar.traerEstacion("Lanus"), LocalDate.of(2022, 9, 1), LocalTime.of(14, 00), 18.4f, 45.0f, 6.2f, "SE", 0.0f);
		acumar.agregarMedicion(acumar.traerEstacion("Lanus"), LocalDate.of(2022, 9, 1), LocalTime.of(16, 00), 19.0f, 39.0f, 7.3f, "S", 0.0f);
		acumar.agregarMedicion(acumar.traerEstacion("Avellaneda"), LocalDate.of(2022, 9, 1), LocalTime.of(15, 00), 18.8f, 42.0f, 6.8f, "S", 0.0f);
		System.out.println(acumar.toString());
		
		System.out.println("5)");
		System.out.println(acumar.traerMediciones(acumar.traerEstacion("Avellaneda")).toString());
		
		
		System.out.println("6)");
		System.out.println(acumar.promedioTemperatura(acumar.traerEstacion("Lanus"), LocalDate.of(2022, 9, 1), LocalTime.of(12, 00), LocalTime.of(15, 30)));
		
		System.out.println("7)");
		System.out.println(acumar.traerEstacion("Lanus").distanciaConEstacion(acumar.traerEstacion("Avellaneda")));

		System.out.println("8)");
		System.out.println(acumar.traerEstacion("Lanus").temperaturaCorregidaPorAltura);
	}

}
