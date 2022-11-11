package modelo;

import java.util.ArrayList;
import java.util.List;

public class PuestoFronterizo {
	private List<Persona> listaPersonas;

	public PuestoFronterizo() {
		this.listaPersonas = new ArrayList<Persona>();
	}

	public List<Persona> getListaPersonas() {
		return listaPersonas;
	}

	public void setListaPersonas(List<Persona> listaPersonas) {
		this.listaPersonas = listaPersonas;
	}

	@Override
	public String toString() {
		return "\nPuestoFronterizo [listaPersonas=" + listaPersonas + "]";
	}
	public boolean agregarPersona(int dni, String nombreCompleto) throws Exception {
		int idPersona = 1;
		if (!listaPersonas.isEmpty()) {
			idPersona = listaPersonas.get(listaPersonas.size() - 1).getIdPersona() + 1;
		}
		return listaPersonas.add(new Persona(idPersona, dni, nombreCompleto));
		
	}
	public Persona traerPersona(int dni) {
		Persona buscado = null;
		int i = 0;
		while (i < listaPersonas.size() && buscado == null) {
			Persona comparado = listaPersonas.get(i);
			if (comparado.getDni() == dni) {
				buscado = comparado;
			}
			i++;
		}
		return buscado;
	}
	public List<Persona> traerPersonas(boolean pasoFrontera) {
		List<Persona> personasEncontradas = new ArrayList<Persona>();
		for (int i = 0; i < listaPersonas.size(); i++) {
			Persona persona = listaPersonas.get(i);
			if (pasoFrontera == true) {
				personasEncontradas.add(persona);
			}
		}
		return personasEncontradas;
	}
	public List<Persona> traerPersonas(String nombreCompleto) {
		List<Persona> personasEncontradas = new ArrayList<Persona>();
		for (int i = 0; i < listaPersonas.size(); i++) {
			Persona persona = listaPersonas.get(i);
			if (persona.getNombreCompleto().equalsIgnoreCase(nombreCompleto)) {
				personasEncontradas.add(persona);
			}
		}
		return personasEncontradas;
	}
		
}
