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
			sistema.agregarServicio("897323", "Mantenimiento maquina de cortar pasto", 2500.0, 15.0, true);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("1-2)");
		try {
			sistema.agregarServicio("8973231", "Mantenimiento maquina de cortar pasto", 2500.0, 15.0, true);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("1-3)");
		try {
			sistema.agregarProducto("432597", "Manguera de desagote lavarropa", 650.0, 15.0, true);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("1-4)");
		try {
			sistema.agregarProducto("4325971", "Manguera de desagote lavarropa", 650.0, 15.0, true);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("2-1)");
		try {
			System.out.println(sistema.traerMercancia("8973231").calcularPrecioFinal());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("2-2)");
		try {
			System.out.println(sistema.traerMercancia("4325971").calcularPrecioFinal());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("3-1)");
		try {
			sistema.agregarProducto("3892871", "Aceite para maquinas", 430.0, 10.0, true);
			sistema.agregarServicio("3892815", "Mantenimiento de cortadora de ceped", 2520.0, 0.0, true);
			sistema.agregarProducto("9381925", "Tambor lavaropa", 7500.0, 25.0, false);
			sistema.agregarServicio("3481759", "Mantenimiento estufa", 1250.0, 0.0, false);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("3-2)");
		try {
			sistema.agregarServicio("3892815", "Mantenimiento de cortadora de ceped", 2520.0, 0.0, true);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("3-3)");
		try {
			sistema.agregarProducto("9381925", "Tambor lavaropa", 7500.0, 25.0, false);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("4)");
		try {
			System.out.println(sistema.traerMercancia(true).toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
	}

}
