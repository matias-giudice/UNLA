package modelo;

import java.time.LocalDate;

public class PedidoPapelMensual extends Pedido{
	private LocalDate fechaEntrega;
	private int cantidadResmas;
	
	public PedidoPapelMensual(int idPedido, LocalDate fechaCreacion, double montoBase, LocalDate fechaEntrega,
			int cantidadResmas) {
		super(idPedido, fechaCreacion, montoBase);
		this.fechaEntrega = fechaEntrega;
		this.cantidadResmas = cantidadResmas;
	}

	public LocalDate getFechaEntrega() {
		return fechaEntrega;
	}

	public void setFechaEntrega(LocalDate fechaEntrega) {
		this.fechaEntrega = fechaEntrega;
	}

	public int getCantidadResmas() {
		return cantidadResmas;
	}

	public void setCantidadResmas(int cantidadResmas) {
		this.cantidadResmas = cantidadResmas;
	}

	@Override
	public String toString() {
		return "\nPedidoPapelMensual ["+ super.toString() + ", fechaEntrega=" + fechaEntrega + ", cantidadResmas=" + cantidadResmas + "]";
	}
	
	public double calcularPrecioFinal() {
		return super.getMontoBase() * getCantidadResmas();
	}
}
