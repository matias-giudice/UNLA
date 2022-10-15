package test;

import modelo.Supermercado;

public class TestSupermercado {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Supermercado gondola = new Supermercado();
		
		
		try {
			gondola.agregarProducto("Coca Cola", 350.50f);
			gondola.agregarProducto("Manaos", 250f);
			gondola.agregarProducto("Levite", 180.50f);
			gondola.agregarProducto("Baggio", 200.50f);
			gondola.agregarProducto("Aquarius", 290);
			gondola.agregarProducto("Cordoba", 150.50f);
			//->Se modifica el 4 elemento
			gondola.modificarProducto(4, "pepsi", 145.50f);
			//->Se elimina el 5 elemento
			gondola.eliminarProducto(5);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		System.out.print(gondola.toString());
		
	}
}
