package modelo;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;

public class Sistema {
	private List<Empleado> lstEmpleados;
	private List<Tarea> lstTareas;
	
	public Sistema() {
		this.lstEmpleados = new ArrayList<Empleado>();
		this.lstTareas = new ArrayList<Tarea>();
	}

	public List<Empleado> getLstEmpleados() {
		return lstEmpleados;
	}

	public void setLstEmpleados(List<Empleado> lstEmpleados) {
		this.lstEmpleados = lstEmpleados;
	}

	public List<Tarea> getLstTareas() {
		return lstTareas;
	}

	public void setLstTareas(List<Tarea> lstTareas) {
		this.lstTareas = lstTareas;
	}

	@Override
	public String toString() {
		return "Sistema [lstEmpleados=" + lstEmpleados + ", lstTareas=" + lstTareas + "]";
	}
	
	public Empleado traerEmpleado(String nroLegajo) {
		Empleado buscado = null;
		int i = 0;
		while(i < lstEmpleados.size() && buscado == null) {
			Empleado comparado = lstEmpleados.get(i);
			if(comparado.getNroLegajo().equalsIgnoreCase(nroLegajo)) {
				buscado = comparado;
			}
			i++;
		}
		return buscado;
	}
	public Tarea traerTarea(int id) {
		Tarea buscada = null;
		int i = 0;
		while(i < lstEmpleados.size() && buscada == null) {
			Tarea comparada = lstTareas.get(i);
			if(comparada.getIdTarea() == id) {
				buscada = comparada;
			}
			i++;
		}
		return buscada;
	}
	//No implementa excepciones
	public boolean agregarEmpleado(String apellido, String nombre, String nroLegajo, double valorHora) {
		return lstEmpleados.add(new Empleado(apellido, nombre, nroLegajo, valorHora));
	}
	//idTarea es 1 
	//Si no hay objetos en la lstTareas de lo contrario se incrementa en 1 el idTarea del último objeto de la lista
	//No implementa excepciones
	public boolean agregarTarea(String tarea, LocalDate fechaInicio, LocalDate fechaFin, Empleado responsable, int cantHorasDiarias, boolean habil) {
		int i = 0;
		int idTarea = 1;
		while (i < lstTareas.size()) {
			if (lstTareas.size() > 0) {
				idTarea = lstTareas.get(lstTareas.size() - 1).getIdTarea() + 1;
			}
			i++;
		} 
		return lstTareas.add(new Tarea(idTarea, tarea, fechaInicio, fechaFin, responsable, cantHorasDiarias, habil));
	}
}
