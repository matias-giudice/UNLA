package modelo;

import java.time.LocalDate;

public class PrePago extends Plan{
	private LocalDate fechaUltimaRecarga;
	private int diasDuracion;
	
	public PrePago(int id, Cliente cliente, String nombre, int nroLinea, LocalDate fechaUltimaRecarga,
			int diasDuracion) {
		super(id, cliente, nombre, nroLinea);
		this.fechaUltimaRecarga = fechaUltimaRecarga;
		this.diasDuracion = diasDuracion;
	}

	public LocalDate getFechaUltimaRecarga() {
		return fechaUltimaRecarga;
	}

	public void setFechaUltimaRecarga(LocalDate fechaUltimaRecarga) {
		this.fechaUltimaRecarga = fechaUltimaRecarga;
	}

	public int getDiasDuracion() {
		return diasDuracion;
	}

	public void setDiasDuracion(int diasDuracion) {
		this.diasDuracion = diasDuracion;
	}

	@Override
	public String toString() {
		return "PrePago [" + super.toString() + ", fechaUltimaRecarga=" + fechaUltimaRecarga + ", diasDuracion=" + diasDuracion + "]";
	}
	
	public LocalDate calcularFechaProximoVencimiento () {
		return getFechaUltimaRecarga().plusDays(getDiasDuracion());
	}
}
