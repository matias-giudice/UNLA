package modelo;

import java.util.ArrayList;
import java.util.List;

public class Sistema {
	private List<Mercancia> lstMercancia;

	public Sistema() {
		this.lstMercancia = new ArrayList<Mercancia>();
	}

	public List<Mercancia> getLstMercancia() {
		return lstMercancia;
	}

	public void setLstMercancia(List<Mercancia> lstMercancia) {
		this.lstMercancia = lstMercancia;
	}

	@Override
	public String toString() {
		return "Sistema [lstMercancia=" + lstMercancia + "]";
	}

	public Mercancia traerMercancia (String codMercancia) {
		Mercancia buscada = null;
		int i = 0;
		while(i < lstMercancia.size() && buscada == null) {
			Mercancia comparada = lstMercancia.get(i);
			if(comparada.getCodMercancia().equalsIgnoreCase(codMercancia)) {
				buscada = comparada;
			}
			i++;
		}
		return buscada;
	}
	//retorna una lista del tipo Mercancia al comparar el parámetro con si está en promoción 
	//si es un servicio o si tiene descuento en la 2°unidad si es un producto.
	public List<Mercancia> traerMercancia(boolean enOferta) {
		List<Mercancia> mercanciasEncontradas = new ArrayList<Mercancia>();
		for (int i = 0; i < lstMercancia.size(); i++) {
			if (lstMercancia.get(i) instanceof Servicio) {
				Servicio mercancia = (Servicio) lstMercancia.get(i);
				if (mercancia.isEnPromocion() == enOferta) {
					mercanciasEncontradas.add(mercancia);
				}
			}
			if (lstMercancia.get(i) instanceof Producto) {
				Producto mercancia = (Producto) lstMercancia.get(i);
				if (mercancia.isEsDescuentoEn2daUnidad() == enOferta) {
					mercanciasEncontradas.add(mercancia);
				}
			}
		}
		return mercanciasEncontradas;
	}
	//implementar excepción si existe el objeto
	public boolean agregarProducto(String codMercancia, String producto, double precioProducto, double porcentajeDescuento, boolean esDescuentoEn2daUnidad) throws Exception {
		int i = 0;
		while (i < lstMercancia.size()) {
			if (lstMercancia.size() > 0) {
				if (lstMercancia.get(i).getCodMercancia().equalsIgnoreCase(codMercancia)) {
					throw new Exception("Ya existe esa mercancia.");
				}
			}
			i++;
		} 
		return lstMercancia.add(new Producto(codMercancia, producto, precioProducto, porcentajeDescuento, esDescuentoEn2daUnidad));
	}
	//implementar excepción si existe el objeto
	public boolean agregarServicio(String codMercancia, String servicio, double presupuesto, double porcentajeDescuento, boolean enPromocion) throws Exception {
		int i = 0;
		while (i < lstMercancia.size()) {
			if (lstMercancia.size() > 0) {
				if (lstMercancia.get(i).getCodMercancia().equalsIgnoreCase(codMercancia)) {
					throw new Exception("Ya existe esa mercancia.");
				}
			}
			i++;
		} 
		return lstMercancia.add(new Servicio(codMercancia, servicio, presupuesto, porcentajeDescuento, enPromocion));
	}
}
