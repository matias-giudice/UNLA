package modelo;

import java.time.LocalDate;

public abstract class Servicio {
	protected int idServicio;
	protected String codServicio;
	protected double porcentajeDescuento;
	protected boolean enPromocion;
	
	public Servicio(int idServicio, String codServicio, double porcentajeDescuento, boolean enPromocion) throws Exception {
		this.idServicio = idServicio;
		setCodServicio(codServicio);
		this.porcentajeDescuento = porcentajeDescuento;
		this.enPromocion = enPromocion;
	}
	
	public int getIdServicio() {
		return idServicio;
	}


	public void setIdServicio(int idServicio) {
		this.idServicio = idServicio;
	}


	public String getCodServicio() {
		return codServicio;
	}

	public void setCodServicio(String codServicio) throws Exception{
		if(codServicio.length() == 6) {
			this.codServicio = codServicio;
		} else {
			throw new Exception("La longitud es invalida.");
		}
	}

	public double getPorcentajeDescuento() {
		return porcentajeDescuento;
	}

	public void setPorcentajeDescuento(double porcentajeDescuento) {
		this.porcentajeDescuento = porcentajeDescuento;
	}

	public boolean isEnPromocion() {
		return enPromocion;
	}

	public void setEnPromocion(boolean enPromocion) {
		this.enPromocion = enPromocion;
	}

	@Override
	public String toString() {
		return "Servicio [idServicio=" + idServicio + ", codServicio=" + codServicio + ", porcentajeDescuento="
				+ porcentajeDescuento + ", enPromocion=" + enPromocion + "]";
	}

	public abstract double calcularPrecioFinal(LocalDate dia);
}
