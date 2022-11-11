package modelo;

public class Producto extends Mercancia{
	private String producto;
	private double precioProducto;
	private double porcentajeDescuento;
	private boolean esDescuentoEn2daUnidad;
	
	public Producto(String codMercancia, String producto, double precioProducto, double porcentajeDescuento,
			boolean esDescuentoEn2daUnidad) throws Exception {
		super(codMercancia);
		this.producto = producto;
		this.precioProducto = precioProducto;
		this.porcentajeDescuento = porcentajeDescuento;
		this.esDescuentoEn2daUnidad = esDescuentoEn2daUnidad;
	}

	public String getProducto() {
		return producto;
	}

	public void setProducto(String producto) {
		this.producto = producto;
	}

	public double getPrecioProducto() {
		return precioProducto;
	}

	public void setPrecioProducto(double precioProducto) {
		this.precioProducto = precioProducto;
	}

	public double getPorcentajeDescuento() {
		return porcentajeDescuento;
	}

	public void setPorcentajeDescuento(double porcentajeDescuento) {
		this.porcentajeDescuento = porcentajeDescuento;
	}

	public boolean isEsDescuentoEn2daUnidad() {
		return esDescuentoEn2daUnidad;
	}

	public void setEsDescuentoEn2daUnidad(boolean esDescuentoEn2daUnidad) {
		this.esDescuentoEn2daUnidad = esDescuentoEn2daUnidad;
	}

	@Override
	public String toString() {
		return "\nProducto [" + super.toString() + ", producto=" + producto + ", precioProducto=" + precioProducto + ", porcentajeDescuento="
				+ porcentajeDescuento + ", esDescuentoEn2daUnidad=" + esDescuentoEn2daUnidad + "]";
	}
	//Si tiene descuento en la 2° unidad, para calcular el precio final aplica la
	//mitad del porcentajeDescuento ya que tiene que comprar 2 artículos.

	public double calcularPrecioFinal() {
		double total = 0;
		if(isEsDescuentoEn2daUnidad() == true) {
			total = (getPorcentajeDescuento() / 2) * getPrecioProducto();
		} else {
			total = getPrecioProducto();
		}
		return total;
	} 
}
