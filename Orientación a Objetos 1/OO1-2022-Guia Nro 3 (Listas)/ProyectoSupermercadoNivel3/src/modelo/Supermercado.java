package modelo;

import java.time.LocalDate;
import java.time.LocalTime;
import java.util.List;

public class Supermercado {
	private AdmProducto admProducto;
	private AdmCliente admCliente;
	private AdmCarrito admCarrito;
	
	public Supermercado() {
		this.admProducto = new AdmProducto();
		this.admCliente = new AdmCliente();
		this.admCarrito = new AdmCarrito();
	}

	public AdmProducto getAdmProducto() {
		return admProducto;
	}

	public void setAdmProducto(AdmProducto admProducto) {
		this.admProducto = admProducto;
	}

	public AdmCliente getAdmCliente() {
		return admCliente;
	}

	public void setAdmCliente(AdmCliente admCliente) {
		this.admCliente = admCliente;
	}

	public AdmCarrito getAdmCarrito() {
		return admCarrito;
	}

	public void setAdmCarrito(AdmCarrito admCarrito) {
		this.admCarrito = admCarrito;
	}

	public boolean agregarProducto (String producto, float precio) throws Exception {
		return admProducto.agregarProducto(producto, precio);
	}

	// -> traerProducto(int idProducto) : Producto
	public Producto traerProducto (int idProducto) {
		return admProducto.traerProducto(idProducto);
	}

	// -> modificarProducto(int idProducto, String producto, double precio) : boolean
	public boolean modificarProducto (int idProducto, String producto, double precio) throws Exception {
		return admProducto.modificarProducto(idProducto, producto, precio);
	}

	// -> eliminarProducto(int idProducto) : boolean
	public boolean eliminarProducto (int idProducto) throws Exception {
		Producto producto = admProducto.traerProducto(idProducto);
		  
		if (producto == null)
			throw new Exception("No existe un producto con esa id.");
		
		if (existeProductoCarrito(producto))
			throw new Exception("No se puede borrar un Producto que está en un Carrito.");
		
		return admProducto.eliminarProducto(idProducto);
	}
	
	public boolean agregarCliente (String cliente, long dni, String direccion) throws Exception {
		return admCliente.agregarCliente(cliente, dni, direccion);
	}
	
	public Cliente traerCliente (int idCliente) {
		return admCliente.traerCliente(idCliente);
	}
	
	public Cliente traerCliente (long dniCliente) {
		return admCliente.traerCliente(dniCliente);
	}
	
	public boolean eliminarCliente (int idCliente) throws Exception {
		Cliente cliente = admCliente.traerCliente(idCliente);
		  
		if (cliente == null)
			throw new Exception("No existe un producto con esa id.");
		
		if (existeClienteCarrito(cliente))
			throw new Exception("No se puede borrar un Producto que está en un Carrito.");
		
		return admCliente.eliminarCliente(idCliente);
	}
	
	public boolean agregarCarrito (LocalDate fecha, LocalTime hora, Cliente cliente) throws Exception {
		return admCarrito.agregarCarrito(fecha, hora, cliente);
	}
	
	public Carrito traerCarrito (int idCarrito) {
		return admCarrito.traerCarrito(idCarrito);
	}
	
	public boolean eliminarCarrito (int idCarrito) throws Exception {
		Carrito carrito = traerCarrito(idCarrito);
		  
		if (carrito == null)
			throw new Exception("No existe un Carrito con esa id.");
		
		admCarrito.eliminarCarrito(idCarrito);
		return true;
	}
	
	public float calcularTotal(Cliente cliente) throws Exception {
	    // calcular el total de todos los carritos de un cliente
		float total = 0;
		if(cliente == null) {
			throw new Exception("ERROR: El cliente que desea calcular no existe");
		}
		for (int i=0; i<admCarrito.getListaCarrito().size(); i++) {
			Carrito carrito = admCarrito.getListaCarrito().get(i);
			if (cliente.equals(carrito.getCliente()))
				total += carrito.calcularTotal();
		}
		return total;
	}
	
	public float calcularTotal(int dniCliente) throws Exception {
	    // calcular el total de todos los carritos de un cliente por su dni
		Cliente cliente = traerCliente(dniCliente);
		
		if(cliente == null) {
			throw new Exception("ERROR: El cliente que desea calcular no existe");
		}
		return calcularTotal(traerCliente(dniCliente));
	}
	
	public float calcularTotal(LocalDate fechaInicio, LocalDate fechaFin) {
	    // calcular el total de todos los carritos entre fechaInicio y fechaFin
		float total = 0;
		for (int i = 0; i < admCarrito.getListaCarrito().size(); i++) {
			Carrito carrito = admCarrito.getListaCarrito().get(i);
			LocalDate fechaCarrito = carrito.getFecha();
			if (fechaCarrito.isBefore(fechaFin) && fechaCarrito.isAfter(fechaInicio))
				total += carrito.calcularTotal();
		}
		return total;
	}

	public float calcularTotal(LocalDate fecha) {
	    // calcular el total de todos los carritos en una fecha concreto
		float total = 0;
		for (int i = 0; i < admCarrito.getListaCarrito().size(); i++) {
			Carrito carrito = admCarrito.getListaCarrito().get(i);
			LocalDate fechaCarrito = carrito.getFecha();
			if (fechaCarrito.equals(fecha))
				total += carrito.calcularTotal();
		}
		return total;
	}
	
	public float calcularTotal(int mes, int anio) {
	    // calcular el total de todos los carritos en el mes de un año concreto
		float total = 0;
		LocalDate fecha = LocalDate.of(anio, mes, 1);
		for (int i = 0; i < admCarrito.getListaCarrito().size(); i++) {
			Carrito carrito = admCarrito.getListaCarrito().get(i);
			LocalDate fechaCarrito = carrito.getFecha();
			if (fechaCarrito.getMonthValue() == fecha.getMonthValue() && fechaCarrito.getYear() == fecha.getYear())
				total += carrito.calcularTotal();
		}
		return total;
	}
	
	public float calcularTotal(LocalDate fechaInicio, LocalDate fechaFin, Cliente cliente) throws Exception {
	    // calcular el total de todos los carritos de un cliente entre las fechas fechaInicio y fechaFin
		float total = 0;
		if(cliente == null) {
			throw new Exception("ERROR: El cliente que desea calcular no existe");
		}
		for (int i = 0; i < admCarrito.getListaCarrito().size(); i++) {
			Carrito carrito = admCarrito.getListaCarrito().get(i);
			LocalDate fechaCarrito = carrito.getFecha();
			if (carrito.getCliente().equals(cliente) && fechaCarrito.isBefore(fechaFin) && fechaCarrito.isAfter(fechaInicio))
				total += admCarrito.getListaCarrito().get(i).calcularTotal();
		}
		return total;
	}
	
	public float calcularTotal(LocalDate fecha, Cliente cliente) throws Exception {
	    // calcular el total de todos los carritos de un cliente en una fecha concreta
		float total = 0;
		if(cliente == null) {
			throw new Exception("ERROR: El cliente que desea calcular no existe");
		}
		for (int i = 0; i < admCarrito.getListaCarrito().size(); i++) {
			Carrito carrito = admCarrito.getListaCarrito().get(i);
			LocalDate fechaCarrito = carrito.getFecha();
			if (carrito.getCliente().equals(cliente) && fechaCarrito.equals(fecha))
				total += carrito.calcularTotal();
		}
		return total;
	}
	
	public float calcularTotal(int mes, int anio, Cliente cliente) throws Exception {
	    // calcular el total de todos los carritos de un cliente en el mes de un año especifico
		float total = 0;
		LocalDate fecha = LocalDate.of(anio, mes, 1);
		if(cliente == null) {
			throw new Exception("ERROR: El cliente que desea calcular no existe");
		}
		for (int i = 0; i < admCarrito.getListaCarrito().size(); i++) {
			Carrito carrito = admCarrito.getListaCarrito().get(i);
			LocalDate fechaCarrito = carrito.getFecha();
			if (carrito.getCliente().equals(cliente) && fechaCarrito.getMonthValue() == fecha.getMonthValue() && fechaCarrito.getYear() == fecha.getYear())
				total += carrito.calcularTotal();
		}

		return total;
	}
	
	public float calcularTotal(int mes, int anio, int dniCliente) throws Exception {
	    // calcular el total de todos los carritos de un cliente por su dni
		return calcularTotal(mes, anio, traerCliente(dniCliente));
	}
	private boolean existeProductoCarrito (Producto producto) {
		boolean found = false;
		int i = 0;
		
		List<Carrito> lstCarrito = admCarrito.getListaCarrito();
		
		while (i < lstCarrito.size() && !found) {
		    List<ItemCarrito> lstItemCarrito = lstCarrito.get(i).getListaItem();
			
		    int k = 0;
		    while (k < lstItemCarrito.size() && !found) {
		        if (lstItemCarrito.get(k).getProducto().equals(producto))
		            found = true;
		        k++;
		    }
		    i++;
		}
		return found;
	}
	
	private boolean existeClienteCarrito (Cliente cliente) {
		boolean found = false;
		int i = 0;
		
		List<Carrito> lstCarrito = admCarrito.getListaCarrito();
		
		while (i < lstCarrito.size() && !found) {
			if (lstCarrito.get(i).getCliente().equals(cliente))
				found = true;
		    
		    i++;
		}
		return found;
	}
	
	@Override
	public String toString() {
		return "Supermercado [admProducto=" + admProducto + ", admCliente=" + admCliente + ", admCarrito=" + admCarrito
				+ "]";
	}
}
