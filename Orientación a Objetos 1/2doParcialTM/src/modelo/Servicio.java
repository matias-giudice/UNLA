package modelo;

import java.time.LocalDate;

public abstract class Servicio {
	protected int idServicio;
	protected String codIngreso;
	protected LocalDate fechaIngreso;
	protected boolean checkOut;
	protected Persona responsable;
	
	public Servicio(int idServicio, String codIngreso, LocalDate fechaIngreso, boolean checkOut, Persona responsable) {
		this.idServicio = idServicio;
		this.codIngreso = codIngreso;
		this.fechaIngreso = fechaIngreso;
		this.checkOut = checkOut;
		this.responsable = responsable;
	}

	public int getIdServicio() {
		return idServicio;
	}

	public void setIdServicio(int idServicio) {
		this.idServicio = idServicio;
	}

	public String getCodIngreso() {
		return codIngreso;
	}

	public void setCodIngreso(String codIngreso) {
		this.codIngreso = codIngreso;
	}

	public LocalDate getFechaIngreso() {
		return fechaIngreso;
	}

	public void setFechaIngreso(LocalDate fechaIngreso) {
		this.fechaIngreso = fechaIngreso;
	}

	public boolean isCheckOut() {
		return checkOut;
	}

	public void setCheckOut(boolean checkOut) {
		this.checkOut = checkOut;
	}

	public Persona getResponsable() {
		return responsable;
	}

	public void setResponsable(Persona responsable) {
		this.responsable = responsable;
	}

	@Override
	public String toString() {
		return "idServicio=" + idServicio + ", codIngreso=" + codIngreso + ", fechaIngreso=" + fechaIngreso
				+ ", checkOut=" + checkOut + ", responsable=" + responsable + "]";
	}
	
	abstract public double calcularPrecioFinal();
}
