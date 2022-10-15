package modelo;

import java.time.LocalDate;
import java.time.LocalTime;

public class Funciones {	
	// ->Verifica si el dia es habil (devuelve un booleano)
	// ->true = si cumple con que este entre el lunes y viernes / false = no cumple
	public static boolean esDiaHabil(LocalDate fecha){
		//getDayOfWeek() -> obtiene el campo del día de la semana del 1 (lunes) al 7 (domingo)
		//getValue() -> obtiene el valor
		int dia = fecha.getDayOfWeek().getValue(); 
		return (dia>=1 && dia<=5);
	}
	// ->Verifica si el mes es habil (devuelve un booleano)
	// ->true = si cumple con que este entre enero y mayo / false = no cumple
	public static boolean esMesHabil(LocalDate fecha){
		int mes = fecha.getMonthValue(); //obtiene el campo del mes del año del 1 al 12
		return (mes>=1 && mes<=5);
	}
	// ->Verifica si el año es habil (devuelve un booleano)
	// ->true = si cumple con que este entre 1990 y 2022 / false = no cumple
	public static boolean esAnioHabil(LocalDate fecha){
		int anio = fecha.getYear(); //obtiene el campo del año
		return (anio>=1990 && anio<=2022);
	}
	// ->Suma y resta dias, meses, años
	public static LocalDate sumarDias(LocalDate fecha) {
		return fecha.plusDays(4);
	}
	public static LocalDate restarDias(LocalDate fecha) {
		return fecha.minusDays(4);
	}
	public static LocalDate sumarMeses(LocalDate fecha) {
		return fecha.plusMonths(4);
	}
	public static LocalDate restarMeses(LocalDate fecha) {
		return fecha.minusMonths(4);
	}
	public static LocalDate sumarAnios(LocalDate fecha) {
		return fecha.plusYears(4);
	}
	public static LocalDate restarAnios(LocalDate fecha) {
		return fecha.minusYears(4);
	}
	// ->Valida si una fecha es antes que otra
	public static boolean validarFechaAntesQueOtra(LocalDate fecha, LocalDate fechaNueva) {
		return fecha.isBefore(fechaNueva);
	}
	// ->Valida si una fecha es despues que otra
	public static boolean validarFechaDespuesQueOtra(LocalDate fecha, LocalDate fechaNueva) {
		return fecha.isAfter(fechaNueva);
	}
	// ->Valida si un año es bisiesto
	public static boolean validarSiFechaEsBisiesto(LocalDate fecha) {
		return fecha.isLeapYear();
	}
	
	// ->Traer dia, mes y año
	public static int traerDia(LocalDate fecha) {
		return fecha.getDayOfWeek().getValue(); 
	}
	public static int traerMes(LocalDate fecha) {
		return fecha.getMonthValue();
	}
	public static int traerAnio(LocalDate fecha) {
		return fecha.getYear();
	}
	
	// ->Suma y resta horas, minutos y segundos (tambien nano)
	public static LocalTime sumarHoras(LocalTime hora) {
		return hora.plusHours(4);
	}
	public static LocalTime restarHoras(LocalTime hora) {
		return hora.minusHours(4);
	}
	public static LocalTime sumarMinutos(LocalTime hora) {
		return hora.plusMinutes(4);
	}
	public static LocalTime restarMinutos(LocalTime hora) {
		return hora.minusMinutes(4);
	}
	public static LocalTime sumarSegundos(LocalTime hora) {
		return hora.plusSeconds(4);
	}
	public static LocalTime restarSegundos(LocalTime hora) {
		return hora.minusSeconds(4);
	}
	public static LocalTime sumarNanos(LocalTime hora) {
		return hora.plusNanos(4);
	}
	public static LocalTime restarNanos(LocalTime hora) {
		return hora.minusNanos(4);
	}
	
	// ->Traer hora, minutos, segundos y nanos
	public static int traerHora(LocalTime hora) {
		return hora.getHour(); 
	}
	public static int traerMinutos(LocalTime hora) {
		return hora.getMinute(); 
	}
	public static int traerSegundos(LocalTime hora) {
		return hora.getSecond(); 
	}
	public static int traerNanos(LocalTime hora) {
		return hora.getNano(); 
	}
	
	// ->Validar un LocalTime
	// ->Usando métodos como 
	// ->isBefore podremos saber si una hora es antes a otra.
	public static boolean validarHoraAntesQueOtra(LocalTime hora, LocalTime horaNueva) {
		return hora.isBefore(horaNueva);
	}
	// ->isAfter podremos saber si una hora es despues a otra.
	public static boolean validarHoraDespuesQueOtra(LocalTime hora, LocalTime horaNueva) {
		return hora.isAfter(horaNueva);
	}
	// ->Compara horas
	// ->si horaNueva > hora, se devuelve un uno negativo (-1).
	// ->si horaNueva == hora, se devuelve un cero (0)
	// ->si horaNueva < hora, se devuelve un uno positivo (1).
	public static int compararHora(LocalTime hora, LocalTime horaNueva) {
		return hora.compareTo(horaNueva);
	}
}
