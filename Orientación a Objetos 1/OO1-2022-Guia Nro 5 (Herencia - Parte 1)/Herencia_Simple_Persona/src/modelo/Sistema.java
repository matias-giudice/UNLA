package modelo;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;

public class Sistema {
	private List<Persona> listaPersonas;

	public Sistema() {
		this.listaPersonas = new ArrayList<Persona>();
	}

	public List<Persona> getListaPersonas() {
		return listaPersonas;
	}

	public void setListaPersonas(List<Persona> listaPersonas) {
		this.listaPersonas = listaPersonas;
	}

	@Override
	public String toString() {
		return "Sistema [listaPersonas=" + listaPersonas + "]";
	}
	
	public boolean agregarEmpleado (String nombre, String apellido, long dni, LocalDate fechaNacimiento, long legajo,
			float sueldoMensual) throws Exception {
		int i = 0;
		int idEmpleado = 1;
		while (i < listaPersonas.size()) {
			if (listaPersonas.size() > 0) {
				idEmpleado = listaPersonas.get(listaPersonas.size() - 1).getIdPersona() + 1;
				if (listaPersonas.get(i).getApellido() == apellido) {
					throw new Exception("Ya existe esa empleado.");
				}
			}
			i++;
		} 
		
		return listaPersonas.add(new Empleado(idEmpleado, nombre, apellido, dni, fechaNacimiento, legajo, sueldoMensual));
	}
	
	public Empleado traerEmpleado(long legajo) {
		int i = 0;
		Empleado encontrado = null;
		while (i < listaPersonas.size() && encontrado == null) {
			if (listaPersonas.get(i) instanceof Empleado) {
				Empleado empleado = (Empleado) listaPersonas.get(i);
				if (empleado.getLegajo() == legajo) {
					encontrado = empleado;
				}
			}
			i++;
		}
		
		return encontrado;
	}
	
	public boolean agregarCliente (String nombre, String apellido, long dni, LocalDate fechaNacimiento, String cuit,
			float limiteCredito) throws Exception {
		int i = 0;
		int idCliente = 1;
		while (i < listaPersonas.size()) {
			if (listaPersonas.size() > 0) {
				idCliente = listaPersonas.get(listaPersonas.size() - 1).getIdPersona() + 1;
				if (listaPersonas.get(i).getApellido() == apellido) {
					throw new Exception("Ya existe esa empleado.");
				}
			}
			i++;
		} 
		
		return listaPersonas.add(new Cliente(idCliente, nombre, apellido, dni, fechaNacimiento, cuit, limiteCredito));
	}
	
	public Cliente traerCliente(String cuil) {
		int i = 0;
		Cliente encontrado = null;
		while (i < listaPersonas.size() && encontrado == null) {
			if (listaPersonas.get(i) instanceof Cliente) {
				Cliente cliente = (Cliente) listaPersonas.get(i);
				if (cliente.getCuit() == cuil) {
					encontrado = cliente;
				}
			}
			i++;
		}
		
		return encontrado;
	}
	//clientesAptosCredito() : Cliente
	//empleadosConSueldoAlto() : Empleado
}
