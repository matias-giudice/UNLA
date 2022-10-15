package test;

import java.time.LocalDate;
import java.time.LocalTime;

import modelo.Supermercado;

public class TestSupermercado3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Supermercado supermercado = new Supermercado();
		try {
			supermercado.agregarProducto("shampoo", 130f);
			supermercado.agregarProducto("jabon", 120f);
			supermercado.agregarProducto("pitusas", 170f);
			supermercado.agregarProducto("leche", 140f);
			supermercado.eliminarProducto(1);
			supermercado.agregarProducto("shampoo", 14f);
			supermercado.modificarProducto(3, "tio nacho", supermercado.traerProducto(3).getPrecio() * 2);
			supermercado.agregarCliente("Pepe", 12345678, "calle falsa 123");
			supermercado.agregarCliente("Pepe2", 12345679, "calle falsa 124");
			supermercado.eliminarCliente(1);
			supermercado.agregarCliente("Pepe", 12345678, "calle falsa 123");
			supermercado.agregarCarrito(LocalDate.of(2022, 3, 3), LocalTime.of(10, 6), supermercado.traerCliente(2));
			supermercado.agregarCarrito(LocalDate.of(2022, 5, 4), LocalTime.of(10, 5), supermercado.traerCliente(2));
			// falta verificación extra -> traerCarrito() puede retornar null
			// ...y da error al acceder a un metodo xd
			supermercado.traerCarrito(1).agregarItem(supermercado.traerProducto(3), 3);
			supermercado.traerCarrito(1).agregarItem(supermercado.traerProducto(3), 1);
			supermercado.traerCarrito(2).agregarItem(supermercado.traerProducto(3), 1);
			System.out.println(supermercado.calcularTotal(supermercado.traerCliente(2))); // -> 140
			//System.out.println(supermercado.calcularTotal(supermercado.traerCliente(2).getDni())); // -> 140
			System.out.println(supermercado.calcularTotal(LocalDate.of(2022, 2, 1), LocalDate.of(2022, 3, 5))); // -> 112
			System.out.println(supermercado.calcularTotal(LocalDate.of(2022, 5, 4))); // -> 28
			System.out.println(supermercado.calcularTotal(LocalDate.of(2022, 3, 4))); // -> 0
			System.out.println(supermercado.calcularTotal(3, 2022)); // -> 112
			System.out.println(supermercado.calcularTotal(4, 2022)); // -> 0
			System.out.println(supermercado.calcularTotal(LocalDate.of(2022, 2, 1), LocalDate.of(2022, 3, 5), supermercado.traerCliente(2))); // -> 112
			System.out.println(supermercado.calcularTotal(LocalDate.of(2022, 3, 3), supermercado.traerCliente(2))); // -> 112
			System.out.println(supermercado.calcularTotal(LocalDate.of(2022, 5, 4), supermercado.traerCliente(2))); // -> 28
			System.out.println(supermercado.calcularTotal(3, 2022, supermercado.traerCliente(2))); // -> 112
			System.out.println(supermercado.calcularTotal(4, 2022, supermercado.traerCliente(2))); // -> 0
			//System.out.println(supermercado.calcularTotal(3, 2022, supermercado.traerCliente(2).getDni())); // -> 112
			supermercado.eliminarCliente(3);
			supermercado.eliminarProducto(2);
			//superm.eliminarCarrito(1);
		} catch (Exception e) {
			e.printStackTrace();
		}
		System.out.println(supermercado);
	}

}
