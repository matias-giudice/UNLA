package modelo;

import java.time.LocalDate;

public class AbonoMensual extends Plan{
	private int diaFacturacion;
	private boolean flota;
	
	public AbonoMensual(int id, Cliente cliente, String nombre, int nroLinea, int diaFacturacion, boolean flota) {
		super(id, cliente, nombre, nroLinea);
		this.diaFacturacion = diaFacturacion;
		this.flota = flota;
	}

	public int getDiaFacturacion() {
		return diaFacturacion;
	}

	public void setDiaFacturacion(int diaFacturacion) {
		this.diaFacturacion = diaFacturacion;
	}

	public boolean isFlota() {
		return flota;
	}

	public void setFlota(boolean flota) {
		this.flota = flota;
	}

	@Override
	public String toString() {
		return "AbonoMensual [" + super.toString() + ", diaFacturacion=" + diaFacturacion + ", flota=" + flota + "]";
	}
	
	public LocalDate calcularFechaProximoVencimiento () {
		LocalDate fechaFacturacion = LocalDate.of(2022, 10, diaFacturacion);
		LocalDate fechaHoy = LocalDate.of(2022, 10, 20);
		LocalDate returnFecha;
		
		if(fechaFacturacion.isAfter(fechaHoy)) {
			returnFecha = fechaFacturacion;
		} else {
			returnFecha = fechaFacturacion.plusMonths(1);
		}
		
		return returnFecha;
	}
}
