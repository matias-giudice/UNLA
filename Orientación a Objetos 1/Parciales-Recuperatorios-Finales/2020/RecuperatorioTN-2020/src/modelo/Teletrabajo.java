package modelo;

import java.time.LocalDate;

public class Teletrabajo extends Asistencia{
	private String motivo;
	private int tareasRealizadas;
	
	public Teletrabajo(int idAsistencia, LocalDate fecha, String legajo, String motivo, int tareasRealizadas) throws Exception {
		super(idAsistencia, fecha, legajo);
		this.motivo = motivo;
		setTareasRealizadas(tareasRealizadas);
	}

	public String getMotivo() {
		return motivo;
	}

	public void setMotivo(String motivo) {
		this.motivo = motivo;
	}

	public int getTareasRealizadas() {
		return tareasRealizadas;
	}

	public void setTareasRealizadas(int tareasRealizadas) throws Exception{
		if(tareasRealizadas>8) {
			throw new Exception("La cantidad de tareas realizadas es mayor a 8.");
		}
		this.tareasRealizadas = tareasRealizadas;
	}

	@Override
	public String toString() {
		return "\nTeletrabajo ["+ super.toString() + ", motivo=" + motivo + ", tareasRealizadas=" + tareasRealizadas + "]";
	}
	
	public double calcularHorasTrabajadas() {
		return getTareasRealizadas() * 1.5;
	}
}
