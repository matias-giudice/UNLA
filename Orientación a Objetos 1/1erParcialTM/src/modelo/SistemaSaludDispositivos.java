package modelo;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;


public class SistemaSaludDispositivos {
	private List<Empresa> listaEmpresas;
	private List<Dispositivo> listaDispositivos;
	
	public SistemaSaludDispositivos() {
		this.listaEmpresas = new ArrayList<Empresa>();
		this.listaDispositivos = new ArrayList<Dispositivo>();
	}
	
	public List<Empresa> getListaEmpresas() {
		return listaEmpresas;
	}
	public void setListaEmpresas(List<Empresa> listaEmpresas) {
		this.listaEmpresas = listaEmpresas;
	}
	public List<Dispositivo> getListaDispositivos() {
		return listaDispositivos;
	}
	public void setListaDispositvos(List<Dispositivo> listaDispositivos) {
		this.listaDispositivos = listaDispositivos;
	}
	
	@Override
	public String toString() {
		return "SistemaSaludDispositivos [listaEmpresas=" + listaEmpresas + ", listaDispositvos=" + listaDispositivos
				+ "]";
	}
	
	public boolean agregarEmpresa(String nombre) {
		int ultimoId = 1;
		if (!listaEmpresas.isEmpty()) {
			ultimoId = listaEmpresas.get(listaEmpresas.size() - 1).getId() + 1;
		}
		return listaEmpresas.add(new Empresa(ultimoId, nombre));
	}
	public Empresa traerEmpresa(String nombre) {
		Empresa buscado = null;
		int i = 0;
		while (i < listaEmpresas.size() && buscado == null) {
			Empresa comparado = listaEmpresas.get(i);
			if (comparado.getNombre().equalsIgnoreCase(nombre)) {
				buscado = comparado;
			}
			i++;
		}
		return buscado;
	}
	public boolean agregarDispositivo(String nombre, String codigo, Empresa empresa) throws Exception {
		int ultimoId = 1;

		if (!listaDispositivos.isEmpty()) {
			ultimoId = listaDispositivos.get(listaDispositivos.size() - 1).getId() + 1;
		}

		return listaDispositivos.add(new Dispositivo(ultimoId, nombre, codigo, empresa));
	}
	public Dispositivo traerDispositivo(String codigo) {
		Dispositivo buscado = null;
		int i = 0;
		while (i < listaDispositivos.size() && buscado == null) {
			Dispositivo comparado = listaDispositivos.get(i);
			if (comparado.getCodigo().equalsIgnoreCase(codigo)) {
				buscado = comparado;
			}
			i++;
		}
		return buscado;
	}
	public List<Metrica> traerMetricas(Dispositivo dispositivo, LocalDate desde, LocalDate hasta, int menorAValor){
		List<Metrica> coincidentes = new ArrayList<Metrica>();
		List<Metrica> auxList = dispositivo.traerMetricas(desde, hasta);
		for(int i = 0;i<auxList.size();i++) {
			Metrica comparado = auxList.get(i);
			if(comparado.getValor() < menorAValor)
				coincidentes.add(comparado);
		}
		return coincidentes;
	}
}
