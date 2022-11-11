package test;

import java.time.LocalDate;

import modelo.Sistema;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Sistema sistema = new Sistema();
		System.out.println("1-1)");
		try {
			sistema.agregarPedidoPapelMensual(LocalDate.of(2020, 12, 12), 2500, LocalDate.of(2020, 12, 15), 5);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("1-2)");
		try {
			sistema.agregarPedidoElectronico(LocalDate.of(2020, 12, 12), 3000, "PC no funciona", 200);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("1-3)");
		try {
			sistema.agregarPedidoPapelMensual(LocalDate.of(2020, 12, 12), 2500, LocalDate.of(2020, 12, 15), 0);
			sistema.agregarPedidoElectronico(LocalDate.of(2020, 12, 12), 3500, "", 200);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("2-1)");
		System.out.println(sistema.traerPedido(1).calcularPrecioFinal());
		System.out.println(sistema.traerPedido(2).calcularPrecioFinal());
		System.out.println("3)");
		try {
			sistema.agregarPedidoPapelMensual(LocalDate.of(2020, 12, 12), 1200, LocalDate.of(2020, 12, 16), 3);
			sistema.agregarPedidoElectronico(LocalDate.of(2020, 12, 14), 3000, "PC no funciona", 200);
			sistema.agregarPedidoElectronico(LocalDate.of(2020, 12, 15), 3100, "Monitor no funciona", 210);
			System.out.println(sistema.toString());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			System.out.println("ERROR: " + e.getMessage());
		}
		System.out.println("4-1)");
		System.out.println(sistema.traerPedidos("PC no funciona").toString());
		System.out.println("4-2)");
		System.out.println(sistema.calcularTotalGeneral());
	}

}
