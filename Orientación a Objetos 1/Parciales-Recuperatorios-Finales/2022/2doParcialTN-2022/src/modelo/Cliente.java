package modelo;

import java.time.LocalDate;
import java.time.Period;

public class Cliente {
	private int id;
	private String codCliente;
	private String nombre;
	private String apellido;
	private int dni;
	private LocalDate fechaNacimiento;
	
	public Cliente(int id, String codCliente, String nombre, String apellido, int dni, LocalDate fechaNacimiento) throws Exception {
		this.id = id;
		setCodCliente(codCliente);
		this.nombre = nombre;
		this.apellido = apellido;
		this.dni = dni;
		this.fechaNacimiento = fechaNacimiento;
	}

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getCodCliente() {
		return codCliente;
	}

	public void setCodCliente(String codCliente) throws Exception {
		if (esValidoCodCliente(codCliente)) {
			this.codCliente = codCliente;
		} else {
			throw new Exception("Codigo inválido.");
		}
	}
	
	public String getNombre() {
		return nombre;
	}

	public void setNombre(String nombre) {
		this.nombre = nombre;
	}

	public String getApellido() {
		return apellido;
	}

	public void setApellido(String apellido) {
		this.apellido = apellido;
	}

	public int getDni() {
		return dni;
	}

	public void setDni(int dni) {
		this.dni = dni;
	}

	public LocalDate getFechaNacimiento() {
		return fechaNacimiento;
	}

	public void setFechaNacimiento(LocalDate fechaNacimiento) {
		this.fechaNacimiento = fechaNacimiento;
	}

	@Override
	public String toString() {
		return "\nCliente [id=" + id + ", codCliente=" + codCliente + ", nombre=" + nombre + ", apellido=" + apellido
				+ ", dni=" + dni + ", fechaNacimiento=" + fechaNacimiento + "]";
	}
	
	public int calcularEdad () {
		return Period.between(fechaNacimiento, LocalDate.of(2022, 10, 20)).getYears();
	}
	
	public boolean esValidoCodCliente (String codCliente) {
		boolean esLargoCliente = codCliente.length() == 10;
		boolean primeroEsS = codCliente.charAt(0) == 'S';
		boolean primeroEsN = codCliente.charAt(0) == 'N';
		boolean elRestoSonNumeros = true;
		boolean ultimoEsPar = Integer.parseInt(String.valueOf(codCliente.charAt(9))) % 2 == 0;

		char[] elResto = codCliente.substring(1).toCharArray();
		int i = 0;
		while (i < elResto.length && elRestoSonNumeros) {
			if (Character.isLetter(elResto[i]))
				elRestoSonNumeros = false;
			i++;
		}
		
		return esLargoCliente && ((primeroEsS && ultimoEsPar) || (primeroEsN && !ultimoEsPar)) && elRestoSonNumeros;
	}
}
