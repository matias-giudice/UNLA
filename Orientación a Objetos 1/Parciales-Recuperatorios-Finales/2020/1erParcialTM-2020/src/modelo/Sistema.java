package modelo;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;

public class Sistema {
	private List<Servicio> lstServicio;

	public Sistema() {
		this.lstServicio = new ArrayList<Servicio>();
	}

	public List<Servicio> getLstServicio() {
		return lstServicio;
	}

	public void setLstServicio(List<Servicio> lstServicio) {
		this.lstServicio = lstServicio;
	}

	@Override
	public String toString() {
		return "Sistema [lstServicio=" + lstServicio + "]";
	}
	
	public Servicio traerServicio (String codServicio) {
		Servicio encontrada = null;
		int i = 0;
		while (i < lstServicio.size() && encontrada == null) {
			Servicio servicio = lstServicio.get(i);
			if (servicio.getCodServicio() == codServicio) {
				encontrada = servicio;
			}
			i++;
		}
		return encontrada;
	}
	//retorna una lista de los servicios según parametro
	public List<Servicio> traerServicio (boolean enPromocion) {
		List<Servicio> serviciosEncontrados = new ArrayList<Servicio>();
		for (int i = 0; i < lstServicio.size(); i++) {
			if (lstServicio.get(i) instanceof Hospedaje) {
				Hospedaje servicio = (Hospedaje) lstServicio.get(i);
				if (servicio.isEnPromocion() == enPromocion) {
					serviciosEncontrados.add(servicio);
				}
			}
			if (lstServicio.get(i) instanceof Gastronomia) {
				Gastronomia servicio = (Gastronomia) lstServicio.get(i);
				if (servicio.isEnPromocion() == enPromocion) {
					serviciosEncontrados.add(servicio);
				}
			}
		}
		return serviciosEncontrados;
	}
	//retorna una lista de los servicios según la fecha parámetros
	public List<Servicio> traerServicio (boolean enPromocion, LocalDate dia) {
		List<Servicio> serviciosEncontrados = new ArrayList<Servicio>();
		for (int i = 0; i < lstServicio.size(); i++) {
			if (lstServicio.get(i) instanceof Gastronomia) {
				Gastronomia servicio = (Gastronomia) lstServicio.get(i);
				if (servicio.isEnPromocion() == enPromocion && servicio.getDiaSemDesc() == dia.getDayOfWeek().getValue()) {
					serviciosEncontrados.add(servicio);
				}
			}
		}
		return serviciosEncontrados;
	} 
	//implementar excepción si existe el objeto
	public boolean agregarGastronomia(String codServicio, double porcentajeDescuento, boolean enPromocion, String
	gastronomia, double precio, int diaSemDesc) throws Exception {
		int i = 0;
		int idServicio = 1;
		while (i < lstServicio.size()) {
			if (lstServicio.size() > 0) {
				idServicio = lstServicio.get(lstServicio.size() - 1).getIdServicio() + 1;
				if (lstServicio.get(i).getCodServicio() == codServicio) {
					throw new Exception("Ya existe ese servicio.");
				}
			}
			i++;
		} 
		
		return lstServicio.add(new Gastronomia(idServicio, codServicio, porcentajeDescuento, enPromocion, gastronomia, precio, diaSemDesc));
	} 
	//implementar excepción si existe el objeto
	public boolean agregarHospedaje(String codServicio, double porcentajeDescuento, boolean enPromocion, String
	hospedaje,double precioPorNoche) throws Exception {
		int i = 0;
		int idServicio = 1;
		while (i < lstServicio.size()) {
			if (lstServicio.size() > 0) {
				idServicio = lstServicio.get(lstServicio.size() - 1).getIdServicio() + 1;
				if (lstServicio.get(i).getCodServicio() == codServicio) {
					throw new Exception("Ya existe ese servicio.");
				}
			}
			i++;
		} 
		
		return lstServicio.add(new Hospedaje(idServicio, codServicio, porcentajeDescuento, enPromocion, hospedaje, precioPorNoche));
	} 

}
