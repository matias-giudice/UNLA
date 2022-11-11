package modelo;

import java.time.LocalDate;
import java.time.LocalTime;
import java.util.ArrayList;
import java.util.List;


public class Dispositivo {
	private int id;
	private String nombre;
	private String codigo;
	private List<Metrica> listaMetricas;
	private Empresa empresa;
	
	public Dispositivo(int id, String nombre, String codigo, Empresa empresa) throws Exception {
		this.id = id;
		this.nombre = nombre;
		setCodigo(codigo);
		this.listaMetricas = new ArrayList<Metrica>();
		this.empresa = empresa;
	}

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getNombre() {
		return nombre;
	}

	public void setNombre(String nombre) {
		this.nombre = nombre;
	}

	public String getCodigo() {
		return codigo;
	}

	public void setCodigo(String codigo) throws Exception {
		validarCodigo(codigo);
		this.codigo = codigo;
	}

	public List<Metrica> getListaMetricas() {
		return listaMetricas;
	}

	public void setListaMetricas(List<Metrica> listaMetricas) {
		this.listaMetricas = listaMetricas;
	}

	public Empresa getEmpresa() {
		return empresa;
	}

	public void setEmpresa(Empresa empresa) {
		this.empresa = empresa;
	}

	@Override
	public String toString() {
		return "\nDispositivo [id=" + id + ", nombre=" + nombre + ", codigo=" + codigo + ", listaMetricas="
				+ listaMetricas + ", empresa=" + empresa + "]";
	}
	public static void mostrarMetricas(List<Metrica> listaMetricas) {
		for (int i = 0; i < listaMetricas.size(); i++) {
			System.out.println(listaMetricas.get(i));
		}
	}
	public boolean validarCodigo(String codigo) throws Exception {
		if(codigo.length() != 5) {
			throw new Exception("Error: codigo con cantidad incorrecta de caracteres");
		}
		char[] codAux = codigo.toCharArray();

		if (codAux[0] != 'A' && codAux[0] != 'B') {
			throw new Exception("Error: el codigo debe iniciar con A o B");
		}
		boolean cuatroNumeros = true;
		int i = 1;
		Integer suma = 0;

		while (i < codigo.length() && cuatroNumeros == true) {
			if (!Character.isDigit(codAux[i])) {
				cuatroNumeros = false;
			} else {
				suma += Integer.valueOf(Character.toString(codAux[i]));
			}
			i++;
		}

		if (!cuatroNumeros) {
			throw new Exception("Error: codigo no cumple con el formato A1111");
		}
		if (codAux[0] == 'A') {
			if (suma.intValue() % 2 != 0) {
				throw new Exception("Error: codigo invalido");
			}
		} else {
			if (suma.intValue() % 2 == 0) {
				throw new Exception("Error: codigo invalido");
			}
		}
		return true;
	}
	public boolean agregarMetrica(int valor, LocalDate fecha, LocalTime hora) {
		return listaMetricas.add(new Metrica(valor, fecha, hora));
	}
	public Metrica traerMetrica(LocalDate fecha, LocalTime hora) {
		Metrica buscado = null;
		int i = 0;
		while (i < listaMetricas.size() && buscado == null) {
			Metrica comparado = listaMetricas.get(i);
			if (comparado.getFecha().isEqual(fecha) && sonHorasIguales(hora, comparado.getHora()))
				buscado = comparado;

			i++;
		}

		return buscado;
	}
	public boolean sonHorasIguales(LocalTime horaInicio, LocalTime horaFin) {
		boolean iguales = false;
		if (horaInicio.getHour() == horaFin.getHour() && horaInicio.getMinute() == horaFin.getMinute()) {
			iguales = true;
		}
		return iguales;
	}
	public List<Metrica> traerMetricas(LocalDate desde,LocalDate hasta){
		List<Metrica> coincidentes = new ArrayList<Metrica>();
		for(int i = 0;i<listaMetricas.size();i++) {
			Metrica comp = listaMetricas.get(i);
			if(fechaExisteEntre(comp.getFecha(), desde, hasta))
				coincidentes.add(comp);
		}
		return coincidentes;
	}
	
	public static boolean fechaExisteEntre(LocalDate fechaAComparar, LocalDate fechaInicio, LocalDate fechaFin) {
		boolean existe = false;
		if ((fechaAComparar.isAfter(fechaInicio) || fechaAComparar.isEqual(fechaInicio))
				&& (fechaAComparar.isBefore(fechaFin) || fechaAComparar.isEqual(fechaFin))) {
			existe = true;
		}
		return existe;
	}
}
