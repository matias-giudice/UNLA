package modelo;

public class Servicio extends Mercancia {
	private String servicio;
	private double presupuesto;
	private double porcentajeDescuento;
	private boolean enPromocion;
	
	public Servicio(String codMercancia, String servicio, double presupuesto, double porcentajeDescuento,
			boolean enPromocion) throws Exception {
		super(codMercancia);
		this.servicio = servicio;
		this.presupuesto = presupuesto;
		this.porcentajeDescuento = porcentajeDescuento;
		this.enPromocion = enPromocion;
	}

	public String getServicio() {
		return servicio;
	}

	public void setServicio(String servicio) {
		this.servicio = servicio;
	}

	public double getPresupuesto() {
		return presupuesto;
	}

	public void setPresupuesto(double presupuesto) {
		this.presupuesto = presupuesto;
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
		return "\nServicio [" + super.toString() + ", servicio=" + servicio + ", presupuesto=" + presupuesto + ", porcentajeDescuento="
				+ porcentajeDescuento + ", enPromocion=" + enPromocion + "]";
	}
	//Si está en promoción, el precio final aplica porcentajeDescuento
	public double calcularPrecioFinal() {
		double total = 0;
		if(isEnPromocion() == true) {
			total = getPresupuesto() * getPorcentajeDescuento();
		} else {
			total = getPresupuesto();
		}
		return total;
	}

}
