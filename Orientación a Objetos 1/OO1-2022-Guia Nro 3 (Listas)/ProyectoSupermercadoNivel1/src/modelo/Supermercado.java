package modelo;

import java.util.ArrayList;
import java.util.List;

public class Supermercado {
	private List<Producto> gondola;

	public Supermercado() {
		this.gondola = new ArrayList<Producto>();
	}

	public List<Producto> getGondola() {
		return gondola;
	}

	public void setGondola(List<Producto> gondola) {
		this.gondola = gondola;
	}

	@Override
	public String toString() {
		return "Supermercado [gondola=" + gondola + "]";
	}
	
	public boolean agregarProducto(String producto, float precio) throws Exception {
		for(int i=0; i<gondola.size(); i++) {
			if(gondola.get(i).getProducto() == producto) {
				throw new Exception("ERROR: El producto " + gondola.get(i).getProducto() + " que desea agregar ya existe.");
			}
		}
		
		Producto productoAux = new Producto(gondola.size()+1, producto, precio);
		
		if(gondola.size() == 0) {
			return gondola.add(productoAux);
		}
		
		return gondola.add(productoAux);
	}
	
	public Producto traerProducto(int idProducto) {
		for(int i=0; i<gondola.size(); i++) {
			if(idProducto == gondola.get(i).getIdProducto()) {
				return gondola.get(i);
			}
		}
		return null;
	}
	
	public boolean modificarProducto(int idProducto, String producto, double precio) throws Exception {
		Producto modificar = traerProducto(idProducto);
		if(modificar == null) {
		 throw new Exception("ERROR: El producto que desea modificar no existe.");
		}else {
			modificar.setProducto(producto);
			modificar.setPrecio(precio);
		}
		return true;
	}
	public boolean eliminarProducto(int idProducto) throws Exception {
		Producto eliminar = traerProducto(idProducto);
		if(eliminar == null) {
			throw new Exception("ERROR: El producto que desea eliminar no existe");
		}
		//cada vez que se elimine una pelicula, si hay peliculas siguientes en la lista el ID se restara 1
		//if(traerPelicula(idPelicula+1)!=null) {
			//for(int i=idPelicula; i<catalogo.size(); i++) {
			//catalogo.get(i).setIdPelicula(catalogo.get(i).getIdPelicula()-1);
			//}
		//}
		return gondola.remove(eliminar);
	}	
	/*public void mostrarGondola() {
		for(int i=0; i<gondola.size(); i++) {
			System.out.println(gondola.get(i).toString());
		}
	}*/
}
