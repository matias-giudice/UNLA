package modelo;

import java.time.LocalDate;

public class Tarea {
	private int idTarea;
	private String tarea;
	private LocalDate fechaInicio; //fecha de inicio de la tarea
	private LocalDate fechaFin; //fecha de fin de la tarea
	private Empleado responsable; //quien realiza la tarea
	private int cantHorasDiarias; //horas que trabaja por día
	private boolean habil; 
	// true significa que en esta tarea el responsable trabaja de Lunes a Viernes. 
	// Si esta false significa que trabaja sábado y domingo. (el examen no contempla feriados)
	public Tarea(int idTarea, String tarea, LocalDate fechaInicio, LocalDate fechaFin, Empleado responsable,
			int cantHorasDiarias, boolean habil) {
		this.idTarea = idTarea;
		this.tarea = tarea;
		this.fechaInicio = fechaInicio;
		this.fechaFin = fechaFin;
		this.responsable = responsable;
		this.cantHorasDiarias = cantHorasDiarias;
		this.habil = habil;
	}
	public int getIdTarea() {
		return idTarea;
	}
	public void setIdTarea(int idTarea) {
		this.idTarea = idTarea;
	}
	public String getTarea() {
		return tarea;
	}
	public void setTarea(String tarea) {
		this.tarea = tarea;
	}
	public LocalDate getFechaInicio() {
		return fechaInicio;
	}
	public void setFechaInicio(LocalDate fechaInicio) {
		this.fechaInicio = fechaInicio;
	}
	public LocalDate getFechaFin() {
		return fechaFin;
	}
	public void setFechaFin(LocalDate fechaFin) {
		this.fechaFin = fechaFin;
	}
	public Empleado getResponsable() {
		return responsable;
	}
	public void setResponsable(Empleado responsable) {
		this.responsable = responsable;
	}
	public int getCantHorasDiarias() {
		return cantHorasDiarias;
	}
	public void setCantHorasDiarias(int cantHorasDiarias) {
		this.cantHorasDiarias = cantHorasDiarias;
	}
	public boolean isHabil() {
		return habil;
	}
	public void setHabil(boolean habil) {
		this.habil = habil;
	}
	
	@Override
	public String toString() {
		return "\nTarea [idTarea=" + idTarea + ", tarea=" + tarea + ", fechaInicio=" + fechaInicio + ", fechaFin="
				+ fechaFin + ", responsable=" + responsable + ", cantHorasDiarias=" + cantHorasDiarias + ", habil="
				+ habil + "]";
	}
	
	//Si el responsable trabaja los fines de semana cobra un 50% más por cada hora de trabajo
	//Si habil=true, entonces el jornal=cantHorasDiarias*valorHora
	//Si habil=false, entonces el jornal=cantHorasDiarias*valorHora*1.5
	public double calcularJornal() {
		double jornal = 0;
		if(isHabil() == true) {
			jornal = getCantHorasDiarias() * responsable.getValorHora();
		} else {
			jornal = getCantHorasDiarias() * responsable.getValorHora() * 1.5;
		}
		return jornal;
	}
	
	//El método retorna la cantidad de días trabajados para esa tarea en ese mes y año dependiendo 
	//si el responsable trabaja de lunes a viernes o fines de semana.
	public int calcularCantDiasTrabajados (int mes, int anio) {
		int dias = 0;
		LocalDate fecha = LocalDate.of(anio, mes, 1);
		if(isHabil() == true) {
			dias = fecha.lengthOfMonth();
		} else {
			dias = fecha.lengthOfMonth();
		}
		return dias;
	}
	
	//Retorna el producto entre cantDiasTrabajados (ese mes y año) y el jornal, re-utilizando CU2 y CU3.
	public double calcularHonorarios(int mes, int anio) {
		return calcularCantDiasTrabajados(mes, anio) * calcularJornal();
	}
	

	
}
