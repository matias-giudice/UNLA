package modelo;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;

public class Sistema {
	private List<Cliente> lstClientes;
	private List<Plan> lstPlanes;
	
	public Sistema() {
		this.lstClientes = new ArrayList<Cliente>();
		this.lstPlanes = new ArrayList<Plan>();
	}

	public List<Cliente> getLstClientes() {
		return lstClientes;
	}

	public void setLstClientes(List<Cliente> lstClientes) {
		this.lstClientes = lstClientes;
	}

	public List<Plan> getLstPlanes() {
		return lstPlanes;
	}

	public void setLstPlanes(List<Plan> lstPlanes) {
		this.lstPlanes = lstPlanes;
	}

	@Override
	public String toString() {
		return "Sistema [lstClientes=" + lstClientes + ", lstPlanes=" + lstPlanes + "]";
	}
	
	public boolean agregarCliente(String codCliente, String nombre, String apellido, int dni, LocalDate fechaNacimiento) throws Exception {
		int i = 0;
		int idCliente = 1;
		while(i < lstClientes.size()) {
			if(lstClientes.size() > 0) {
				idCliente = lstClientes.get(lstClientes.size() - 1).getId() + 1;
				if(lstClientes.get(i).getCodCliente().equalsIgnoreCase(codCliente)) {
					throw new Exception("Ya existe un Cliente con el mismo codCliente.");
				}
			}
			i++;
		}
		return lstClientes.add(new Cliente(idCliente, codCliente, nombre, apellido, dni, fechaNacimiento));
	}
	
	public Cliente traerCliente(String codCliente) {
		Cliente buscado = null;
		int i = 0;
		while(i < lstClientes.size() && buscado == null) {
			Cliente comparado = lstClientes.get(i);
			if(comparado.getCodCliente().equalsIgnoreCase(codCliente)) {
				buscado = comparado;
			}
			i++;
		}
		return buscado;
	}
	
	public boolean agregarAbonoMensual (Cliente cliente, String nombre, int nroLinea, int diaFacturacion, boolean flota) throws Exception {
		int i = 0;
		int idPlan = 1;
		while (i < lstPlanes.size()) {
			if (lstPlanes.size() > 0) {
				idPlan = lstPlanes.get(lstPlanes.size() - 1).getId() + 1;
				if (lstPlanes.get(i).getCliente().calcularEdad() < 18) {
					throw new Exception("El cliente es menor de edad.");
				}
			}
			i++;
		} 
		
		return lstPlanes.add(new AbonoMensual(idPlan, cliente, nombre, nroLinea, diaFacturacion, flota));
	}
	
	public boolean agregarPrePago (Cliente cliente, String nombre, int nroLinea, LocalDate fechaUltimaRecarga, int diasDuracion) {
		int i = 0;
		int idPlan = 1;
		while (i < lstPlanes.size()) {
			if (lstPlanes.size() > 0) {
				idPlan = lstPlanes.get(lstPlanes.size() - 1).getId() + 1;
			}
			i++;
		} 
		return lstPlanes.add(new PrePago(idPlan, cliente, nombre, nroLinea, fechaUltimaRecarga, diasDuracion));
	}
	
	public List<Plan> traerPlanesPorVencimiento(LocalDate desde, LocalDate hasta) {
		List<Plan> planes = new ArrayList<Plan>();
		
		for(int i=0; i<lstPlanes.size(); i++) {
			LocalDate vencimiento = lstPlanes.get(i).calcularFechaProximoVencimiento();
			if(!vencimiento.isBefore(desde) && !vencimiento.isAfter(hasta)) {
				if(lstPlanes.get(i) instanceof AbonoMensual) {
					AbonoMensual abono = (AbonoMensual)lstPlanes.get(i);
					if(!abono.isFlota()) {
						planes.add(lstPlanes.get(i));
					}
				} else {
					planes.add(lstPlanes.get(i));
				}
			}
		}
		
		return planes;
	}
}
