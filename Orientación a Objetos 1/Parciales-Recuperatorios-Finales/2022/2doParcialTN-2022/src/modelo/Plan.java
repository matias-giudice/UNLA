package modelo;

import java.time.LocalDate;

public abstract class Plan {
	protected int id;
	protected Cliente cliente;
	protected String nombre;
	protected int nroLinea;
	
	public Plan(int id, Cliente cliente, String nombre, int nroLinea) {
		this.id = id;
		this.cliente = cliente;
		this.nombre = nombre;
		this.nroLinea = nroLinea;
	}

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public Cliente getCliente() {
		return cliente;
	}

	public void setCliente(Cliente cliente) {
		this.cliente = cliente;
	}

	public String getNombre() {
		return nombre;
	}

	public void setNombre(String nombre) {
		this.nombre = nombre;
	}

	public int getNroLinea() {
		return nroLinea;
	}

	public void setNroLinea(int nroLinea) {
		this.nroLinea = nroLinea;
	}

	@Override
	public String toString() {
		return "id=" + id + ", cliente=" + cliente + ", nombre=" + nombre + ", nroLinea=" + nroLinea + "]";
	}
	
	public abstract LocalDate calcularFechaProximoVencimiento();
}
