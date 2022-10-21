package test;

import java.time.LocalDate;
import java.time.LocalTime;

import modelo.Dispositivo;
import modelo.SistemaSaludDispositivos;

public class TestTema1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		SistemaSaludDispositivos sistema = new SistemaSaludDispositivos();
		
		System.out.println("1)");
		try {
			sistema.agregarEmpresa("Empresa 1");
			sistema.agregarEmpresa("Empresa 2");
			System.out.println(sistema.toString());
		} catch (Exception e) {
			System.out.println(e.getMessage());
		}
		System.out.println("2)");
		try {
			System.out.println(sistema.traerEmpresa("Empresa 2"));
		} catch (Exception e) {
			System.out.println(e.getMessage());
		}
		System.out.println("3)");
		try {
			sistema.agregarDispositivo("Sensor humedad", "A2020", sistema.traerEmpresa("Empresa 1"));
			sistema.agregarDispositivo("Sensor Temperatura", "A2325", sistema.traerEmpresa("Empresa 1"));
			sistema.agregarDispositivo("Sensor Presion", "B2021", sistema.traerEmpresa("Empresa 2"));
			sistema.agregarDispositivo("Sensor Calor", "B2326", sistema.traerEmpresa("Empresa 2"));
			System.out.println(sistema.toString());
		} catch (Exception e) {
			System.out.println(e.getMessage());
		}
		System.out.println("4)");
		try {
			sistema.agregarDispositivo("Sensor Humedad", "A2021", sistema.traerEmpresa("Empresa 1"));
		} catch (Exception e) {
			System.out.println(e.getMessage());
		}
		System.out.println("5)");
		Dispositivo dispositivo = null;
		try {
			dispositivo = sistema.traerDispositivo("B2326");
			System.out.println(dispositivo);
		} catch (Exception e) {
			System.out.println(e.getMessage());
		}
		System.out.println("6)");
		try {
			dispositivo.agregarMetrica(18, LocalDate.of(2022, 9, 18), LocalTime.of(10, 0));
			dispositivo.agregarMetrica(19, LocalDate.of(2022, 9, 19), LocalTime.of(12, 30));
			dispositivo.agregarMetrica(23, LocalDate.of(2022, 9, 20), LocalTime.of(15, 0));
			dispositivo.agregarMetrica(20, LocalDate.of(2022, 9, 21), LocalTime.of(18, 30));
			dispositivo.agregarMetrica(18, LocalDate.of(2022, 9, 22), LocalTime.of(22, 30));
			System.out.println(dispositivo.toString());
		} catch (Exception e) {
			System.out.println(e.getMessage());
		}
		System.out.println("7)");
		try {
			System.out.println(dispositivo.traerMetrica(LocalDate.of(2022, 9, 19), LocalTime.of(12, 30)));
		} catch (Exception e) {
			// TODO: handle exception
			System.out.println(e.getMessage());
		}
		System.out.println("8)");
		try {
			Dispositivo.mostrarMetricas(dispositivo.traerMetricas(LocalDate.of(2022, 9, 19), LocalDate.of(2022, 9, 21)));
		} catch (Exception e) {
			// TODO: handle exception
			System.out.println(e.getMessage());
		}
		System.out.println("9)");
		try {
			Dispositivo.mostrarMetricas(sistema.traerMetricas(dispositivo, LocalDate.of(2022, 9, 19), LocalDate.of(2022, 9, 21), 22));
		} catch (Exception e) {
			// TODO: handle exception
			System.out.println(e.getMessage());
		}
	}

}
