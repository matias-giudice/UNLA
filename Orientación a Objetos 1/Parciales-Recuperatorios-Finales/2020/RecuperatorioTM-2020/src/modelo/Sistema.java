package modelo;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;

public class Sistema {
	private List<Pedido> pedidos;

	public Sistema() {
		this.pedidos = new ArrayList<Pedido>();
	}

	public List<Pedido> getPedidos() {
		return pedidos;
	}

	public void setPedidos(List<Pedido> pedidos) {
		this.pedidos = pedidos;
	}

	@Override
	public String toString() {
		return "Sistema [pedidos=" + pedidos + "]";
	}
	
	//lanza una excepción en caso de que la cantidad de resmas sea 0
	public boolean agregarPedidoPapelMensual(LocalDate fechaCreacion, double montoBase, LocalDate fechaEntrega, int cantidadResmas) throws Exception{
		int i = 0;
		int idPedido = 1;
		while (i < pedidos.size()) {
			if (pedidos.size() > 0) {
				idPedido = pedidos.get(pedidos.size() - 1).getIdPedido() + 1;
				if (cantidadResmas == 0) {
					throw new Exception("La cantidad de resmas es 0.");
				}
			}
			i++;
		} 
		
		return pedidos.add(new PedidoPapelMensual(idPedido, fechaCreacion, montoBase, fechaEntrega, cantidadResmas));
	}
	//lanza una excepción en caso de que el motivo sea un String vacío
	public boolean agregarPedidoElectronico(LocalDate fechaCreacion, double montoBase, String motivo, double porcentajeExtra) throws Exception{
		int i = 0;
		int idPedido = 1;
		while (i < pedidos.size()) {
			if (pedidos.size() > 0) {
				idPedido = pedidos.get(pedidos.size() - 1).getIdPedido() + 1;
				if (motivo == null) {
					throw new Exception("El motivo esta vacio, sin llenar.");
				}
			}
			i++;
		} 
		
		return pedidos.add(new PedidoElectronico(idPedido, fechaCreacion, montoBase, motivo, porcentajeExtra));
	} 
	public Pedido traerPedido(int idPedido) {
		Pedido encontrado = null;
		int i = 0;
		while (i < pedidos.size() && encontrado == null) {
			Pedido pedido = pedidos.get(i);
			if (pedido.getIdPedido() == idPedido) {
				encontrado = pedido;
			}
			i++;
		}
		return encontrado;
	}
	//retorna una lista del tipo Pedido según el motivo ingresado
	/*public Pedido traerPedido(String motivo) {
		int i = 0;
		PedidoElectronico encontrado = null;
		while (i < pedidos.size() && encontrado == null) {
			if (pedidos.get(i) instanceof PedidoElectronico) {
				PedidoElectronico pedido = (PedidoElectronico) pedidos.get(i);
				if (pedido.getMotivo() == motivo) {
					encontrado = pedido;
				}
			}
			i++;
		}
		return encontrado;
	}*/
	public List<Pedido> traerPedidos (String motivo) {
		List<Pedido> pedidosEncontrados = new ArrayList<Pedido>();
		for (int i = 0; i < pedidos.size(); i++) {
			if (pedidos.get(i) instanceof PedidoElectronico) {
				PedidoElectronico pedido = (PedidoElectronico) pedidos.get(i);
				if (pedido.getMotivo() == motivo) {
					pedidosEncontrados.add(pedido);
				}
			}
		}
		return pedidosEncontrados;
	}
	//retorna una double con el total general a pagar de todos los pedidos
	public double calcularTotalGeneral() {
		double sumaPedidosElectronicos = 0;
		double sumaPedidosPapelMensual = 0;
		double totalGeneral = 0;
		for(int i=0; i<pedidos.size(); i++) {
			if (pedidos.get(i) instanceof PedidoElectronico) {
				PedidoElectronico pedido = (PedidoElectronico) pedidos.get(i);
				sumaPedidosElectronicos += pedido.calcularPrecioFinal();
			}
			if (pedidos.get(i) instanceof PedidoPapelMensual) {
				PedidoPapelMensual pedido = (PedidoPapelMensual) pedidos.get(i);
				sumaPedidosElectronicos += pedido.calcularPrecioFinal();
			}
		}
		totalGeneral = sumaPedidosElectronicos + sumaPedidosPapelMensual;
		return totalGeneral;
	} 
}
