package modelo;

public class Persona {
	private int idPersona;
	private int dni;
	private String nombreCompleto;
	
	public Persona(int idPersona, int dni, String nombreCompleto) {
		this.idPersona = idPersona;
		this.dni = dni;
		this.nombreCompleto = nombreCompleto;
	}

	public int getIdPersona() {
		return idPersona;
	}

	public void setIdPersona(int idPersona) {
		this.idPersona = idPersona;
	}

	public int getDni() {
		return dni;
	}

	public void setDni(int dni) {
		this.dni = dni;
	}

	public String getNombreCompleto() {
		return nombreCompleto;
	}

	public void setNombreCompleto(String nombreCompleto) {
		this.nombreCompleto = nombreCompleto;
	}

	@Override
	public String toString() {
		return "\nPersona [idPersona=" + idPersona + ", dni=" + dni + ", nombreCompleto=" + nombreCompleto + "]";
	}
}
