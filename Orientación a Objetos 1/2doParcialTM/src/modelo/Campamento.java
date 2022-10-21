package modelo;

import java.time.LocalDate;
import java.time.Period;

public class Campamento extends Servicio{
	private LocalDate fechaEgreso;
	private int cantCarpas;
	private double precioCarpa;
	
	public Campamento(int idServicio, String codIngreso, LocalDate fechaIngreso, boolean checkOut, Persona responsable,
			LocalDate fechaEgreso, int cantCarpas, double precioCarpa) {
		super(idServicio, codIngreso, fechaIngreso, checkOut, responsable);
		this.fechaEgreso = fechaEgreso;
		this.cantCarpas = cantCarpas;
		this.precioCarpa = precioCarpa;
	}

	public LocalDate getFechaEgreso() {
		return fechaEgreso;
	}

	public void setFechaEgreso(LocalDate fechaEgreso) {
		this.fechaEgreso = fechaEgreso;
	}

	public int getCantCarpas() {
		return cantCarpas;
	}

	public void setCantCarpas(int cantCarpas) {
		this.cantCarpas = cantCarpas;
	}

	public double getPrecioCarpa() {
		return precioCarpa;
	}

	public void setPrecioCarpa(double precioCarpa) {
		this.precioCarpa = precioCarpa;
	}

	@Override
	public String toString() {
		return "Campamento ["+ super.toString() + ", fechaEgreso=" + fechaEgreso + ", cantCarpas=" + cantCarpas + ", precioCarpa=" + precioCarpa
				+ "]";
	}
	
	public int cantidadDias() {
		int cantDias = 0;
		if (fechaEgreso == null || !isCheckOut()) {
			cantDias = Period.between(fechaIngreso, LocalDate.of(2022, 10, 18)).getDays();
			cantDias += LocalDate.of(2022, 10, 18).getMonth().maxLength();
		} else {
			cantDias = Period.between(fechaIngreso, fechaEgreso).getDays();
		}
		return cantDias;
	}
	
	public double calcularPrecioFinal() {
		return cantCarpas*precioCarpa*cantidadDias();
	}
}
