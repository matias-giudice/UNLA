package modelo;

import java.time.LocalDate;
import java.time.LocalTime;

public class Funciones {
	public static boolean esBisiesto (int anio) {
		return (anio % 4 == 0) && ((anio % 100 != 0) || (anio % 400 == 0)); 
	}
	public static String traerFechaCorta (LocalDate fecha) {
		return fecha.getDayOfMonth()+"/"+fecha.getMonthValue()+"/"+fecha.getYear();
	}
	
	public static String traerHoraCorta (LocalTime hora) {
		return hora.getHour()+":"+hora.getMinute()+":"+hora.getSecond();
	}
	
	public static boolean esDiaHabil(LocalDate fecha) {
		int d = fecha.getDayOfWeek().getValue();
		return ((d >= 1) && (d <= 5));
	}

	public static String traerDiaDeLaSemana(LocalDate fecha) {
		return fecha.getDayOfWeek().toString();
	}
	
	public static String traerMesEnLetras (LocalDate fecha) {
		return fecha.getMonth().toString();
	}
	
	public static String traerFechaLarga (LocalDate fecha) {
		String[] dias = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
		String[] meses = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
		String dia = dias[fecha.getDayOfWeek().getValue()-1];
		String mes = meses[fecha.getMonthValue()-1];
		return dia +" "+ fecha.getDayOfMonth() + " de " + mes + " de " + fecha.getYear();
	}
	
	public static int traerCantDiasDeUnMes(int anio, int mes) {
		LocalDate fecha = LocalDate.of(anio, mes, 1);
		return fecha.lengthOfMonth();
	}
	
	public static double aproximar2Decimal (double valor) {
		return Math.round(valor*100.0)/100.0;
	}
	
	public static boolean esNumero(char c) {
		return Character.isDigit(c);
	}
	
	public static boolean esLetra(char c) {
		return Character.isLetter(c);
	}
	
	public static boolean esCadenaNros(String cadena) {
		boolean esNum = true;
		int i=0;
		while(i < cadena.length() && esNum){ // 1234
			if(esLetra(cadena.charAt(i))){
				esNum = false;
			}
			i++;
		}
		return esNum;
	}
	
	public static boolean esCandenaLetras(String cadena) {
		boolean esLetra = true;
		int i=0;
		while(i < cadena.length() && esLetra) {	// abcd
			if(esNumero(cadena.charAt(i))) {
				esLetra = false;
			}
		}
		return esLetra;
	}
	
	public static double convertirADouble(int n) {
		return (double)n;
	}
	public static double convertirAInt(String cadena) {
		return Integer.parseInt(cadena);
	}
	public static String convertirAString(int n) {
		return String.valueOf(n);
	}
	
	
}
