package modelo;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;

public class CampingNacional {
	private List<Persona> lstPersonas;
	private List<Servicio> lstServicios;
	
	public CampingNacional() {
		this.lstPersonas = new ArrayList<Persona>();
		this.lstServicios = new ArrayList<Servicio>();
	}

	public List<Persona> getLstPersonas() {
		return lstPersonas;
	}

	public void setLstPersonas(List<Persona> lstPersonas) {
		this.lstPersonas = lstPersonas;
	}

	public List<Servicio> getLstServicios() {
		return lstServicios;
	}

	public void setLstServicios(List<Servicio> lstServicios) {
		this.lstServicios = lstServicios;
	}

	@Override
	public String toString() {
		return "CampingNacional [lstPersonas=" + lstPersonas + ", lstServicios=" + lstServicios + "]";
	}
	
	public boolean agregarPersona(String apellido, String nombre, long dni) throws Exception {
		int i = 0;
		int idPersona = 1;
		while (i < lstPersonas.size()) {
			if (lstPersonas.size() > 0) {
				idPersona = lstPersonas.get(lstPersonas.size() - 1).getIdPersona() + 1;
				if (lstPersonas.get(i).getDni() == dni) {
					throw new Exception("Ya existe esa persona.");
				}
			}
			i++;
		} 
		return lstPersonas.add(new Persona(idPersona, apellido, nombre, dni));
	}
	public Persona traerPersona(long dni) {
		int i = 0;
		Persona encontrada = null;
		while (i < lstPersonas.size() && encontrada == null) {
			if (lstPersonas.get(i) instanceof Persona) {
				Persona persona = (Persona) lstPersonas.get(i);
				if (persona.getDni() == dni) {
					encontrada = persona;
				}
			}
			i++;
		}
		
		return encontrada;
	}
	
	public boolean esValidoDigitoControl(String codIngreso) {
		int suma=0, dVerificador=0;
		int numero = Integer.parseInt(codIngreso);
		int ultimoNumero = numero % 10;
		for(int i=0; i<codIngreso.length()-1; i++) {
			String num = String.valueOf(Integer.toString(numero).charAt(i));
			suma += Integer.parseInt(num);
		}
		dVerificador = suma % 10;
		
		return dVerificador == ultimoNumero;
	}

	public boolean agregarRecreo(String codIngreso, LocalDate fechaIngreso, boolean checkOut, Persona responsable, int cantPersonas, double precioPersona) throws Exception {
		int i = 0;
		int idServicio = 1;
		while (i < lstServicios.size()) {
			if (lstServicios.size() > 0) {
				idServicio = lstServicios.get(lstServicios.size() - 1).getIdServicio() + 1;
				if (lstServicios.get(i).getCodIngreso() == codIngreso) {
					throw new Exception("Este código es inválido.");
				}
			}
			i++;
		} 
		
		return lstServicios.add(new Recreo(idServicio, codIngreso, fechaIngreso, checkOut, responsable, cantPersonas, precioPersona));
	}
	public boolean agregarCampamento(String codIngreso, LocalDate fechaIngreso, boolean checkOut, Persona responsable, LocalDate fechaEgreso, int cantCarpas, double precioCarpa) throws Exception {
		int i = 0;
		int idServicio = 1;
		while (i < lstServicios.size()) {
			if (lstServicios.size() > 0) {
				idServicio = lstServicios.get(lstServicios.size() - 1).getIdServicio() + 1;
				if (lstServicios.get(i).getCodIngreso() == codIngreso) {
					throw new Exception("Este código es inválido.");
				}
			}
			i++;
		} 
		
		return lstServicios.add(new Campamento(idServicio, codIngreso, fechaIngreso, checkOut, responsable, fechaEgreso, cantCarpas, precioCarpa));
	}
	
	public List<Servicio> traerServiciosPorPrecioFinal(double mayorIgualA) {
		List<Servicio> servicios = new ArrayList<Servicio>();
		for (int i=0; i<lstServicios.size(); i++) {
			if (lstServicios.get(i).isCheckOut() && lstServicios.get(i).calcularPrecioFinal() > mayorIgualA) {
				servicios.add(lstServicios.get(i));
			}
		}
		return servicios;
	}

	public List<Campamento> traerCampamentosPorDias(int mayorIgualA) {
		List<Campamento> campamentos = new ArrayList<Campamento>();
		for (int i = 0; i < lstServicios.size(); i++) {
			if (lstServicios.get(i) instanceof Campamento) {
				Campamento auxiliar = (Campamento) lstServicios.get(i);
				if (auxiliar.cantidadDias() >= mayorIgualA) {
					campamentos.add(auxiliar);
				}
			}
		}

		return campamentos;
	}
}
