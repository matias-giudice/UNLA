package modelo;

import java.time.LocalDate;
import java.time.LocalTime;
import java.util.List;

public class Carrito {
	private int idCarrito;
	private LocalDate fecha;
	private LocalTime hora;
	private List<ItemCarrito> listaItem;
	
	public Carrito(int idCarrito, LocalDate fecha, LocalTime hora, List<ItemCarrito> listaItem) {
		this.idCarrito = idCarrito;
		this.fecha = fecha;
		this.hora = hora;
		this.listaItem = listaItem;
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

	@Override
	public String toString() {
		return "Carrito [idCarrito=" + idCarrito + ", fecha=" + fecha + ", hora=" + hora + ", listaItem=" + listaItem
				+ "]";
	}
	
	public ItemCarrito traerItemCarrito(Producto producto) {
		for(int i=0; i<listaItem.size(); i++) {
			if(producto == listaItem.get(i).getProducto()) {
				return listaItem.get(i);
			}
		}
		return null;
	}
	
	public boolean agregarItem(Producto producto, int cantidad) {
		int i = 0;
		int idItem = 0;
		do {
			if (listaItem.size() > 0) {
				ItemCarrito item = listaItem.get(listaItem.size() - 1);
				if (listaItem.get(i).getProducto() == producto) {
					item.setCantidad(item.getCantidad() + cantidad);
					return true;
				}
				idItem = item.getIdItem() + 1;
			}
			i++;
		} while (i < listaItem.size());
		
		ItemCarrito item = new ItemCarrito(idItem, producto, cantidad);
		
		if(listaItem.size() == 0) {
			return listaItem.add(item);
		}

		return listaItem.add(item);
	}
	
	public boolean eliminarItem (Producto producto, int cantidad) throws Exception {
		ItemCarrito item = traerItemCarrito(producto);
		
		if (item == null) {
			throw new Exception("No existe ese Item en el Carrito.");
		}
		
		if(item.getCantidad() > cantidad) {
			item.setCantidad(item.getCantidad() - cantidad);
			return true;
		}
		
		listaItem.remove(item);
		return true;
	}
	
	public float calcularSubTotal() {
		float subtotal = 0;
		for (int i = 0; i < listaItem.size(); i++)
			subtotal += listaItem.get(i).getProducto().getPrecio() * listaItem.get(i).getCantidad();
		return subtotal;
	}
	
	public float calcularTotal() {
		float total = 0;
		for (int i = 0; i < listaItem.size(); i++)
			total += listaItem.get(i).getProducto().getPrecio();
		return total;
	}
}
