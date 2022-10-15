package modelo;

import java.util.ArrayList;
import java.util.List;

public class AdmCliente {
	private List<Cliente> listaCliente;

	public AdmCliente() {
		this.listaCliente = new ArrayList<Cliente>();
	}

	public List<Cliente> getListaCliente() {
		return listaCliente;
	}

	public void setListaCliente(List<Cliente> listaCliente) {
		this.listaCliente = listaCliente;
	}

	@Override
	public String toString() {
		return "AdmCliente [listaCliente=" + listaCliente + "]";
	}
	
	public boolean agregarCliente(String cliente, long dni, String direccion) throws Exception {
		int i = 0;
		int idCliente = 0;
		while (i < listaCliente.size()) {
			if (listaCliente.size() > 0) {
				idCliente = listaCliente.get(listaCliente.size() - 1).getIdCliente() + 1;
				if (listaCliente.get(i).getCliente() == cliente) {
					throw new Exception("Ya existe el cliente.");
				}
			}
			i++;
		} 
		
		return listaCliente.add(new Cliente(idCliente, cliente, dni, direccion));
	}
	
	public Cliente traerCliente(int idCliente) {
		int i = 0;
		boolean found = false;
		Cliente cliente = null;
			
		while (i < listaCliente.size() && !found) {
			if (listaCliente.get(i).getIdCliente() == idCliente) {
				found = true;
				cliente = listaCliente.get(i);
			}
			i++;
		}
		return cliente;
	}
	
	public Cliente traerCliente (long dniCliente) {
		int i = 0;
		boolean found = false;
		Cliente cliente = null;
		
		while (i < listaCliente.size() && !found) {
			if (listaCliente.get(i).getDni() == dniCliente) {
				found = true;
				cliente = listaCliente.get(i);
			}
			i++;
		}
		
		return cliente;
	}

	public boolean eliminarCliente (int idCliente) throws Exception {
		Cliente eliminarCliente = traerCliente(idCliente);
		if(eliminarCliente == null) {
			throw new Exception("ERROR: El cliente que desea eliminar no existe");
		}
		return listaCliente.remove(eliminarCliente);
	}
}
