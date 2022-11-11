package modelo;

import java.time.LocalDate;

public class Cliente extends Persona {
	private String cuil;
	private float limiteCredito;
	
	public Cliente(int idPersona, String nombre, String apellido, long dni, LocalDate fechaNacimiento, String cuil, float limiteCredito) {
		super(idPersona, nombre, apellido, dni, fechaNacimiento);
		this.cuil = cuil;
		this.limiteCredito = limiteCredito;
	}

	public String getCuit() {
		return cuil;
	}

	public void setCuit(String cuit) {
		this.cuil = cuit;
	}

	public float getLimiteCredito() {
		return limiteCredito;
	}

	public void setLimiteCredito(float limiteCredito) {
		this.limiteCredito = limiteCredito;
	}

	@Override
	public String toString() {
		return "\nCliente ["+ super.toString() + ", cuil=" + cuil + ", limiteCredito=" + limiteCredito + "]";
	}
	
	public boolean estadoCredito() {
		return this.getLimiteCredito() >= 300000;
	}
	
}
