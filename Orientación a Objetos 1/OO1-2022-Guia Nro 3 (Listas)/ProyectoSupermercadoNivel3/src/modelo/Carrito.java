package modelo;

import java.time.LocalDate;
import java.time.LocalTime;
import java.util.ArrayList;
import java.util.List;

public class Carrito {
	private int idCarrito;
	private LocalDate fecha;
	private LocalTime hora;
	private List<ItemCarrito> listaItem;
	private Cliente cliente;
	
	public Carrito(int idCarrito, LocalDate fecha, LocalTime hora, Cliente cliente) {
		this.idCarrito = idCarrito;
		this.fecha = fecha;
		this.hora = hora;
		this.listaItem = new ArrayList<ItemCarrito>();
		this.cliente = cliente;
	}

	public int getIdCarrito() {
		return idCarrito;
	}

	public void setIdCarrito(int idCarrito) {
		this.idCarrito = idCarrito;
	}

	public LocalDate getFecha() {
		return fecha;
	}

	public void setFecha(LocalDate fecha) {
		this.fecha = fecha;
	}

	public LocalTime getHora() {
		return hora;
	}

	public void setHora(LocalTime hora) {
		this.hora = hora;
	}

	public List<ItemCarrito> getListaItem() {
		return listaItem;
	}

	public void setListaItem(List<ItemCarrito> listaItem) {
		this.listaItem = listaItem;
	}

	public Cliente getCliente() {
		return cliente;
	}

	public void setCliente(Cliente cliente) {
		this.cliente = cliente;
	}

	@Override
	public String toString() {
		return "Carrito [idCarrito=" + idCarrito + ", fecha=" + fecha + ", hora=" + hora + ", listaItem=" + listaItem
				+ ", cliente=" + cliente + "]";
	}
	
	public boolean agregarItem (Producto producto, int cantidad) throws Exception {
		int i = 0;
		int idItem = 0;
		while (i < listaItem.size()) {
			if (listaItem.size() > 0) {
				idItem = listaItem.get(listaItem.size() - 1).getIdItem() + 1;
				if (listaItem.get(i).getProducto() == producto) {
					throw new Exception("Ya existe ese producto con ese precio.");
				}
			}
			i++;
		} 
		
		return listaItem.add(new ItemCarrito(idItem, producto, cantidad));
	}
	
	public ItemCarrito traerItemCarrito(Producto producto) {
		int i = 0;
		boolean found = false;
		ItemCarrito item = null;
		
		while (i < listaItem.size() && !found) {
			if (listaItem.get(i).getProducto().equals(producto)) {
				found = true;
				item = listaItem.get(i);
			}
			i++;
		}
		
		return item;
	}
	
	public boolean eliminarItem (Producto producto, int cantidad) throws Exception {
		ItemCarrito itemEliminar = traerItemCarrito(producto);
		  
		if (itemEliminar == null)
			throw new Exception("No existe ese Item en el Carrito.");
		
		if (itemEliminar.getCantidad() > cantidad) {
			itemEliminar.setCantidad(itemEliminar.getCantidad() - cantidad);
			return true;
		}
		
		listaItem.remove(itemEliminar);
		return true;
	}
	
	public float calcularTotal () {
		float precio = 0;
		for (int i = 0; i < listaItem.size(); i++)
			precio += listaItem.get(i).getProducto().getPrecio() * listaItem.get(i).getCantidad();
		return precio;
	}
	
	public float calcularSubTotal () {
		float total = 0;
		for (int i = 0; i < listaItem.size(); i++)
			total += listaItem.get(i).getProducto().getPrecio();
		return total;
	}
}
