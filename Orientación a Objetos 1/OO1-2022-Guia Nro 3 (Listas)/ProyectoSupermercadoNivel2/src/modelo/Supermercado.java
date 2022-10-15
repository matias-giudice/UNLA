package modelo;

import java.util.List;

public class Supermercado {
	private List<Producto> Producto;
	private List<Cliente> Cliente;
	private List<Carrito> Carrito;
	
	public Supermercado(List<Producto> producto, List<Cliente> cliente, List<Carrito> carrito) {
		Producto = producto;
		Cliente = cliente;
		Carrito = carrito;
	}

	public List<Producto> getProducto() {
		return Producto;
	}

	public void setProducto(List<Producto> producto) {
		Producto = producto;
	}

	public List<Cliente> getCliente() {
		return Cliente;
	}

	public void setCliente(List<Cliente> cliente) {
		Cliente = cliente;
	}

	public List<Carrito> getCarrito() {
		return Carrito;
	}

	public void setCarrito(List<Carrito> carrito) {
		Carrito = carrito;
	}

	@Override
	public String toString() {
		return "Supermercado [Producto=" + Producto + ", Cliente=" + Cliente + ", Carrito=" + Carrito + "]";
	}
}
