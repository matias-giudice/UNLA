package modelo;

import java.time.LocalDate;
import java.time.LocalTime;
import java.util.ArrayList;
import java.util.List;

public class AdmCarrito {
	private List<Carrito> listaCarrito;

	public AdmCarrito() {
		this.listaCarrito = new ArrayList<Carrito>();
	}

	public List<Carrito> getListaCarrito() {
		return listaCarrito;
	}

	public void setListaCarrito(List<Carrito> listaCarrito) {
		this.listaCarrito = listaCarrito;
	}

	@Override
	public String toString() {
		return "AdmCarrito [listaCarrito=" + listaCarrito + "]";
	}
	
	public boolean agregarCarrito (LocalDate fecha, LocalTime hora, Cliente cliente) throws Exception {
		int i = 0;
		int idCarrito = 1;
		while (i < listaCarrito.size()) {
			if (listaCarrito.size() > 0) {
				idCarrito = listaCarrito.get(listaCarrito.size() - 1).getIdCarrito() + 1;
				if (listaCarrito.get(i).getCliente() == cliente) {
					throw new Exception("Ya existe ese producto con ese precio.");
				}
			}
			i++;
		} 
		
		return listaCarrito.add(new Carrito(idCarrito, fecha, hora, cliente));
	}
	
	public Carrito traerCarrito (int idCarrito) {
		int i = 0;
		boolean found = false;
		Carrito carrito = null;
		
		while (i < listaCarrito.size() && !found) {
			if (listaCarrito.get(i).getIdCarrito() == idCarrito) {
				found = true;
				carrito = listaCarrito.get(i);
			}
			i++;
		}
		
		return carrito;
	}
	
	public boolean eliminarCarrito (int idCarrito) throws Exception {
		Carrito eliminarCarrito = traerCarrito(idCarrito);
		if(eliminarCarrito == null) {
			throw new Exception("ERROR: El carrito que desea eliminar no existe");
		}
		return listaCarrito.remove(eliminarCarrito);
	}
}
