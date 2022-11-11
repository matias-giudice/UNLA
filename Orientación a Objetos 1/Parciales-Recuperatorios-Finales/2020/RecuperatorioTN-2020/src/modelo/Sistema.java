package modelo;

import java.time.LocalDate;
import java.time.LocalTime;
import java.util.ArrayList;
import java.util.List;

public class Sistema {
	private List<Asistencia> asistencias;

	public Sistema() {
		this.asistencias = new ArrayList<Asistencia>();
	}

	public List<Asistencia> getAsistencias() {
		return asistencias;
	}

	public void setAsistencias(List<Asistencia> asistencias) {
		this.asistencias = asistencias;
	}

	@Override
	public String toString() {
		return "Sistema [asistencias=" + asistencias + "]";
	}
	
	// valida que aún no exista una asistencia para la misma fecha y legajo, lanza excepcion
	public boolean agregarTrabajoPresencial(LocalDate fecha, String legajo, LocalTime horaDesde, LocalTime horaHasta) throws Exception {
		int i = 0;
		int idAsistencia = 1;
		while (i < asistencias.size()) {
			if (asistencias.size() > 0) {
				idAsistencia = asistencias.get(asistencias.size() - 1).getIdAsistencia() + 1;
				if (asistencias.get(i).getFecha() == fecha && asistencias.get(i).getLegajo() == legajo) {
					throw new Exception("Ya existe esa asistencia con esa fecha y legajo.");
				}
			}
			i++;
		} 
		return asistencias.add(new TrabajoPresencial(idAsistencia, fecha, legajo, horaDesde, horaHasta));
	}
	public boolean agregarTeletrabajo(LocalDate fecha, String legajo, String motivo, int tareasRealizadas) throws Exception {
		int i = 0;
		int idAsistencia = 1;
		while (i < asistencias.size()) {
			if (asistencias.size() > 0) {
				idAsistencia = asistencias.get(asistencias.size() - 1).getIdAsistencia() + 1;
				if (asistencias.get(i).getFecha() == fecha && asistencias.get(i).getLegajo() == legajo) {
					throw new Exception("Ya existe esa asistencia con esa fecha y legajo.");
				}
			}
			i++;
		} 
		return asistencias.add(new Teletrabajo(idAsistencia, fecha, legajo, motivo, tareasRealizadas));
	}
	// retorna una lista
	public List<Asistencia> traerAsistencia (LocalDate fecha) {
		List<Asistencia> asistenciasEncontradas = new ArrayList<Asistencia>();
		for (int i = 0; i < asistencias.size(); i++) {
			if (asistencias.get(i) instanceof Teletrabajo) {
				Teletrabajo asistencia = (Teletrabajo) asistencias.get(i);
				if (asistencia.getFecha() == fecha) {
					asistenciasEncontradas.add(asistencia);
				}
			}
			if (asistencias.get(i) instanceof TrabajoPresencial) {
				TrabajoPresencial asistencia = (TrabajoPresencial) asistencias.get(i);
				if (asistencia.getFecha() == fecha) {
					asistenciasEncontradas.add(asistencia);
				}
			}
		}
		return asistenciasEncontradas;
	}
	public Asistencia traerAsistencia (LocalDate fecha, String legajo) {
		Asistencia encontrada = null;
		int i = 0;
		while (i < asistencias.size() && encontrada == null) {
			Asistencia asistencia = asistencias.get(i);
			if (asistencia.getFecha() == fecha && asistencia.getLegajo() == legajo) {
				encontrada = asistencia;
			}
			i++;
		}
		return encontrada;
	}
	//retorna una lista con las Asistencias según parámetro
	public List<Asistencia> traerAsistencia(boolean esPresencial) {
		List<Asistencia> asistenciasEncontradas = new ArrayList<Asistencia>();
		for (int i = 0; i < asistencias.size(); i++) {
			if (asistencias.get(i) instanceof Teletrabajo) {
				Teletrabajo asistencia = (Teletrabajo) asistencias.get(i);
				if (esPresencial == true) {
					asistenciasEncontradas.add(asistencia);
				}
			}
		}
		return asistenciasEncontradas;
	}
}
