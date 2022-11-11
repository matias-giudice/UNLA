package modelo;

import java.time.LocalDate;

public class PedidoElectronico extends Pedido {
	private String motivo;
	private double porcentajeExtra;
	
	public PedidoElectronico(int idPedido, LocalDate fechaCreacion, double montoBase, String motivo,
			double porcentajeExtra) {
		super(idPedido, fechaCreacion, montoBase);
		this.motivo = motivo;
		this.porcentajeExtra = porcentajeExtra;
	}

	public String getMotivo() {
		return motivo;
	}

	public void setMotivo(String motivo) {
		this.motivo = motivo;
	}

	public double getPorcentajeExtra() {
		return porcentajeExtra;
	}

	public void setPorcentajeExtra(double porcentajeExtra) {
		this.porcentajeExtra = porcentajeExtra;
	}

	@Override
	public String toString() {
		return "\nPedidoElectronico ["+ super.toString() + ", motivo=" + motivo + ", porcentajeExtra=" + porcentajeExtra + "]";
	}
	
	public double calcularPrecioFinal() {
		return super.getMontoBase() * getPorcentajeExtra();
	}
}
