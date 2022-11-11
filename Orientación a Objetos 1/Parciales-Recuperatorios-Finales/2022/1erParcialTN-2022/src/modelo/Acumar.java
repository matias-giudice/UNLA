package modelo;

import java.time.LocalDate;
import java.time.LocalTime;
import java.util.ArrayList;
import java.util.List;

public class Acumar {
	private List<Estacion> lstEstaciones;
	private List<Medicion> lstMediciones;
	
	public Acumar() {
		this.lstEstaciones = new ArrayList<Estacion>();
		this.lstMediciones = new ArrayList<Medicion>();
	}
	
	public List<Estacion> getLstEstaciones() {
		return lstEstaciones;
	}
	public void setLstEstaciones(List<Estacion> lstEstaciones) {
		this.lstEstaciones = lstEstaciones;
	}
	public List<Medicion> getLstMediciones() {
		return lstMediciones;
	}
	public void setLstMediciones(List<Medicion> lstMediciones) {
		this.lstMediciones = lstMediciones;
	}
	
	@Override
	public String toString() {
		return "Acumar [lstEstaciones=" + lstEstaciones + ", lstMediciones=" + lstMediciones + "]";
	}
	
	public Estacion traerEstacion(String nombre) {
		Estacion buscado = null;
		int i = 0;
		while(i < lstEstaciones.size() && buscado == null) {
			Estacion comparado = lstEstaciones.get(i);
			if(comparado.getNombre().equalsIgnoreCase(nombre)) {
				buscado = comparado;
			}
			i++;
		}
		return buscado;
	}

	//lanza excepcion si ya existe una estacion con el mismo nombre.
	//el id se calcula de forma autoincremental, teniendo en cuenta que la lista puede tener altas y bajas de objetos.
	public boolean agregarEstacion(String nombre, String direccion, double latitud, double longitud, float altura) throws Exception {
		int i = 0;
		int idEstacion = 1;
		while(i < lstEstaciones.size()) {
			if(lstEstaciones.size() > 0) {
				idEstacion = lstEstaciones.get(lstEstaciones.size() - 1).getId() + 1;
				if (lstEstaciones.get(i).getNombre().equalsIgnoreCase(nombre)) {
					throw new Exception("Ya existe una estación con el mismo nombre.");
				}
			}
			i++;
		}
		return lstEstaciones.add(new Estacion(idEstacion, nombre, direccion, latitud, longitud, altura));
	}
	
	public boolean agregarMedicion(Estacion estacion, LocalDate fecha, LocalTime hora, float temperatura, float humedad, float vientoVel, String vientoDir, float precipitacion) {
		return lstMediciones.add(new Medicion(estacion, fecha, hora, temperatura, humedad, vientoVel, vientoDir, precipitacion));
	}
	
	public Medicion traerMedicion(Estacion estacion, LocalDate fecha, LocalTime hora) {
		Medicion buscada = null;
		int i = 0;
		while(i < lstMediciones.size() && buscada == null) {
			Medicion comparada = lstMediciones.get(i);
			if(comparada.getEstacion().equals(estacion) && comparada.getFecha().equals(fecha) && comparada.getHora().equals(hora)) {
				buscada = comparada;
			}
			i++;
		}
		return buscada;
	}
	
	//el metodo retorna todas las mediciones de la estacion pasada como parametro.
	public List<Medicion> traerMediciones(Estacion estacion) {
		List<Medicion> coincidentes = new ArrayList<Medicion>();
		for(int i=0; i<lstMediciones.size(); i++) {
			Medicion comparada = lstMediciones.get(i);
			if(comparada.getEstacion().equals(estacion)) {
				coincidentes.add(comparada);
			}
		}
		return coincidentes;
	}
	
	//El metodo retorna el promedio de las temperaturas de todas las mediciones de la estacion, 
	//la fecha y entre las horas pasasdas como parametros.
	public float promedioTemperatura (Estacion estacion, LocalDate fecha, LocalTime horaDesde, LocalTime horaHasta) {
		float suma = 0;
		int cantidad = 0;
		for(int i=0; i <lstMediciones.size(); i++) {
			Medicion comparada = lstMediciones.get(i);
			if (comparada.getEstacion().equals(estacion) && comparada.getFecha().equals(fecha) && horaEstaEntre(comparada.getHora(), horaDesde, horaHasta)) {
				suma += comparada.getTemperatura();
				cantidad++;
			}
		}
		return suma / cantidad;
	}
	private boolean horaEstaEntre (LocalTime hora, LocalTime desde, LocalTime hasta) {
		boolean estaEntre = false;
		if (hora.equals(desde) || hora.equals(hasta) || (hora.isAfter(desde) && hora.isBefore(hasta))) {
			estaEntre = true;
		}
		return estaEntre;
	}	
	//el metodo retorna la temperatura de la medicion corregida por la altura de la estacion, 
	//teniendo en cuenta que la temperatura disminuye 6.5°C cada 1000m de altura. (temperatura + (altura * 6.5) / 1000)
	public double temperaturaCorregidaPorAltura () {
		return (lstMediciones.getTemperatura() + (estacion.getAltura() * 6.5) / 1000);
	}
	
	//el metodo retorna la distancia en km entre dos estaciones, usando su latitud y longitud
	public double distanciaConEstacion (Estacion estacion) {
		double x = Math.pow(estacion.getLongitud() - longitud, 2);
		double y = Math.pow(estacion.getLatitud() - latitud, 2);
		return Math.sqrt(x + y);
	}
			
}
