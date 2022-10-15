package modelo;

import java.util.ArrayList;
import java.util.List;

public class AdmProducto {
	private List<Producto> listaProducto;

	public AdmProducto() {
		this.listaProducto = new ArrayList<Producto>();
	}

	public List<Producto> getListaProducto() {
		return listaProducto;
	}

	public void setListaProducto(List<Producto> listaProducto) {
		this.listaProducto = listaProducto;
	}

	@Override
	public String toString() {
		return "AdmProducto [listaProducto=" + listaProducto + "]";
	}
	
	public boolean agregarProducto (String producto, float precio) throws Exception {
		int i = 0;
		int idProducto = 1;
		while (i < listaProducto.size()) {
			if (listaProducto.size() > 0) {
				idProducto = listaProducto.get(listaProducto.size() - 1).getIdProducto() + 1;
				if (listaProducto.get(i).getProducto() == producto) {
					throw new Exception("Ya existe ese producto con ese precio.");
				}
			}
			i++;
		} 
		
		return listaProducto.add(new Producto(idProducto, producto, precio));
	}
	
	public Producto traerProducto(int idProducto) {
		int i = 0;
		boolean found = false;
		Producto prod = null;
		
		while (i < listaProducto.size() && !found) {
			if (listaProducto.get(i).getIdProducto() == idProducto) {
				found = true;
				prod = listaProducto.get(i);
			}
			i++;
		}
		
		return prod;
	}
	
	public boolean modificarProducto(int idProducto, String producto, double precio) throws Exception {
		Producto modificar = traerProducto(idProducto);
		if(modificar == null) {
		 throw new Exception("ERROR: El producto que desea modificar no existe.");
		}
		modificar.setProducto(producto);
		modificar.setPrecio((float)precio);
		return true;
	}
	
	public boolean eliminarProducto (int idProducto) throws Exception {
		Producto eliminar = traerProducto(idProducto);
		if(eliminar == null) {
			throw new Exception("ERROR: El producto que desea eliminar no existe");
		}
		return listaProducto.remove(eliminar);
	}
	
}
