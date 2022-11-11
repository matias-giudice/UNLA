package modelo;

import java.time.LocalDate;

public class Hospedaje extends Servicio{
	private String hospedaje;
	private double precioPorNoche;
	
	public Hospedaje(int idServicio, String codServicio, double porcentajeDescuento, boolean enPromocion, String hospedaje,
			double precioPorNoche) throws Exception {
		super(idServicio, codServicio, porcentajeDescuento, enPromocion);
		this.hospedaje = hospedaje;
		this.precioPorNoche = precioPorNoche;
	}

	public String getHospedaje() {
		return hospedaje;
	}

	public void setHospedaje(String hospedaje) {
		this.hospedaje = hospedaje;
	}

	public double getPrecioPorNoche() {
		return precioPorNoche;
	}

	public void setPrecioPorNoche(double precioPorNoche) {
		this.precioPorNoche = precioPorNoche;
	}

	@Override
	public String toString() {
		return "\nHospedaje [" + super.toString() + ", hospedaje=" + hospedaje + ", precioPorNoche=" + precioPorNoche + "]";
	}
	
	//Si está en promoción aplica descuento de lunes a viernes
	public double calcularPrecioFinal(LocalDate dia) {
		double descuento = 0;
		if(super.isEnPromocion() == true) {
			if(dia.getDayOfWeek().getValue() >= 1 && dia.getDayOfWeek().getValue() <= 5) {
				descuento = (super.getPorcentajeDescuento() / 100) * precioPorNoche;
			} else {
				descuento = precioPorNoche;
			}
		}
		return descuento;
	}
}
